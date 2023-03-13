#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x = 0.0;
	double result = 0.0;

	cin >> x;
	result = x * 1.6;
	cout << setprecision(1) << fixed << result << endl;
	return 0;

}

