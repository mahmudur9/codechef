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

    int t = 0;
    cin>>t;
    int x[t];
    for (int i = 0; i < t; ++i) {
        cin>>x[i];
    }

    for (int j = 0; j < t; ++j) {
        int total = x[j] * 50;
        int expense = (total * 0.2) + (total * 0.2) + (total * 0.3);
        cout<<total - expense<<endl;
    }

    return 0;
}

