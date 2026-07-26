#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if (n%3 == 0) cout << 0 << endl;
        else{ // n - phần dư ra số nhỏ hơn chia hết cho 3, sau đó cộng ba lên thì ra số lớn hơn chia hết cho 3 rồi từ n thì ra số kẹo cần mua thêm
            cout << (n - (n%3) + 3) - n << endl; // có thể rút gọn thành- (n%3) + 3
        }
    }
    return 0;
}