class Solution {
public:
bool possible(vector<int>& bloomDay , int day , int m , int k){
    int count = 0 ;
    int bouqets = 0;
    for(int i = 0 ; i<bloomDay.size() ; i++){
        if(bloomDay[i]<=day){
            count++;
            }
        else{
            bouqets += count / k;
            count =0;
        }
    }
        bouqets += count/k;
        return bouqets >= m;
    
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int required = 1LL*m*1LL*k;

        if(required>bloomDay.size()) return -1;
        int mini = INT_MAX , maxi = INT_MIN;
        for(int i = 0 ; i<bloomDay.size();i++){
            mini = min (mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }

        int low = mini ;
        int high = maxi;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(possible(bloomDay,mid,m,k)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
        
    }
};