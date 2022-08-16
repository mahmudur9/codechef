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

    for (int i = 0; i < t; ++i) {
        cin>>x[i];
    }

    for (int j = 0; j < t; ++j) {
        int p = (x[j] * 10) / 100;
        int f = 100;
        if (p >= f) {
            cout<<p<<endl;
        } else {
            cout<<f<<endl;
        }

    }

    return 0;
}

