class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>count(1001,0);
        vector<int>ans;
        
        for(auto &arr :nums){ //traverese every array
            for(int x : arr){ //traverse no in each array
                count[x]++;
            }
        }

            for(int i=1 ; i<=1000;i++){
                if (count[i]==nums.size()){ // checks if number is present in all array?
                    ans.push_back(i);
                }
            }
            return ans;

        
        
    }
};