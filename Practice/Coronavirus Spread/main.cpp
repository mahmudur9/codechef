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

        int cmin=n,cmax=0,cnow=1;
        for(int i=1;i<n;i++){
            if((a[i]-a[i-1])<=2){
                cnow++;
            }
            else{
                if(cnow<cmin)
                    cmin=cnow;
                if(cnow>cmax)
                    cmax=cnow;
                cnow=1;
            }

        }
        if(cnow<cmin)
            cmin=cnow;
        if(cnow>cmax)
            cmax=cnow;

        cout<<cmin<<" "<<cmax<<endl;
    }

    return 0;
}

