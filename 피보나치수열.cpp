#include <iostream>
#include <vector>
using namespace std;

//��ȯ�� �̿��� ���

int fib(int x) {
	if (x <= 2) {
		return 1;
	}
	return fib(x - 1) + fib(x - 2);
}

vector<int> V(100);

//DP�� �̿��ϴ� ���
int fib2(int x) {
	if (x <= 2) {
		return 1;
	}
	if (V[x] != 0) {
		return V[x];
	}
	else {
		V[x] = fib(x - 1) + fib(x - 2);
		return V[x];
	}
}
int main() {
	cout << fib(10) << endl;
	cout << fib2(10) << endl;
	return 0;
}