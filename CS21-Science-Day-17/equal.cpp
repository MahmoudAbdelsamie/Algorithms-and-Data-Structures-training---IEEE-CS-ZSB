#include <bits/stdc++.h>

using namespace std;

int count_operations(vector<int> counts_choc)
{
    int min_elem = *min_element(begin(counts_choc), end(counts_choc));
    int n_ops0 = 0; //number of operation assuming base 0
    int n_ops1 = 0; //number of operation assuming base 1
    int n_ops2 = 0; //number of operation assuming base 2
    for(int colleague = 0; colleague < counts_choc.size(); colleague++)
    {
        counts_choc[colleague] -= min_elem; //smallest element 0
        n_ops0 += counts_choc[colleague]/5;
        n_ops0 += (counts_choc[colleague]%5)/2;
        n_ops0 += (counts_choc[colleague]%5)%2;
        counts_choc[colleague] ++; //smallest element 1
        n_ops1 += counts_choc[colleague]/5;
        n_ops1 += (counts_choc[colleague]%5)/2;
        n_ops1 += (counts_choc[colleague]%5)%2;
        counts_choc[colleague] ++; //smallest element 2
        n_ops2 += counts_choc[colleague]/5;
        n_ops2 += (counts_choc[colleague]%5)/2;
        n_ops2 += (counts_choc[colleague]%5)%2;
    }
    
    return min(n_ops0, min(n_ops1, n_ops2));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n_tests;
    cin >> n_tests;
    vector<vector<int>> data;
    for(int test = 0; test < n_tests; test++)
    {
        int n_colleagues;
        cin >> n_colleagues;
        vector<int>counts_choc;
        for(int colleague = 0; colleague < n_colleagues; colleague++)
        {
            int count;
            cin >> count;
            counts_choc.push_back(count);
        }
        data.push_back(counts_choc);
    }
    for(int test = 0; test < n_tests; test++)
    {
        cout << count_operations(data[test]) << endl;
    }
    return 0;
}