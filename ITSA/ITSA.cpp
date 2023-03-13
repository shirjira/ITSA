#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x, y;
	while (cin >> x >> y) {
		int  radius = 10000;
		double new_redius = (x * x) + (y * y);
		if(new_redius < radius) {
			cout << "inside\n";
		}
		else
		{
			cout << "outside\n" ;
		}
		return 0;

	}


}

