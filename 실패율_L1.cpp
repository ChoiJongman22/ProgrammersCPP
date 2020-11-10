#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> tmp;
    double number = stages.size();
    
    for (int i = 1; i <= N; i++) {
        double count = 0;

        for (int j = 0; j < stages.size(); j++) {
            if (stages[j]==i) {
                count++;
            }
        }
        if (count == 0) {
            tmp.push_back(0);
        }
        else {
            tmp.push_back(count / number);
        }
        number -= count;
    }
    
    for (int i = 1; i < N; i++) { 
        auto itr = max_element(tmp.begin(), tmp.end());
        answer.push_back(itr - tmp.begin() + 1);
        *itr = -111;
    }
    return answer;
}