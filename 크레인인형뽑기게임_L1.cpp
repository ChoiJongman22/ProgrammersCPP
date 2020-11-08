#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;
//int Return(int a, vector<vector<int>> board, vector<vector<int>> visited) {
//    for (int i = 0; i<board.size(); i++) {
//        if (visited[i][a]==1 && board[i][a] != 0) {
//            return board[i][a];
//            visited[i][a] = 0;
//            break;
//        }
//        else {
//            continue;
//        }
//    }
//}
int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<vector<int>> visited(board.size(), vector<int>(board.size(), 1));
    stack<int> basket;
    int b = 0;
    


    for(int j=0;j<moves.size();j++) {
        
        int a = moves[j]-1;
        for (int i = 0; i < board.size(); i++) {
            if (board[i][a] != 0) {
                int b = board[i][a];
                if (!basket.empty()) {
                    if (b == basket.top()) {
                        answer += 2;
                        basket.pop();
                    }
                    else {
                        basket.push(b);
                    }
                }
                else {
                    basket.push(b);
                }
                board[i][a] = 0;
                break;
            }


        }
    }
    return answer;
}

int main() {
   /* cout << Return(4, { {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} }, { {1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1} });
    cout << Return(4, { {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} }, { {1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1} });*/


    cout << solution({ {0, 0, 0, 0, 0},{0, 0, 1, 0, 3},{0, 2, 5, 0, 1},{4, 2, 4, 4, 2},{3, 5, 1, 3, 1} }, { 1, 5, 3, 5, 1, 2, 1, 4 });
}