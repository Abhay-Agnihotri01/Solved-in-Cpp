class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int i=matrix.size();
        int j=matrix[0].size();
        int count=0;
        int total=i*j;
        int startingrow=0;
        int startingcol=0;
        int endingrow=i-1;
        int endingcol=j-1;
        while(count<total){
            //print starting row
            for(int index=startingcol;count<total&&index<=endingcol;index++){
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;
            //print ending column
            for(int index=startingrow;count<total&&index<=endingrow;index++){
                ans.push_back(matrix[index][endingcol]);
                count++;
            }
            endingcol--;
            //print ending row
            for(int index=endingcol;count<total&&index>=startingcol;index--){
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;
            //print starting column
            for(int index=endingrow;count<total&&index>=startingrow;index--){
                ans.push_back(matrix[index][startingcol]);
                count++;
            }
            startingcol++;


        }
        return ans;
        
    }
};