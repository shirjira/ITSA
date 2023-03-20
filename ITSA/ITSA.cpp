#include <iostream>
using namespace std;

int main()
{
	int a, b, count;
	int* num;
	count = 0;
	cin >> a >> b;
	//陣列
	num = new int[a * b];

	for (int i = 0; i < (a * b); i++)
	{
		cin >> num[i];  //數值存入陣列
	}
	for (int i = 0; i < b; i++)//反轉後陣列的行數
	{
		for (int j = 0; j < a; j++)//反轉後陣列的列數
		{
			//陣列反轉輸出
			count++;
			cout << num[j * b + i];
			if (count % a != 0)
				cout << " ";
		}
		cout << endl;
	}
	delete[]num;
	return 0;
}
