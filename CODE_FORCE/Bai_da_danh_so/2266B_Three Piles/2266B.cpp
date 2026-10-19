#include <iostream>
#include <math.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

using ll = long long;

ll solve(ll a, ll b, ll c)
{
    if (abs((a+c) - b) < abs(a - b)) return abs(a-b);

    return abs((a+c) - b);
}

int main()
{
    fast;
    ll t;
    cin >> t;

    while(t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << solve(a,b,c) << "\n";
    }
    return 0;
}