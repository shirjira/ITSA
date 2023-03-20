#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	int sum = 0;

	cin >> n;
	for (int i = 1; i <= n; i++) { //1到N之間的數
		if (i % 3 == 0) { //被3整除的數字總和
			sum += i;
		}
	}
	cout << sum << endl;
}
