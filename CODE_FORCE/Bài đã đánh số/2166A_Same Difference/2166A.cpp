#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

void result(){
    int l;
    cin >> l;
    string str;
    cin >> str;
    char ned_cnt = str[str.length()-1];
    int cnt = 0;
    for(int i = 0, j = str.length()-1; i <= j; i++, j--){
        if (i < j){
            if ((str[i] == ned_cnt)) cnt += 1;
            if ((str[j] == ned_cnt)) cnt += 1;
        }else if (i == j){
            if ((str[i] == ned_cnt)) cnt += 1;
        }
        
    }
    cout << l - cnt << endl;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
     result();   
    }
    
    return 0;
}