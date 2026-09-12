class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1=INT_MIN , e2=INT_MIN;
        int c1=0 , c2=0;

        for(int i: nums){
            if(c1 == 0 && e2 != i){
                c1 =1;
                e1=i;
            } 
            else if(c2==0 && e1 != i){
                c2=1;
                e2=i;
            }
            else if(i== e1) c1++;
            else if(i==e2) c2++;
            else{
                c1--,c2--;
            }
        }

        vector<int>ans;
        c1=0 , c2=0;
        for(int i : nums){
            if(i == e1) c1++;
            if(i==e2) c2++;
        }

        if(c1 > nums.size()/3) ans.push_back(e1);
        if(c2>nums.size()/3) ans.push_back(e2);

        return ans;
        
    }
};