#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

set<int> check;
using ll = long long;
int step(int s, int target){
    queue<pair<int,int>> q;
    q.push({s,0});
    check.insert(s);
    while(!q.empty()){
        pair top = q.front(); q.pop();
        if (top.first == target) return top.second;
        if ((top.first - 1 == target)||(top.first * 2== target)) return top.second + 1;
        if((top.first < target)&&(check.find(top.first * 2) == check.end())){
            int tmp = top.first*2;
            q.push({tmp,top.second+1});
            check.insert(tmp);
        }
        if((top.first > 1)&&(check.find(top.first - 1) == check.end())){
            int tmp = top.first-1;
            q.push({tmp,top.second+1});
            check.insert(tmp);
        }

    }
    return -1;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << step(a,b) << endl;

    return 0;
}