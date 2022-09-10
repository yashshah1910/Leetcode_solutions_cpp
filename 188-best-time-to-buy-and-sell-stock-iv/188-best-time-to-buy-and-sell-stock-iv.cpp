class Solution {
    private:
     int memo[201][1001];
public:
    int maxProfit(int k, vector<int>& prices) {
        memset(memo,-1,sizeof(int)*201*1001);
        return fun(prices,0,0,k);
    }
    
    int fun(vector<int>&prices,int index,int tran_no,int k)
    {
        if(index==prices.size()|| tran_no==2*k)
            return 0;
        if(memo[tran_no][index]!=-1)
            return memo[tran_no][index];
        
        int result=0;
        if(tran_no%2==0)
        // Buy
return memo[tran_no][index]=max(-prices[index]+fun(prices,index+1,tran_no+1,k),0+fun(prices,index+1,tran_no,k));
        
        else
            // Sell
            return memo[tran_no][index]= max(prices[index]+fun(prices,index+1,tran_no+1,k),0+fun(prices,index+1,tran_no,k));
        
       
    }
};