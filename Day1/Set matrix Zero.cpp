//question: https://takeuforward.org/data-structure/set-matrix-zero/
//Time complexity: O(n^3)
//Space Complexity: O(1)


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
    int row,col;
    cin>>row>>col;
    vector<vector<int>> matrix(row);
    for(int i=0;i<row;i++) {
        int temp;
        for(int j=0;j<col;j++) {
            cin>>temp;
            matrix[i].push_back(temp);
        }
    }
    setZeros(matrix);
    for(int i=0;i<row;i++) {
        for(int j=0;j<matrix[0].size();j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
