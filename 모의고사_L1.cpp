#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> Student1 = { 1,2,3,4,5 };
    vector<int> Student2 = { 2,1,2,3,2,4,2,5 };
    vector<int> Student3 = { 3,3,1,1,2,2,4,4,5,5};
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    int maxscore = 0;
    int size = answers.size();
    for (int i = 0; i < size; i++) {
        if (Student1[i % 5] == answers[i]) {
            s1++;
        }
        if (Student2[i % 8] == answers[i]) {
            s2++;
        }
        if (Student3[i % 10] == answers[i]) {
            s3++;
        }
    }
   
    maxscore = max(max(s1, s2), s3);
    if (maxscore == s1) {
        answer.push_back(1);
    }
    if (maxscore == s2) {
        answer.push_back(2);
    }
    if (maxscore == s3) {
        answer.push_back(3);
    }
    
    return answer;
}


int main() {

}