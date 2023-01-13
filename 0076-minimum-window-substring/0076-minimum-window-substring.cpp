class Solution {
public:
    string minWindow(string s, string t) {
        if(s==t)
            return s;
        int s_len=s.size(), t_len=t.size();
        if(t_len>s_len)
            return "";
        
        unordered_map <char,int> window;
        unordered_map <char,int> map;
        
        for(int i=0;i<t_len;i++){
            map[t[i]]++;
        }
        
        int count=0, min=INT_MAX;
        string res;
        
        for(int i=0, j=0;i<s_len;i++){
            if(map.find(s[i])!=map.end()){
                window[s[i]]++;
                if(window[s[i]]<=map[s[i]]){
                    count++;
                }
            }
            if(count==t_len){
                while(map.find(s[j])==map.end() || window[s[j]]>map[s[j]]){
                    window[s[j]]--;
                    j++;
                }
                if(i-j+1<min){
                    min=i-j+1;
                    res=s.substr(j,min);
                }
                window[s[j]]--;
                j++;
                count--;
            }
        }
        return res;
        
    }
};