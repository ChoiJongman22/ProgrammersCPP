#include <iostream>
#include <vector>
using namespace std;


size_t solution(int w, int h) {
    size_t answer = 1;
    size_t a=0;//최대공약수
    //int i = 0;
    /*if (w < h) w = i;
    else h = i;*/
    
    //이 문제가 최대공약수로 풀어야하는 이유는 8*12를 하기전에 2*3부터 그려봐야 한다.

    for (int i=w < h ? w : h; i > 0; i--) {//작은 값을 받는다. 사각형을 세로로 세우기 위해서
        if (w % i == 0 && h % i == 0) { //예외처리할 때 w와 i가 0인 경우는 생각하지 않는다.
             a = i;
             break; //최대공약수 나오면 한다.
        }
    }

    size_t sum = (size_t)w * (size_t)h;
    answer = sum - (a * (w / a + (h / a )- 1));
   
    
    return answer;
}
int main() {
    cout<< solution(8, 12);
}