#include <string>
#include <vector>
#include <iostream>

using namespace std;

void dfs(long long& i, string& s, vector<bool>& visited, vector <long long>& count) {

    char a = s[i];
    visited[i] = true;
    for (long long j = 0; j < s.length(); j++) {
        if (visited[j] == false && a != s[j]) {

            count.push_back(j - i);
            dfs(j, s, visited, count);
            
        }
    }
    visited[i] = false;
}


long long solution(string s) {
    long long answer = -1;
    vector<bool> visited(s.length(), false);
    vector<long long> count;
    long long i = 0;
    dfs(i, s, visited, count);
    long long sum = 0;
    
    /*for (int j = 0; j < count.size(); j++) {
        cout << count[j] << ", ";
    }*/
    for (int j = 0; j < count.size(); j++) {
        if (count[j] > 0) {
            sum += count[j];
        }
       
        
    }
    answer = sum;
    return answer;
}

int main() {
    cout<< solution("cats");
}