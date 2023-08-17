class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        long long int i = 0;
        long long int j = numbers.size()-1;
        vector<int> result; 
        while (i < j) {
            
                if (numbers[i] + numbers[j] == target) {
                                    result.push_back(i+1), result.push_back(j+1), i++, j--;

                }
                else if (numbers[i]+numbers[j]<target)
                i++;

                else
                j--;
        }
        
        return result;
    }
};