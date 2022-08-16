#include <iostream>
#include <regex>

#define MAXN 2020
using namespace std;
typedef long long ll;
int T, N;
map<pair<int, int>, int> slope[MAXN];
int x[MAXN], y[MAXN];
int dx, dy, g;
void solve()
{
    cin>>N;
    ll ans = 0;
    for(int i=0; i<N; i++)
    {
        slope[i].clear();
    }
    for(int i=0; i<N; i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(j != i)
            {
                dx = x[j]-x[i]; dy = y[j]-y[i];
                g = __gcd(dx, dy);
                dx /= g; dy /= g;
                if(dx < 0 || (dx == 0 && dy < 0))
                {
                    dx = -dx; dy = -dy;
                }
                slope[i][make_pair(dx, dy)]++;
            }
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(j != i)
            {
                dx = y[i]-y[j]; dy = x[j]-x[i];
                g = __gcd(dx, dy);
                dx /= g; dy /= g;
                if(dx < 0 || (dx == 0 && dy < 0))
                {
                    dx = -dx; dy = -dy;
                }
                ans += slope[i][make_pair(dx, dy)];
            }
        }
    }
    cout<<ans/2<<endl;
}
int main()
{
    cin>>T;
    for(int i=0; i<T; i++)
    {
        solve();
    }
}
