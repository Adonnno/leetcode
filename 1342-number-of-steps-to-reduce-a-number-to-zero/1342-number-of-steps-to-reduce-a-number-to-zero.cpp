class Solution {
public:
    int numberOfSteps(int num) {
        int i=0;
        while(num){
        /*  modulo
            if(num%2==0){
                num= num/2;
            }
        */
            if(!(num&1)){
                num = num>>1;
            }
            else{
                num = num -1;
            }

            i++;
        }

        return i;
    }
};