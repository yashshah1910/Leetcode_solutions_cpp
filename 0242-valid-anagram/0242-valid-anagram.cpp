class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int n=s.size(), count[26]={0};
        for(int i=0;i<n;i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            count[t[i]-'a']--;
            if(count[t[i]-'a']<0)
                return false;
        }
        return true;
    }
};