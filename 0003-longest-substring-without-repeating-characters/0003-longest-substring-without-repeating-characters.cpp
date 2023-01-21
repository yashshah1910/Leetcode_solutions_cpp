class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char>set;
        int i=0, j=0, count=0;
        while(i<n && j<n){
            if(set.find(s[j]) == set.end()){
                set.insert(s[j++]);
                count=max(count, j-i);
            }
            else{
                set.erase(s[i++]);
            }
        }
        return count;
    }
};