#include<iostream>

using namespace std;

int main() {

    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int k = n - 1;
        int j = 0;
        int min = 0;
        while (j < k) {
            if (s[j] != s[k]) {
                min++;
            }
            j++;
            k--;
        }
        int total = (min / 2) + (min % 2);
        cout<<total <<endl;
    }

    return 0;
}

