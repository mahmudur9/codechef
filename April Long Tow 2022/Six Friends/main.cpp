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
    int x[t];
    int y[t];
    for (int i = 0; i < t; ++i) {
        cin>>x[i]>>y[i];
    }

    for (int j = 0; j < t; ++j) {
        int a = x[j] * 3;
        int b = y[j] * 2;
        if (a <= b) {
            cout<<a<<endl;
        } else {
            cout<<b<<endl;
        }
    }

    return 0;
}

