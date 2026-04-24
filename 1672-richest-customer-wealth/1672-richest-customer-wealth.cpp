class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int c_num= accounts.size();
        int b_num= accounts[0].size();
        int rich_wealth=0;

        for(int i=0;i<c_num;i++){
            int total_wealth=0;
            
            for(int j=0;j<b_num;j++){
                total_wealth+=accounts[i][j];
            }

            if(rich_wealth<total_wealth) rich_wealth=total_wealth;

        }

        return rich_wealth;
    }
};