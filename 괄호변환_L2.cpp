#include <string>
#include <stack>
#include <vector>

using namespace std;

bool check(string s) {
    stack<char> st;
    bool check = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            if (st.empty()) {
                check = false;
            }
            else {
                st.pop();
            }
        }
    }
    if (st.empty()) {
        check = true;
    }
    return check;
}

string reg(string p) {
    if (p == "") {
        return "";
    }

    string answer = "";
    string u, v = "";
    int i = 0;
    int count1 = 0;
    int count2 = 0;
    for (char c : p) {
        if (c == '(') {
            count1++;
        }
        else {
            count2++;
        }
        i++;
        
        if (count1 == count2) break;
    }

    u = p.substr(0, i);
    v = p.substr(i);

    if (check(u)) {
        answer += u;
        answer += reg(v);
    }
    else {
        answer = "(";
        answer += reg(v);
        answer += ")";

        u = u.substr(1, u.size() - 2);
        for (int i = 0; i < u.size(); i++) {
            if (u[i] == '(') {
                answer += ")";
            }
            else {
                answer += "(";
            }
        }
    }

    return answer;
}



string solution(string p) {
    
    string answer = "";
    
    answer = reg(p);

    return answer;
}