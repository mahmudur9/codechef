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

    int n = 4;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    int count = 0;
    for (int i : arr) {
        if (i >= 10) {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}

