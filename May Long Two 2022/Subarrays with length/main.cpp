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

// This code runs properly in java
int main() {

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;
        int arr[n];

        for (int j = 0; j < n; ++j) {
            cin>>arr[j];
        }

        long ans = 0;
        map<int, int> map;

        for (int i = 0; i < n; ++i) {
            int len = arr[i];
            int si = (i - len + 1 >= 0) ? i - len + 1 : 0;
            if (map.find(arr[i]) == map.end() && map[arr[i]] >= si) {
                si = map[arr[i]] + 1;
            }
            int ei = (si + len - 1 >= n) ? n - 1 : si + len - 1;
            if (ei - si + 1 != len || si > ei) {
                continue;
            }
            ans += min((i - si + 1), (n - ei));
            map[arr[i]] = i;
        }
        cout<<ans<<endl;
    }

    return 0;
}

