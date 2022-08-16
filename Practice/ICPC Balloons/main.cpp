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
        int temp[] = {1, 2, 3, 4, 5, 6, 7};
        for (int j = 0; j < n; ++j) {
            cin>>a[j];
        }

        int count[] = {0, 0, 0, 0, 0, 0, 0, 0};
        for (int k = 0; k < sizeof(temp) / sizeof(temp[0]); ++k) {
            for (int j = 0; j < n; ++j) {
                count[temp[k]]++;
                if (temp[k] == a[j]) {
                    break;
                }
            }
        }
        int max = count[1];
        for (int l = 1; l < 8; ++l) {
            if (max < count[l]) {
                max = count[l];
            }
        }
        cout<<max<<endl;
    }

    return 0;
}

