class Solution {
public:
    
    bool checkIsomorphic(string s, string t){
        int len1=s.length();
        int len2=t.length();
        if(len1!=len2)
            return false;
        
        unordered_map<char, char> hash;
        for(int i=0; i<len1; i++){
            if(hash.find(s[i])==hash.end()){
                hash[s[i]]=t[i];
            }
            else{
                if(hash[s[i]] != t[i]){
                    return false;
                }
                continue;
            }
        }
        return true;
    }
    
    bool isIsomorphic(string s, string t) {
        if(s==t)
            return true;
        return checkIsomorphic(s,t) && checkIsomorphic(t,s);
    }
};