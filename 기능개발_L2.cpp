#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> cntSet; //�Ϸ��ϴ� �� �迭

    int cnt = 0; // �Ϸ��ϴ� �� �ϳ���
    int max = 0; //�ִ밪 ����
    for (int i = 0; i < progresses.size(); i++) {
        progresses[i] = 100 - progresses[i];
        if (progresses[i] % speeds[i] == 0) {
            cnt = progresses[i] / speeds[i];
            cntSet.push_back(cnt);
        }
        else {
            cnt = (progresses[i] / speeds[i]) + 1;
            cntSet.push_back(cnt);
        }

        if (max < cnt) {
            answer.push_back(1);
            max = cnt;
        }
        else {
            int tmp = answer.back();
            answer.pop_back();
            answer.push_back(tmp + 1);
        }
    }

    return answer;

}