class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)
            return false;
        stack<char> st;
        for(auto i:s)
        {
            if(i=='(' or i=='{' or i=='[') 
                st.push(i);
            else
                {
                    if(st.empty() || (st.top()=='(' && i!=')') || (st.top()=='{' && i!='}') || (st.top()=='[' && i!=']')) 
                        return false;
                    st.pop();  
                }
        }
        return st.empty();
        
    }
};