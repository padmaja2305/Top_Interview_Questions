class Solution {
public:
    int hIndex(vector<int>& citations) {
        int count = 0;
        
        for(int i = 0;i<citations.size();i++){
            sort(citations.begin(), citations.end());
            if(citations[i]>=citations.size()-i)
                count++;


        }
        return count;
        
    }
};