#include <bits/stdc++.h>


vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    for(int i = 0; i < numRows; i++){
        vector<int> col(i+1, 1);
        for(int j = 1; j < i; j++){
            col[j] = ans[i-1][j-1] + ans[i-1][j];
        }
        ans.push_back(col);
    }
    return ans;
}