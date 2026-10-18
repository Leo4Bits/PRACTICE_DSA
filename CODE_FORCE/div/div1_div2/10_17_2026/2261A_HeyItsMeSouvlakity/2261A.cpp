#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c = 0;           // Đếm số lượng phần tử của Souvlakity
    int first_one = -1;  // Vị trí số nhỏ nhất
    int last_one = -1;   // Vị trí số lớn nhất

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            c++;
            if (first_one == -1) first_one = i;
            last_one = i;
        }
    }

    if (c == 1) {
        cout << 0 << "\n";
    } else if (c == 2) {
        cout << 1 << "\n";
    } else {
        cout << last_one - first_one << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}