class Solution {
public:
    int singleNumber(vector<int>& arr) {
        unordered_map<int, int> hash;

        for(int i = 0; i < arr.size(); i++) {
            hash[arr[i]]++;
        }

        for(int i = 0; i < arr.size(); i++) {
            if(hash[arr[i]] == 1) {
                return arr[i];
            }
        }

        return -1;
    }
};