#include <iostream>
using namespace std;

//f(n)定義
int f(int n)
{
	//n=0 or n=1 輸出n+1
	if (n == 0 || n == 1)
	{
		return n + 1;
	}
	// n>1 輸出f(n-1)+f(n/2)
	else if (n > 1)
	{
		return f(n - 1) + f(n / 2);
	}
}


int main()
{
	int n;
	cin >> n;
	cout << f(n) << endl;

	return 0;
}

