#include <iostream>
#include <vector>
#define MAXN 100100


using namespace std;
typedef long long ll;
const ll INF = 1e18;
vector<int> zeroes, ones;
int T, N, K;
string S;
int prefix_zeroes[MAXN], prefix_ones[MAXN];
int tot_zero, tot_one;
ll tot_inversions, cur_inversions, best;
int counter;
void solve()
{
    cin>>N>>K>>S;
    tot_zero = tot_one = 0;
    best = INF;
    tot_inversions = cur_inversions = 0;
    counter = 0;
    zeroes.clear(); ones.clear();
    for(int i=0; i<S.length(); i++)
    {
        if(S[i] == '1')
        {
            ++tot_one;
            ones.push_back(i);
        }
        prefix_ones[i] = tot_one;
    }
    for(int i=S.length()-1; i>=0; i--)
    {
        if(S[i] == '0')
        {
            ++tot_zero;
            zeroes.push_back(i);
        }
        prefix_zeroes[i] = tot_zero;
        if(S[i] == '1')
        {
            tot_inversions += prefix_zeroes[i];
        }
    }
    for(int i=min(K, (int)zeroes.size()); i>=0; i--)
    {
        if(i == min(K, (int)zeroes.size()))
        {
            cur_inversions = tot_inversions;
            for(int j=0; j<i; j++)
            {
                cur_inversions -= prefix_ones[zeroes[j]];
            }
            for(int j=0; j<min(K-i, (int)ones.size()); j++)
            {
                if(i == 0 || (ones[j] < zeroes[i-1]))
                {
                    counter = j+1;
                    cur_inversions -= (prefix_zeroes[ones[j]] - i);
                }
            }
            best = min(best, cur_inversions);
        }
        else
        {
            cur_inversions += (prefix_ones[zeroes[i]] - counter);
            while(counter < K-i)
            {
                if(counter < ones.size() && (i == 0 || ones[counter] < zeroes[i-1]))
                {
                    cur_inversions -= (prefix_zeroes[ones[counter]] - i);
                    ++counter;
                }
                else
                {
                    break;
                }
            }
            best = min(best, cur_inversions);
        }
    }
    cout<<best<<endl;
}
int main()
{
    cin>>T;
    for(int i=0; i<T; i++)
    {
        solve();
    }
}
