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
        int arr[4];
        for (int & j : arr) {
            cin>>j;
        }

        int total = 0;
        int max = 0;
        for (int k = 0; k < 4; ++k) {
            total += arr[k];
            if (max < arr[k]) {
                max = arr[k];
            }
        }

        cout<<n - (total - max)<<endl;
    }

    return 0;
}

