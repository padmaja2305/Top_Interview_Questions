class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        string str= "";
        for(int i=0;i<s.size();i++){
            if(int(s[i])==32){
                words.push_back(str);
                str="";
            }
            else{
                str += s[i];
            }
               
        }
        words.push_back(str);
       
        if(pattern.size() != words.size())
            return false;
        unordered_map<char,string>ans;
        unordered_map<string, char>ans2;
        ans[pattern[0]]=words[0];
        ans2[words[0]]=pattern[0];
       
        for(int i=1;i<s.size();i++){
            if(ans[s[i]]!=words[i]){
                return false;
            }
            if(ans2[words[i]]!=s[i]){
                return false;
            }
            ans[pattern[i]]=words[i];
            ans2[words[i]]=pattern[i];
        }
        return true;        
    }
};