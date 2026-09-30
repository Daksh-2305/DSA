class Solution {
public:
    int countTriplets(vector<int>& arr) {
        unordered_map<int,int> count;
        unordered_map<int,int> sum;

        int xr=0;
        int ans=0;
        
        sum[0]=0;
        count[0]=1;

        for(int k=0 ; k<arr.size();k++){
            xr^=arr[k];
            
            if(count.find(xr)!=count.end()){
                ans+= count[xr]*k-sum[xr];
            }
            count[xr]++;
            sum[xr]+=k+1;
        }
        return ans;
    }
};