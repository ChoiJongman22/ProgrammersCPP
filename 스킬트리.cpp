#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

//int solution(string skill, vector<string> skill_trees) {
//    int answer = 0;
//
//    for (int i = 0; i < skill_trees.size(); i++) {
//        for (int j = 0; j < skill_trees[i].size(); i++) {
//            for()
//        }
//
//    }
//    
//    return answer;
//} ������ 3�������� �̿��ؼ� ���� Ǯ���� �ߴ�.

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map<char, int> sk;
    for (int i = 0; i < skill.length(); i++) {
        sk[skill[i]] = i + 1;
    }

    for (auto skill_tree : skill_trees) {
        int cnt = 1;
        bool check = true;
        for (int j = 0; j < skill_tree.length(); j++) {
            if (sk[skill_tree[j]] > cnt) {
                check = false;
                break;
            }
            else if (sk[skill_tree[j]] == cnt) {
                cnt++;
            }
        }
        if (check) {
            answer++;
        }
    }

    return answer;
}



int main() {
    cout << solution("CBD", { "BACDE","CBADF","AECB","BDA" });
    return 0;
}