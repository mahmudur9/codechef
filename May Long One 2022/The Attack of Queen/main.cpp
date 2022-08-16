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

    int t = 0;
    cin>>t;
    int n[t];
    int x[t];
    int y[t];
    for (int i = 0; i < t; ++i) {
        cin>>n[i];
        cin>>x[i];
        cin>>y[i];
    }

    for (int j = 0; j < t; ++j) {
        int a = n[j] - x[j] + x[j] - 1 + n[j] - y[j] + y[j] - 1;
        int b = min(x[j] - 1, y[j] - 1);
        int c = min(x[j] - 1, n[j] - y[j]);
        int d = min(n[j] - x[j], y[j] - 1);
        int e = min(n[j] - x[j], n[j] - y[j]);
        int total = a + b + c + d + e;
        cout<<total<<endl;
    }

    return 0;
}

