#include <iostream>
#include <vector>
using namespace std;


long long solution(int w, int h) {
    long long answer = 1;
    long long a=0;//최대공약수
    for (int i = w < h ? w : h; i > 0; i--) {
        if (w % i == 0 && h % i == 0) {
             a = i;
             break;
        }
    }

    long long sum = (long long)w * (long long)h;
    answer = sum - (a * (w / a + (h / a )- 1));
   
    
    return answer;
}
int main() {
    cout<< solution(8, 12);
}