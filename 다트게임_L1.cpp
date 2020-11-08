#include <string>
#include <iostream>
#include <stack>

using namespace std;

int solution(string dartResult) {
    stack<char> number;
    number.push(dartResult[0]);
    while (!number.empty()) {
        int i = 1;
        if (dartResult[i] == 'S') {
            (int)number.top() * 1;
        }
        else if (dartResult[i] == 'D') {
            (int)number.top() * 2;
        }
        else if (dartResult[i] == 'T') {
            (int)number.top() * 3;
        }
        else if (dartResult[i] == '#') {
            (int)number.top()* (-1);
        }
        else if (dartResult[i] == '*') {

        }
        
           
        
    }
    int answer = 0;
    return answer;
}