#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    for (int h = 3;; h++) {//탈출조건을 정해두지 않는 이유는 break하기 때문에
        if (sum % h == 0) {
            int w = sum / h;
            if (((h - 2) * (w - 2)) == yellow) {
                answer.push_back(w);
                answer.push_back(h);
                break;
            }
        }
    }
    return answer;
}