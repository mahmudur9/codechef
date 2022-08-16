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
    int a[t];
    int b[t];

    for (int j = 0; j < t; ++j) {
        cin>>a[j];
        cin>>b[j];
    }

    for (int i = 0; i < t; ++i) {
        int f = (a[i] * 100) / 10;
        int s = (b[i] * 100) / 20;
        if (f > s) {
            cout<<"FIRST"<<endl;
        }
        else if (f == s) {
            cout<<"ANY"<<endl;
        }
        else {
            cout<<"SECOND"<<endl;
        }
    }

    return 0;
}

