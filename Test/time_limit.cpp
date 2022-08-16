#include<iostream>
#include <vector>
#include<algorithm>
#include <array>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main() {

    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        vector<int> a;
        int n;
        cin>>n;
        for (int j = 0; j < n; ++j) {
            int v;
            cin>>v;
            a.push_back(v);
        }
        int b;
        cin>>b;
        int l[b];
        int r[b];
        int x[b];

        for (int k = 0; k < b; ++k) {
            cin>>l[k];
            cin>>r[k];
            cin>>x[k];
        }

        for (int m = 0; m < b; ++m) {
            int c = 0;
            for (int j = l[m] - 1; j < r[m]; ++j) {
                if ((a[j] ^ x[m]) > (a[j] & x[m])) {
                    c++;
                }
            }
            cout<<c<<endl;
        }
    }

    return 0;
}

