#include<iostream>
using namespace std;
int main() {
	float Xbegin, Xend, dx;
	float a = 1, b = 2, c = 3;
	cout << "Enter Xbegin and Xend and dx(step):";
	cin >> Xbegin >> Xend >> dx;
	while (Xbegin <= Xend) {
		if (c < 0 && Xbegin != 0) {
			cout << (-a) * Xbegin - c << endl;
		}
		else {
			if (c > 0 && Xbegin == 0) {
				cout << (Xbegin - a) / (-c) << endl;
			}
			else {
				cout << (b * Xbegin) / (c - a) << endl;
			}
		}
		Xbegin += dx;
	}
}


