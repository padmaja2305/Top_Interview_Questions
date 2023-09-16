class Solution {
public:
    int minDeletions(string s) {
        int count = 0;
        unordered_map<char, int> m;
        for (char c : s) {
            m[c]++;
        }
        vector<int>freqOfFrequencies;
        int deletionCount = 0;
        for(const auto& kv : m){
            freqOfFrequencies.push_back(kv.second);
        }
        
        }
        sort(freqOfFrequencies.begin(),freqOfFrequencies.end());

        for(int i=0;i<freqOfFrequencies.size();i++){
            while(freqOfFrequencies[i]>= freqOfFrequencies[i-1]){
                freqOfFrequencies[i]--;
                deletionCount++;

            }
        }
        return deletionCount;
        
    }
};