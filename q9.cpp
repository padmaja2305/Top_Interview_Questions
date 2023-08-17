class Solution {
public:
    bool isSubsequence(string s, string t) {

        
        
        for (int i =0; i++;i<s.length){
            for(int j=0;j++;j<t.length){
                if(s[i]==t[j]){
                    i++;
                    j++;
                }
                else
                    j++;

            }

        }
        if(i ==s.length)
            return true;
        else
            return false;
    }
};