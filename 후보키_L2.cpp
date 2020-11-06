#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;
vector<string> combination;
int column = 0;
bool check(vector<int> vec, int now) {
    for (int i = 0; i < vec.size(); i++)
        // ans�� �ִ� ������ �̹��� ���� �����̶� ���� ������ Ȯ��
        if ((vec[i] & now) == vec[i])
            return false;

    return true;
}

int solution(vector<vector<string>> relation) {
    int rowSize = (int)relation.size();
    int colSize = (int)relation[0].size();
    vector<int> ans;
    
    for (int i = 1; i < (1 << colSize); i++) { //i<16
        set<string> s; //

        for (int j = 0; j < rowSize; j++) {
            string now = "";

            for (int k = 0; k < colSize; k++) {
                // ���õ� �÷��� ��ġ�Ѵٸ�
                if (i & (1 << k))
                    now += relation[j][k];
            }
            s.insert(now);
        }

        //s.size() == rowSize => �ߺ�üũ
        if (s.size() == rowSize && check(ans, i))
            ans.push_back(i);
    }

    return (int)ans.size();
}

int main() {
    cout<< solution({ {"100", "ryan", "music", "2"},{"200", "apeach", "math", "2"},{"300", "tube", "computer", "3"},{"400", "con", "computer", "4"},{"500", "muzi", "music", "3"},{"600", "apeach", "music", "2"} });
}