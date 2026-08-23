class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int temp[n];
        int counter=0;
        for(int i =0;i<n;i++){
            if(nums[i]!=0){
                temp[counter]=nums[i];
                counter++;
            }
        }
        for(int i =0;i<counter;i++){
            nums[i]=temp[i];
        }
        for(int i =counter;i<n;i++){
            nums[i]=0;
        }
        }
        
    
};