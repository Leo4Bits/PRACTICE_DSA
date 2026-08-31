#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> row, col, box;
        for (int i = 0; i < board.size(); i++){
            int items_row = 0;
            for (int r = 0; r < board.size(); r++){
                if (board[i][r] != 0) ++items_row;
                row.insert(board[i][r]);
            }
            if (row.size() != items_row) return false;
            
            int items_col = 0;
            for (int c = 0; c < board.size(); c++){
                if (board[c][i] != 0) ++items_row;
                row.insert(board[c][i]);
            }
            if (col.size() != items_col) return false;

        }
    };
};


int main(){
    return 0;
}