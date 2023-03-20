#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, i;

	while (cin >> n >> i)
	{
		while (i != 0)
		{
			int temp = i;
			i = n % i;
			n = temp;
		}
		cout << n << endl;
	}
	return 0;
}
