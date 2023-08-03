class Solution {
public:
    void sol(vector<string>& res, int open, int close, string str){
        if(open==0 && close==0){
            return res.push_back(str);
        }
        if(open > 0){
            sol(res, open-1, close, str+"(");
        }
        if(close>0 && close>open){
            sol(res, open, close-1, str+")");
        }
    }
        
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        sol(res, n, n, "");
        return res;
    }
};