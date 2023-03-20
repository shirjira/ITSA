# 題目10. 輾轉相除法
## 問題描述：
### 給定二個正整數，利用輾轉相除法求其最大公因數。
## 輸入說明:
### 給定二個正整數
## 輸出說明：
### 輸出最大公因數
## 範例

## 輸入範例:
### 300
### 250

## 輸出範例:
### 50


## 解答
``` 
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





``` 
