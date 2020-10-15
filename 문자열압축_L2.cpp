#include <string>
#include <vector>
#include <iostream>

using namespace std;


int solution(string s) {
	int size = s.length();
	int answer = size;

	for (int i = 1; i <= size / 2; i++) { //����� ��� �����ؾ� �Ѵ� substr�� pos+count�κ��� �ε����� �������� �ʴ´�.
		string part = s.substr(0, i);//�Ϻ��� ��Ʈ��
		string last;//���(����)
		string comp;//���� ���ڿ�

		int count = 1;
		for (int j = i; j < size; j += i) {
			comp = s.substr(j, i);

			if (part == comp) {
				count++;
			}
			else {
				if (count == 1) {
					last += part;
					part = comp;
				}
				else {
					last = last + to_string(count) + part;
					part = comp;
					count = 1;
				}//else���� ���� ������ �ٸ� ��춧���� Ʋ����. �� else���� �������!
			}


			if (j + i >= size) {
				if (count == 1) {
					last += s.substr(j);
					break;
				}
				else {
					last += to_string(count) + part;
					break;
				}
			}
		}
		if (answer > last.length()) {
			answer = last.length();
		}

	}
	return answer;
}

//int main() {
//	//substr����
//	string a = "0123456789abcdefghijkl";
//	string sub1 = a.substr(10);//10��°���� ������ ���δ� ��ȯ basic_string substr(size_type pos = 0, size_type count = npos) const;
//	cout << sub1<<"\n";
//	string sub2 = a.substr(0, 9);//0��°���� 0+9-1��°���� ����(0~8)
//	cout << sub2;
//}