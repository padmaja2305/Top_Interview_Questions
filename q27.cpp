class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char,int> m1;
        unordered map <char,int> m2;

        for(int i=0;i<magazine.size();i++){
            char k = magazine[i];
            m1[k]++;
        }

        for(int i =0;i<ransomNote.size();i++){
            if(m1[ransomNote[i]] - )
        }
        
    }
};