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

        for (int k = 0; k < n - 1; ++k) {
            if (abs(a[k] - a[k + 1]) > 1) {
                cout<<"NO"<<endl;
                break;
            }
            else if (k == n - 2 && abs(a[k] - a[k + 1]) <= 1) {
                cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}

