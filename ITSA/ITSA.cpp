#include <iostream>

using namespace std;

int main()
{
	int mooth;
	string season;
	cin >> mooth;
	switch (mooth)
	{
	case 3:
	case 4:
	case 5:
		season = "Spring";
		break;
	case 6:
	case 7:
	case 8:
		season = "Summer";
		break;
	case 9:
	case 10:
	case 11:
		season = "Autumn";
		break;
	case 12:
	case 1:
	case 2:
		season = "Winter";
		break;
	}
	cout << season << endl;

}
