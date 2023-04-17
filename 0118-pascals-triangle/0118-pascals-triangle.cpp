class Solution {
public:
    
    void pascal(vector<vector<int>>& ans, int numRows, int n){
        
        // base
        if(n == numRows)
            return;
        
        vector<int>temp;
        temp.push_back(1);
        if(n==0){   
            ans.push_back(temp);
            return pascal(ans, numRows, n+1);
        }
        
        for(int i=0 ; i<n-1 ; i++){
            int el = ans[n-1][i] + ans[n-1][i+1];
            temp.push_back(el);
        }
        temp.push_back(1);
        ans.push_back(temp);
        return pascal(ans, numRows, n+1);
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        pascal(ans, numRows, 0);
        return ans;
    }
};