#include <iostream>
using namespace std;
int main() {
	int sum;
	for (int i = 0; i < 100; i=i+10) {
		for (int j = 1; j <= 10; j++) {
			sum = i + j;
			cout << sum << "\t";
		}
		cout << endl;
	}
}