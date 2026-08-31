#include <iostream>
#include <unordered_map>

using namespace std;
#define FAST ios_base:sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int main(){
    int t;
    cin >> t;
    int count = 0;
    while(t--){
        count+=1;
        cout << "count: " << count << endl;
        int l, lastest, curnum, prenum;
        prenum = 0;
        cin >> l;
        unordered_map<int,int> um;
        while (l--){
            int item;
            cin >> item;
            curnum = item;
            cout << prenum << "_" <<curnum<< endl;
            if (prenum == curnum) {
                um[item]++;
                
            }
            prenum = item;

        }
        cout << "1 :" << um[1] << endl;
        cout << "-1 :" << um[-1] << endl;
    }
    return 0;
}