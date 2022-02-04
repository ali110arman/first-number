#include <iostream>
using namespace std;
void main() {
	int num, i=1, aval=0, n, p;
	cout << "inter count of your numbers" << endl;
	cin >> n;
	while (i <= n) {
		cout << "inter number" << endl;
		cin >> num;
		if (num == 2) {
			aval += 1;
		}
		for (p = 2; p <= num - 1; p++) {
			if (num % p == 0) {
				p = num;
			}
			else {
				if (p >= num - 1) {
					aval += 1;
				}
			}
		}
		i = i + 1;
	}
	cout << "the count of your prime number is"<<aval;

}
