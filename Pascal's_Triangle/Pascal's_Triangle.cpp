class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        int i,j,k,n;
        vector<int>ans2;
        ans2.push_back(1);
        ans.push_back(ans2);
        for(i=2;i<=numRows;i++){
            vector<int>ans1;
            ans1.push_back(1);
           for(j=1;j<i-1;j++){
            ans1.push_back(ans[i-2][j]+ans[i-2][j-1]);
           }
            ans1.push_back(1);
            ans.push_back(ans1);
        }
        return ans;
    }
};
