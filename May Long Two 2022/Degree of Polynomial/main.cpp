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

    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int arr[n];

        for (int j = 0; j < n; ++j) {
            cin>>arr[j];
        }

        int max = 0;
        for (int k = 0; k < n; ++k) {
            if (arr[k] != 0) {
                max = k;
            }
        }
        cout<<max<<endl;
    }

    return 0;
}

