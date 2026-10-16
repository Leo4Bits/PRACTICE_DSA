#include<iostream>
#define fast ios_base::sunc_with_sdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

using ull = unsigned long long;
using ui = unsigned int;

ull fastPow(long long a, long long b) {
    long long res = 1;
    
    while (b > 0) {
        
        if (b & 1) {
            res = (res * a);
        }
        
        a = (a * a);
        
        b >>= 1;
    }
    
    return res;
}
ull maxMoney(ui n, ui k){
    if (!k) return 1;
    if (n-k == 0) return n*2;
    return fastPow(2,n-(k-1)) + 2*(k-1);
}

int main()
{
    ui t;
    cin >> t;

    while(t--)
    {
        ui n, k;
        cin >> n >> k;
        cout << maxMoney(n,k)<<"\n";
    }

    return 0;
}
// Th 1: n - k = 0 -> res = n*2
// Th 2: n - k != 0 
// Th 2.1: k = 1 -> res = 2^n
// Th 2.1: k = 2 -> res = 2^(n-1) + 2x1
// Th 2.1: k = 3 -> res = 2^(n-2) + 2x2
// Th 2.1: k = 4 -> res = 2^(n-3) + 2x3
// Th 2.1: k = k -> res = 2^(n-(k-1)) + 2x(k-1)