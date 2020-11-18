#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    
    int right = 0;
    int left = 0;
    string answer = "";
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
            answer += "L";
            left = numbers[i];
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
            answer += "R";
            right = numbers[i];
        }
        else  {
            if (numbers[i] == 0) {
                if ((left / 3) > (right / 3)) {

                }
            else if (numbers[i]%3!=2 && abs(numbers[i] - left) > abs(numbers[i] - right)) {
                answer += "R";
            }
            else if (numbers[i] % 3 != 2 && abs(numbers[i] - left) < abs(numbers[i] - right)) {
                answer += "L";
            }
            else if (numbers[i] % 3 == 2 || abs(numbers[i] - left) == abs(numbers[i] - right)) {
                hand == "right" ? answer += "R" : answer += "L";
            }
            
        }
    }
    return answer;
}

int main() {
    cout << solution({ 1,2,3,4,5,6 }, "right");
}