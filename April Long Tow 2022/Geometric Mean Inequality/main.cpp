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
        int negative = 0;
        int positive = 0;
        for (int i = 0; i < size; ++i) {
            if (a[k][i] == 1) {
               positive++;
            } else {
                negative++;
            }
        }

        if (abs(positive - negative) < 2) {
            cout<<"Yes"<<endl;
        }
        else if (abs(positive - negative) == 2 && positive % 2 == 0 && negative % 2 == 0) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}

