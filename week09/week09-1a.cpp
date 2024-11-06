class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i=0,j=0,dir=0;
        int dI[4]={0,1,0,-1};
        int dJ[4]={1,0,-1,0};

        vector<int> ans;
        ans.push_back( matrix[i][j]);
        i+=dI[dir];
        j+=dJ[dir];
        ans.push_back(matrix[i][j]);//push_back 右邊加一個數字
        i+=dI[dir];
        j+=dJ[dir];
        ans.push_back(matrix[i][j]);
        //這個程式不會轉方向
        return ans;
    }
};