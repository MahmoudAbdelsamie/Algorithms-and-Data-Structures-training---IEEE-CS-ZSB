// Problem link : https://www.hackerrank.com/challenges/flipping-the-matrix/problem
#include <bits/stdc++.h>
using namespace std;


int main() {
    int T; cin>>T;

    while(T--)
    {
        long long matrix[256][256];
        int n;
        cin>>n;
        for(int j = 0; j<2*n; j++)
        {
            for(int k = 0; k<2*n; k++)
            {
                cin>>matrix[j][k];
            }
        }
        long long total = 0;
        for(int j = 0; j<n; j++)
        {
            for(int k = 0; k<n; k++)
            {
                total+=max(max(matrix[j][k], matrix[2*n-1-j][k]),max(matrix[j][2*n-1-k], matrix[2*n-1-j][2*n-1-k]));
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
