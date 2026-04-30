class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int len = nums.size();
        int evenCount = 0 ;
        for(int i=0;i<len;i++){
            int digitCount = 1;
            int num = nums[i];
            while(num>=10){
                digitCount++;
                num = num/10;
            }
            if(digitCount&1){
                continue;
            }
            else{
                evenCount++;
            }
        }
        return evenCount;
    }
};