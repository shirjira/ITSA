#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x, y;
	while (cin >> x >> y) {
		double  radius = 10000;
		double new_redius = (x * x) + (y * y);
		if (new_redius < radius) {
			cout << "inside" << endl;
		}
		else
		{
			cout << "outside" << endl;
		}
		return 0;

	}

}