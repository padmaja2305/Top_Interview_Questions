class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<string> v;
        string temp="";
        for(int i =0;i<haystack.size();i++){
            for(int j =0;j<needle.size();j++){
                if(haystack[i]==needle[j]){
                    temp+=haystack[i];
                    i++;
                    j++;
                }
                else{
                    temp="";
                    break;
                }
            }
            if(temp!="")
                v.push_back(temp);
        }
        if(v.size()==0)
            return -1;
        else
            return v.size()-1;

    }
};