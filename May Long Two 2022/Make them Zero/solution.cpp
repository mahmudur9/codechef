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

    while (t--) {
        int n, bit[32] = {};
        cin>>n;
        for (int i = 0; i < n; ++i) {
            int a, j = 0;
            cin>>a;
            while (a) {
                if (bit[j] == 0) {
                    bit[j] = a % 2;
                }
                a /= 2;
                j++;
            }
        }
        int ans = 0;
        for (int k = 0; k < 32; ++k) {
            ans += bit[k];
        }
        cout<<ans<<endl;
    }

    return 0;
}

