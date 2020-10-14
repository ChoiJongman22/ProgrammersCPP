#include <string>
#include <vector>
#include <map>
#include <iostream>
//�ؽ�
using namespace std;

int solution(vector<vector<string>> clothes) {

	map<string, int> cloth_map;
	for (vector<string> c : clothes) {
		cloth_map[c[1]]++;
	}
	int answer = 1;//0�� �ƴ϶� 1�� ���ְ�
	map<string, int>::iterator it;
	for (it = cloth_map.begin(); it != cloth_map.end(); it++) {
		answer = answer * (it->second + 1);
	}
	return answer - 1; //1�� ������
}