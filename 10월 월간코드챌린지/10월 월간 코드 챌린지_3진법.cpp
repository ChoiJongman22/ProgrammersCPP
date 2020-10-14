#include <iostream>
#include <vector>
#include <math.h>
using namespace std;



int solution(int n) {
	int answer = 0;
	vector<int> a;
	if (n / 3 == 0) {
		answer = n % 3 == 1 ? 1 : 2;
	}
	while (n >= 3) {
		a.push_back(n % 3);


		n = n / 3;
		if (n == 2) {
			a.push_back(n);
		}
		else if (n == 1) {
			a.push_back(n);
		}
	}

	for (int i = 0; i < a.size(); i++) {
		answer += a[i] * pow(3, a.size() - i - 1);
	}
	return answer;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout << solution(54) << endl;
}