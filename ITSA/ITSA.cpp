#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char oper;
		int a, b, c, d;
		cin >> oper >> a >> b >> c >> d;

		switch (oper) {
		case '+':
			cout << a + c << " " << b + d << endl;
			break;
		case '-':
			cout << a - c << " " << b - d << endl;
			break;
		case '*':
			cout << a * c - b * d << " " << b * c + a * d << endl;
			break;
		case '/':
			cout << (a * c + b * d) / (c * c + d * d) << " " << (b * c - a * d) / (c * c + d * d) << endl;
		}
	}
	return 0;

	
}

