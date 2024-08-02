#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
vector<int> solve(vector<vector<int>> mat){
    int min = mat[0][1];
    int min2 = INT_MAX;
    vector <int> ans;
    for(int i=0; i<mat.size(); i++)
    {
        if(mat[i][1] < min)
        {
            min2 = min;
            min = mat[i][1];
        }
        else if(min < mat[i][1] && min2 > mat[i][1])
            min2 = mat[i][1];
    }
    for(int i=0; i<mat.size(); i++)
    {
        if(mat[i][1] == min2)
            ans.push_back(mat[i][0]);
    }
    std::sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int row;
    cin>>row;
    int col;
    cin>>col;
    vector<vector<int>> num (row, vector<int>(col));
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            cin>>num[i][j];
    }
    vector <int> res = solve(num);
    for(int i=0; i<res.size(); i++)
        cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}