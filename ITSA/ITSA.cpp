#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a;
	int b;
	
	cin >> a;
	for (b = 2; b < a; b++) {
		if (a % b == 0) {
			break;
		}
	}
	//是質數輸出"YES"
	if (b == a) {
		cout << "YES" << endl;
	}
	//不是質數輸出"NO"
	else
	{
		cout << "NO" << endl;
	}
}

