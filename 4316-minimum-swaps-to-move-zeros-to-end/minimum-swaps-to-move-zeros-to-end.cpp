class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zeros = 0;
        int count = 0;
        for(int x : nums){
            if(x==0)
            zeros++ ;
        }

        for(int i =0 ; i<nums.size()-zeros;i++){
            if(nums[i]==0)
            count++;

        }
        return count;
    }
};