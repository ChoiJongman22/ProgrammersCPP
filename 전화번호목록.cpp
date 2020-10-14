#include <string>
#include <iostream>
#include <vector>
//ÇØ½Ã
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    for (string p1 : phone_book) {
        for (string p2 : phone_book) {
            if (p1 == p2)
                continue;
            if (p1.length() > p2.length()) {
                if (p2 == p1.substr(0, p2.length()))
                    return false;
            }
        }
    }
    return answer;
}
