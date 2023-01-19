class Solution {
public:
    int longestPalindrome(string s) {
        // count odd number of char in sring
        // return string size - odd number of character + 1(if odd number of char > 0)
        int oddCount=0;
        for(char ch='A'; ch<='z';ch++){
            // if count of ch in string odd +1 or +0
            oddCount+=count(s.begin(), s.end(), ch) & 1;
        }
        return s.size()-oddCount+(oddCount>0);
    }
};