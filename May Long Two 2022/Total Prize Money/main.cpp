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
        int x;
        int y;
        cin>>x;
        cin>>y;
        cout<<(x * 10) + (y * 90)<<endl;
    }

    return 0;
}

