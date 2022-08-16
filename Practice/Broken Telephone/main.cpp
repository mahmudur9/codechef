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
        int n;
        cin>>n;
        int a[n];
        for (int j = 0; j < n; ++j) {
            cin>>a[j];
        }

        set<int> m;
        for (int k = 0; k < n - 1; ++k) {
            if (a[k] != a[k + 1]) {
                m.insert(k);
                m.insert(k + 1);
            }
        }
        cout<<m.size()<<endl;
    }

    return 0;
}

