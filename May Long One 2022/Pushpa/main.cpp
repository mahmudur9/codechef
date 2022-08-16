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

    int t, a, v;
    cin>>t;
    vector<int> n[t];
    for (int i = 0; i < t; ++i) {
        cin>>a;
        for (int j = 0; j < a; ++j) {
            cin>>v;
            n[i].push_back(v);
        }
    }

    for (int k = 0; k < t; ++k) {
        sort(n[k].begin(), n[k].end());
        reverse(n[k].begin(), n[k].end());
        int max = 0, c = 0;
        if (n[k].size() == 1) {
            max = n[k][0];
        }
        else {
            for (int i = 0; i < n[k].size() - 1; ++i) {
                if (n[k][i] == n[k][i + 1]) {
                    c++;
                }
                else if (max < n[k][i] + c) {
                    max = n[k][i] + c;
                    c = 0;
                }
            }
        }
        cout<<max<<endl;
    }

    return 0;
}

