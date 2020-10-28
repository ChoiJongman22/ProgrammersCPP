#include <iostream>

#include <vector>
using namespace std;

int main() {
	vector<int> vec = { 1,5 };
	if ((vec[0] & vec[1])==vec[0]) {
		cout << 1;
	}
	/*else if(vec[0]|vec[1]) {
		cout << 2;
	}*/
}
