#include <iostream>
#include <vector>
using namespace std;


size_t solution(int w, int h) {
    size_t answer = 1;
    size_t a=0;//�ִ�����
    //int i = 0;
    /*if (w < h) w = i;
    else h = i;*/
    
    //�� ������ �ִ������� Ǯ����ϴ� ������ 8*12�� �ϱ����� 2*3���� �׷����� �Ѵ�.

    for (int i=w < h ? w : h; i > 0; i--) {//���� ���� �޴´�. �簢���� ���η� ����� ���ؼ�
        if (w % i == 0 && h % i == 0) { //����ó���� �� w�� i�� 0�� ���� �������� �ʴ´�.
             a = i;
             break; //�ִ����� ������ �Ѵ�.
        }
    }

    size_t sum = (size_t)w * (size_t)h;
    answer = sum - (a * (w / a + (h / a )- 1));
   
    
    return answer;
}
int main() {
    cout<< solution(8, 12);
}