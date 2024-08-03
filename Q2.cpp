#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cout<<"enter no. of rows and cols : \n";
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int> (n));
    cout<<"enter the matrix : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"transpose of matrix : \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}
