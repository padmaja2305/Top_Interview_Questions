class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min=INT_MAX;
        int n = nums.size();
        int sum=0;
        int start=0;
        for(int end=0;end<n;end++){
            sum+=nums[end];
            while(sum>=target){
                min = std::min(min,end-start+1);
                sum-=nums[start];
                start++;
            }
        }
        return min==INT_MAX?0:min;
        
    }
};