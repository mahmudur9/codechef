#include <iostream>
#define MAXN 200200
using namespace std;
const int MOD = 998244353;
int T, N;
int x; int prefix;
int DP[MAXN][2][2];
void solve()
{
    cin>>N;
    DP[0][0][0] = DP[0][0][1] = 1;
    prefix = 0;
    for(int i=1; i<=N; i++)
    {
        cin>>x;
        if(x % 2 == 1)
        {
            prefix = 1-prefix;
        }
        DP[i][1-prefix][0] = DP[i-1][1-prefix][0];
        DP[i][1-prefix][1] = DP[i-1][1-prefix][1];
        DP[i][prefix][0] = (DP[i-1][prefix][1] + DP[i-1][prefix][0]) % MOD;
        DP[i][prefix][1] = (DP[i-1][1-prefix][0] + DP[i-1][prefix][1]) % MOD;
    }
    cout<<(DP[N-1][prefix][1] + DP[N-1][1-prefix][0]) % MOD<<endl;
}
int main()
{
    cin>>T;
    for(int i=0; i<T; i++)
    {
        solve();
    }
}

