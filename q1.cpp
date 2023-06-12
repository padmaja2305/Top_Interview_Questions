class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ans =0;
        for(int i =0;i<nums.size();i++){
            if(nums[i] != 0){
                nums[ans++] = nums[i];
            }
        }
    for(int i = ans;i<nums.size();i++){
        nums[i]=0;
    }
    }
};