#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);
unordered_set<int> check;
int test, e, tmp;
void out(){
    check.clear();
    cin >> e;
    if (e == 1){
        cin >> tmp;
        cout << tmp << endl;
    }
    else{
        while(e--){
            cin >> tmp;
            check.insert(tmp);
        }
        int last_in = check.size();
        auto it = check.find(check.size());
        while (it == check.end()){
            check.insert(check.size());
            last_in = check.size();
            it = check.find(check.size());
           
        }
        cout << last_in << endl;
    }
    
}
int main(){
    cin >> test;
    while(test--){
        out();
    }
    return 0;
}