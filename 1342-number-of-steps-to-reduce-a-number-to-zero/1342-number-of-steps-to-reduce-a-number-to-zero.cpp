class Solution {
public:
    int numberOfSteps(int num) {
        long long count=0;
        if(num==0)
            return 0;
        while(num!=0){
            if(num&1==1){
                count+=2;
                num>>=1;
            }
            else{
                num>>=1;
                count+=1;
            }
        }
        return count-1;
    }
};