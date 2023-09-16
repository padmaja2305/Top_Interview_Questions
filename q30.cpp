class Solution {
public:
    bool isAnagram(string s, string t) {
        unorder_map<string, string>countS;
        unorder_map<string, string>countT;

        if(s.length() != t.length())
        {
            return false;
        }

        for(int i =0;i<s.length();i++){
            countS[s[i]]++;
            countT[t[i]]++;
            }
        }
        for(int i =0;i<countS.size();i++){
            if(countS[s[i]]!= countT[t[i]]){
                return false;
            }

        }
        return true;
    }
};