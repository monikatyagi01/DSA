class Solution {
public:
    string reverseWords(string s) {
        int l=s.length();
        reverse(s.begin(),s.end());

        string ans="";
        for(int i=0;i<l;i++)
        {
              string str="";   
            while(i<l && s[i]!=' ')          
            {    
                str+=s[i];
                i++;
            }
            reverse(str.begin(),str.end());
            if(str.length()>0)
            ans+=" "+str;
        }
        return ans.substr(1);
    }
};