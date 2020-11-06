#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<vector<int>> v(n, vector<int>(n, 0)); //n x n 행렬 생성
    vector<string> answer;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            v[i][j] = arr1[i] % 2;
            arr1[i] = arr1[i] / 2;
        }
    }
    vector<vector<int>> v2(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            v2[i][j] = arr2[i] % 2;
            arr2[i] = arr2[i] / 2;
        }
    }
    for (int i = 0; i < n; i++) {
        string a = "";
        for (int j = 0; j<n; j++) {
            v[i][j] = v[i][j] + v2[i][j];
            if (v[i][j]!=0) {
                a += '#';
            }
            else if (v[i][j] == 0) {
                a += " ";
            }
        }
        answer.push_back(a);
    }

   
    return answer;
}

int main() {
    solution(5, { 9,20,28,18,11 }, { 30,1,21,17,28 });
}