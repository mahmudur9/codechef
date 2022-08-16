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
        cin>>x[i];
        cin>>y[i];
    }

    for (int j = 0; j < t; ++j) {
        if (x[j] != 0 || y[j] != 0) {
            if (x[j] == y[j]) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

