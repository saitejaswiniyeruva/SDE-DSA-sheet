#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    //n=rows
    //m=coloums
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(matrix[i][j]==0) {
                for(int k=0;k<n;k++) {
                    if(matrix[k][j]!=0)
                    matrix[k][j]=-1;
                }
                for(int k=0;k<m;k++) {
                    if(matrix[i][k]!=0)
                    matrix[i][k]=-1;
                }
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(matrix[i][j]== -1)
                matrix[i][j]=0;
        }
    }
}

int main() {
    vector<vector<int>> matrix;
    for(int i=0;i<matrix.size();i++) {
        for(int j=0;j<matrix[0].size();j++) {
            cin>>matrix[i][j];
        }
    }
    setZeros(matrix);
    for(int i=0;i<matrix.size();i++) {
        for(int j=0;j<matrix[0].size();j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
