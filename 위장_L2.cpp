#include <string>
#include <vector>
#include <map>
#include <iostream>
//해시
using namespace std;

int solution(vector<vector<string>> clothes) {
	map<string, int> cloth_map;
	for (vector<string> c : clothes) {
		cloth_map[c[1]]++;
	}
	int answer = 1;//0이 아니라 1로 해주고
	map<string, int>::iterator it;
	for (it = cloth_map.begin(); it != cloth_map.end(); it++) {
		answer = answer * (it->second + 1);
	}
	for (it = cloth_map.begin(); it != cloth_map.end(); it++) {
		cout << it->first << it->second << endl;
		
	}
	return answer - 1; //1을 빼주자
}

int main() {
	cout<<solution({ {"yellow_hat", "headgear"},{"blue_sunglasses", "eyewear"},{"green_turban", "headgear"} });


}
