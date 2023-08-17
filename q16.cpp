class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int l, r;
        l=0;
        r=n-1;
        while(l<r){
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
        l=0;
        r=k-1;
        while(l<r){
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
        l=k;    
        r=n-1;
        while(l<r){
            swap(nums[l], nums[r]);
            l++;
            r--;
        }


    }
};


//method 2
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            result.push_back(nums[(i+n-k)%n]);
        }
        nums = result;

    }
};