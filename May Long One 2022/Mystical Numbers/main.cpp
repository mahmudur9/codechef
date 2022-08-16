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
#include <cmath>

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

        int dp[n + 1][33];
        for (int i = 0; i <= n; ++i) {
            int val = a[i - 1];
            for (int j = 0; j <= 32; ++j) {
                dp[i][j] = dp[i - 1][j];
            }
            int p = 32;
            if (val != 0) {
                p = int (log(val) / log(2));

            }
            dp[i][p]++;
        }
        int q;
        cin>>q;
        while (q-- != 0) {
            int l, r, x;
            cin>>l;
            cin>>r;
            cin>>x;
            int pr = 32;
            if (x != 0) {
                pr = int (log(x) / log(2));
            }
            int c = dp[r][pr] - dp[l - 1][pr];
            cout<<(r - l + 1 - c)<<endl;
        }
    }

    return 0;
}

