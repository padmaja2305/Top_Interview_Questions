class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;        
        vector<int> output;

        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=val){
                ans.push_back(nums[i]);
            }

        }
        output = nums.length();
        sort(output.begin(),output.end());
    }
};