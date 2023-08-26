class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        for(int i=0;i<n;i++){
            sort(nums.begin(),nums.end());
            int target = -nums[i];
            int front = i+1;
            int back = n-1;
            while(front<back){
                if(nums[front]+nums[back]<target){
                    front++;
                }
                else if(nums[front]+nums[back]>target){
                    back--;
                }
                else{
                    vector<int> triplet(3,0);
                    triplet[0] = nums[i];
                    triplet[1] = nums[front];
                    triplet[2] = nums[back];
                    result.push_back(triplet);
                    while(front<back && nums[front]==triplet[1]) front++;
                    while(front<back && nums[back]==triplet[2]) back--;
                }


            }
            while(i+1<n && nums[i+1]==nums[i]) i++;

        }
        return result;


    }
};  