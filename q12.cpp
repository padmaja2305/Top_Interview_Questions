class Solution {
public:
    int strStr(string haystack, string needle) {
      
        if needle.length()==0
            return 0;
        int h = haystack.size();
        int n = needle.size();
        for(i=0;i<(h-n+1);i++){
            for(j=0;j<n;j++){
                if(haystack[i+j]!=needle[j])
                    break;
                if(j=n-1)
                    return i;
                
                return -1;
            }


        }


    }

};