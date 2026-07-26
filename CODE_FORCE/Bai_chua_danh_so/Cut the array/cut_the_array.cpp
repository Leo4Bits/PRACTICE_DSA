#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int presum[41] = {0};
int main(){
    int t, n, tmp;
    int s1, s2, s3;
    
    cin >> t;
    while(t--){
        cin >> n;
        bool found = false;
        int l = 1; int r = 2;
        for(int i = 1; i <= n;i++)
        {
            cin >> tmp;
            presum[i] = tmp + presum[i-1];
        }
        while(!found)
        {
            s1 = presum[l]; s2 = presum[r]-presum[l];
            s3 = presum[n] - presum[r];
            if (((s1%3) == (s2%3) && (s2%3) == (s3%3)) || ((s1 % 3 != s2 % 3) && (s1 % 3 != s3 % 3) && (s2 % 3 != s3 % 3))) found = true;
            else 
            {
                if (r+1 < n) r+=1;
                else{
                    l = l+(l+1 < r);
                }
            if (found){break;};
            if (r+1 == n) break;
            }
        }
        if (found) {cout << l << " " << r << endl;}
        else cout << 0 << " " << 0 << endl;
    }
    return 0;
}