class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> postfix;
        vector<int> result;
        int n = nums.size();
        int p = 1;
        for(int i=0;i<n;i++){
            p = p*nums[i];
            prefix.push_back(p);
        }
        p = 1;
        for(int i=n-1;i>=0;i--){
            p = p*nums[i];
            postfix.push_back(p);
        }
        reverse(postfix.begin(), postfix.end());
        for(int i=0;i<n;i++){
            if(i==0)
                result.push_back(postfix[i+1]);
            else if(i==n-1)
                result.push_back(prefix[i-1]);
            else
                result.push_back(prefix[i-1]*postfix[i+1]);
        }
        return result;
    }
};

