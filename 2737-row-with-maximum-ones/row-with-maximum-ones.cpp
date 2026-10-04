class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int index = -1;
        int maxCount = -1;
        for(int i = 0 ; i<mat.size() ; i++){
           int countRow=0;
            for(int j=0 ; j<mat[i].size() ; j++){
                countRow += mat[i][j];
            }
            if(countRow>maxCount){
                maxCount = countRow;
                index = i;
            }
        }
        return {index,maxCount};
        
    }
};