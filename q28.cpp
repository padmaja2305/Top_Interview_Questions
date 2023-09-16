class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;
        unordered_map<char, char> n;

            for (int i = 0; i < s.size(); i++) {
                if (m[s[i]] && m[s[i]] != t[i]){
                    return false;

                }
                if (n[t[i]] && n[t[i]]!= s[i]){
                    return false;
                }
                m[s[i]] = t[i];
                n[t[i]] = s[i];
                
            }
return true;
    }
};


//idhar vala udhar hona chaahiye and udhar vala idhar hona chaahiye