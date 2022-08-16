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
        int n, max = 0, c = 0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }

        int s = sizeof(a) / sizeof(a[0]);
        sort(a, a + s, greater<>());
        if (n == 1) {
            max = a[n - 1];
        }
        else {
            for (int i = 0; i < n - 1; i++) {
                if (a[i] == a[i + 1]) {
                    c++;
                }
                else if (max < a[i] + c) {
                    max = a[i] + c;
                    c = 0;
                }
            }
        }
        cout<<max<<endl;
    }

    return 0;
}

