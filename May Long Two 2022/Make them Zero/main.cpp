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
        int arr[n];
        int bit[32] = {};

        for (int j = 0; j < n; ++j) {
            cin>>arr[j];
        }

        for (int k = 0; k < n; ++k) {
            int l = 0;
            while (arr[k]) {
                if (bit[l] == 0) {
                    bit[l] = arr[k] % 2;
                }
                arr[k] /= 2;
                l++;
            }
        }

        int total = 0;
        for (int m = 0; m < 32; ++m) {
            total += bit[m];
        }
        cout<<total<<endl;
    }


    return 0;
}

