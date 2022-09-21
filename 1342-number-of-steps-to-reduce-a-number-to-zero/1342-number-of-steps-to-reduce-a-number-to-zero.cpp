class Solution {
public:
    int numberOfSteps(int num) {
        long long count=0;
        while(num!=0){
            if(num%2==0){
                num=num/2;
                count++;
            }
            else{
                num=num-1;
                count++;
            }
        }
        return count;
    }
};