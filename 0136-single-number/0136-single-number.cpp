class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            int counter = 0;

            for(int j = 0; j < n; j++) {
                if(arr[i] == arr[j]) {
                    counter++;
                }
            }

            if(counter == 1) {
                return arr[i];
            }
        }

        return -1;
    }
};