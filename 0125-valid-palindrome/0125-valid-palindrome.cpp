class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        string str;
        for(int i=0;i<len;i++){
            if(s[i]>=65 && s[i]<=90){
                str+=(s[i]+32);
            }
            else if(s[i]>=97 && s[i]<=122){
                str+=s[i];
            }
            else if(s[i]>=48 && s[i]<=57){
                str+=s[i];
            }
            else{
                continue;
            }
        }
        int str_len=str.size();
        for(int i=0;i<str_len/2;i++){
            if(str[i]==str[str_len-1-i]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};