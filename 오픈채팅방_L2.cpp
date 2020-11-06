#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<string> solution(vector<string> record) {

    vector<string> answer;
    vector<string> tmp1;
    vector<string> tmp2;
    char str[1000];
    strcpy(str, record[0].c_str());
    char* str2 = strtok(str, " ");
    cout << str2;
    
    return answer;
}

int main() {
    solution({ "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" });
}