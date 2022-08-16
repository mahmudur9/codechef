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

// Not completed
int main() {

    int t = 0;
    cin>>t;
    vector<int> a[t];

    for (int i = 0; i < t; ++i) {
        int n = 0;
        cin>>n;
        for (int j = 0; j < n; ++j) {
            int v = 0;
            cin>>v;
            a[i].push_back(v);
        }
    }

    for (int k = 0; k < t; ++k) {
        int size = a[k].size();
        int count = 0;
        int i = 0;
        while (i < size) {
            if (a[k][i] != a[k][i + 1]) {
                count++;
            }
            i++;
        }

    }

    return 0;
}

