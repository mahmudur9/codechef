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
    int n = 0;
    cin>>t;
    vector<int> a[t];

    for (int i = 0; i < t; ++i) {
        cin>>n;
        for (int j = 0; j < n; ++j) {
            int in;
            cin>>in;
            a[i].push_back(in);
        }
    }

    for (int k = 0; k < t; ++k) {
        int length = a[k].size();
        int counter = 0;
        for (int l = 0; l < length - 1; l++) {
            if (a[k][l] > a[k][l + 1]) {
                counter++;
            }
            if (l < length - 2 && a[k][l] > a[k][l + 2]) {
                counter++;
            }
            if (counter > 1){
                break;
            }
        }

        if (counter > 1) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}

