class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for(int i=1;i<=n;i++){
            string ans="";
            if(i%3==0){
                ans += "Fizz";
            }
            if(i%5==0){
                ans += "Buzz";
            }
            if(i%3 != 0 && i%5 != 0){
                ans += to_string(i);
            }

            answer[i-1]=ans;
        }


        return answer;
    }
};