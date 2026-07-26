#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int a[6][6];

int main(){
    int tmp;
    int r, c;
    for(int i = 1; i <= 5;i++){
        for(int j = 1; j <= 5;j++){
            cin >> tmp;
            if (tmp == 1) 
            {
                r = i;
                c = j;
            }
        }
    }
    cout << abs(r-3) + abs(c-3) << endl;
    return 0;
}