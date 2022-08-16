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
    const int M = 1e9 + 7;
    for (int k = 0; k < t; k++) {
        int n;
        cin>>n;
        int arr[n];

        for (int j = 0; j < n; ++j) {
            cin>>arr[j];
        }

        vector<vector<int>> dp(n + 1, vector<int>(7));
        dp[0][0] = 1;
        for (int i = 0; i < n; ++i) {
            int l = to_string(arr[i]).size();
            int p = 1;
            while (l--) {
                p *= 10;
            }
            for (int j = 0; j < 7; ++j) {
                int use = (j * p + arr[i]) % 7;
                dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % M;
                dp[i + 1][use] = (dp[i + 1][use] + dp[i][j]) % M;
            }
        }
        cout<<(dp[n][0] - 1 + M) % M<<endl;
    }

    return 0;
}
