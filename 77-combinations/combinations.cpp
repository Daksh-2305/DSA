class Solution {
public:
void solve(int i , int n , int k , vector<int>&current , vector<vector<int>>&ans){
    if(current.size()==k){
    ans.push_back(current);
    return;
    }
 for(int num = i ; num<=n ; num++){
    current.push_back(num);
    solve(num+1,n,k,current,ans);
    current.pop_back();
}
}



    vector<vector<int>> combine(int n, int k) {
        vector<int>current;
        vector<vector<int>>ans;
         solve(1,n,k,current,ans);
         return ans;
        
    }
};