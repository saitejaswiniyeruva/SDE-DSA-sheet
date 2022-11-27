//Question: https://takeuforward.org/data-structure/program-to-generate-pascals-triangle/
//Time Complexity: O(n^2)
//Space complexity: O(n^2)

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> a(numRows);
    int k=a.size();
    for(int i=0;i<numRows;i++) {
        for(int j=0;j<=i;j++) {
            int temp;
            if(j==0 || j==i) {
                temp = 1;
                a[i].push_back(temp);
            } else {
                temp=a[i-1][j-1]+a[i-1][j];
                a[i].push_back(temp);
            }
        }
    }
    return a;
}
int main() {
    int n;
    cin>>n;
    generate(n);
    for(int i=0;i<generate(n).size();i++) {
        for(int j=0;j<generate(n)[i].size();j++) {
            cout<<generate(n)[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
