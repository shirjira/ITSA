#include <iostream>
using namespace std;

int main()
{
	int starH=0, starM=0,endH=0,endM=0;

	cin >> starH >> starM;
	cin >> endH >> endM;
	int time = (endH * 60 + endM) - (starH * 60 + starM);
	if(time <=120 && time >=0)
	{
		cout << time/30 * 30 << endl;
	}
	else if (time > 120 && time <= 240)
	{
		cout << (time - 120) / 30 * 40 + 120 << endl;
    }
	else 
	{
		cout << (time - 240) / 30 * 60 + 120+160 << endl;
	}
	return 0;

}


