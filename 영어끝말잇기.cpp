#include <string>
#include <vector>
#include <iostream>

using namespace std;

//vector<int> solution(int n, vector<string> words) {
//    vector<int> answer;
//    vector<string> tmp;
//    int size = words.size();
//    int cnt = 1;
//    int count = 1;
//    tmp.push_back(words[0]);
//    for (int i = 1; i <= size; i++) {
//        if (i == size) {
//            answer.push_back(0);
//            answer.push_back(0);
//            break;
//        }
//        int wordsize = words[i-1].size();
//        for(int j=0;j<tmp.size();j++){
//            if (words[i] == tmp[j]) {
//                answer.push_back((i + 1) % n);
//                answer.push_back(count);
//                break;
//            }
//            else if (tmp[0][wordsize - 1] != words[i][0]) {
//                answer.push_back((i + 1) % n);
//                answer.push_back(count);
//                break;
//            }
//            else {
//                tmp.push_back(words[i]);
//                cnt++;
//            }
//        }
//        if (cnt % n == 0) {
//            count++;
//        }
//    }
//    return answer;
//}


vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    int flag = 0;
    int a = 0;
    int b = 0;
    
    for (int i = 1; i < words.size(); i++) {
        string p1 = words[i - 1];
        string p2 = words[i];

        for (int j = 0; j < i; j++) {
            if (words[j] == words[i]) {
                flag = 1;
                break;
            }
        }

        int len_p1 = p1.length();
        if (p1[len_p1 - 1] != p2[0]) {
            flag = 1;
        }
        if (flag) {
            a = (i % n) + 1;
            b = (i / n) + 1;
            answer.push_back(a);
            answer.push_back(b);
            return answer;
        }
        
        
    }
    
    answer.push_back(0);
    answer.push_back(0);
    return answer;
    
}