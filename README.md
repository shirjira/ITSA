# 題目12. 遞迴程式練習
## 問題描述：
###  給定下列遞迴函式 :
![C_RU06](https://user-images.githubusercontent.com/72548286/226687445-28da6c2f-cd35-470f-b984-6a267ff0e134.JPG)
請計算出 f (k) 
## 輸入說明:
### 輸入值為一個大於 1 的整數。
## 輸出說明：
### f(k) 的計算結果。
## 範例

## 輸入範例:
### 10
### 12
## 輸出範例:
### 60
### 94

## 解答
``` 
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



``` 
