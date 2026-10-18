#include <iostream>

#include <set>
#include <map>
#include <deque>

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define FOR(i, a, b) for(auto i = (a); i < (b); ++i)

using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, it;
        cin >> n;
        
        set<int, greater<int>> s;
        map<int,int> m;
        deque<int> de;
        
        while(n--)
        {
            cin >> it;
            s.insert(it);
            m[it]++;
        }

        
        bool accepted = true;

        while(accepted)
        {
            bool accepted = false;
            for(auto i = s.begin(); i != s.end(); i++)
            {
                int item = *i;
                if((m[item]) == 0) continue;
                de.push_back(item);
                --m[item];
                accepted = true;
            }
            if(!accepted) break;
        }

        FOR(i,0,(de.size()))
        {
            cout << de[i] << " ";
        }cout << "\n";
        
        
    }
    return 0;
}
// 44 333 2222 11111
// 44 33 22 11 3 22 111
// tư duy để có prefix max, thì max có k lần xuất hiện là nhiêu thì dãy sau nó cũng phải xuất hiện đúng k lần như max 
// sau đó mới chèn phần (k_i - k_max) vào dần 

// set để duyệt qua các phần tử, map để i:k
// duyệt qua k của max
//
// Xét Giá trị của i
// TH1: i lớn nhất
//    - Đẩy hết k lần i về đầu
// TH2 : i nhỏ nhất (bất kể k của i nhiều đến đâu)
//    - Đẩy k lần i về cuối hết
// TH3 : i không lớn nhất cũng k nhỏ nhất
// TH3.1 : i này có k lần LỚN HƠN k lần xuất hiện của maxi
/////////-> chuyển  (k - ki ) lần của i này về sau
// TH3.22: nếu không thì xếp ở đầy đủ ở đầu

// tư duy là số càng lớn thì xếp giảm dần ở khúc đầu, còn số càng nhỏ xếp tăng dần từ cuối lên đầu.
// nếu i xuất hiện nhiều lần nhất và có k lần xuất hiện lớn nhất thì đẩy i về cuối


// phân phối
// Ưu tiên số lớn nhất
//