# 題目7. 複數運算
## 問題描述：
### 在做傅立葉轉換時，常會用到複數，但每次都要分開來計算實部與虛部，非常的麻煩，現在透過operator overloading的方式來簡化程式設計師的負擔。須做加減乘。

## 輸入說明:
### 第一列輸入一個正整數n。其後有n列，每一列代表一個想要做運算的虛數，每一列之資料依序為運算元、虛數1、虛數2。虛數的格式為a b。
## 輸出說明：
### 每一列表一個運算結果。虛數的格式為a b。
## 範例

## 輸入範例:
### 3
### - 1 2 2 -3
### + 2 1 1 2
### * 1 1 1 1
## 輸出範例:
### -1 5
### 3 3
### 0 2

## 解答
``` 
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char oper;
		int a, b, c, d;
		cin >> oper >> a >> b >> c >> d;

		switch (oper) {
		case '+':
			cout << a + c << " " << b + d << endl;
			break;
		case '-':
			cout << a - c << " " << b - d << endl;
			break;
		case '*':
			cout << a * c - b * d << " " << b * c + a * d << endl;
			break;
		case '/':
			cout << (a * c + b * d) / (c * c + d * d) << " " << (b * c - a * d) / (c * c + d * d) << endl;
		}
	}
	return 0;

	
}


``` 
