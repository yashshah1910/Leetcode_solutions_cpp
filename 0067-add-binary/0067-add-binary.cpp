class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        int carry=0;
        string res;
        
        while(i>=0 || j>=0){
            int sum = carry;
            if(i>=0){
                sum+=(a[i--]-'0');
            }
            if(j>=0){
                sum+=(b[j--]-'0');
            }
            carry = sum > 1 ? 1:0;
            
            res+=to_string(sum&1);
        }
        
        if(carry)
            res+=to_string(carry);
        
        reverse(res.begin(), res.end());
        return res;
    }
};