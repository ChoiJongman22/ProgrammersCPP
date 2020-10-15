#include <string>
#include <vector>
#include <iostream>

using namespace std;


int solution(string s) {
	int size = s.length();
	int answer = size;

	for (int i = 1; i <= size / 2; i++) { //사이즈를 모두 포함해야 한다 substr은 pos+count부분의 인덱스를 포함하지 않는다.
		string part = s.substr(0, i);//일부의 스트링
		string last;//결과(갱신)
		string comp;//비교할 문자열

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
				}//else문을 쓰지 않으면 다른 경우때문에 틀린다. 꼭 else문을 사용하자!
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
//	//substr연습
//	string a = "0123456789abcdefghijkl";
//	string sub1 = a.substr(10);//10번째부터 끝까지 전부다 반환 basic_string substr(size_type pos = 0, size_type count = npos) const;
//	cout << sub1<<"\n";
//	string sub2 = a.substr(0, 9);//0번째부터 0+9-1번째까지 리턴(0~8)
//	cout << sub2;
//}