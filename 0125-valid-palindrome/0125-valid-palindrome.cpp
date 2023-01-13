class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        string str;
        for(int i=0;i<len;i++){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        }
        int str_len=str.size();
        for(int i=0;i<str_len/2;i++){
            if(str[i]!=str[str_len-1-i]){
                return false;
            }
        }
        return true;
    }
};