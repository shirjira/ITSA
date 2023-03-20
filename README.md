# 題目8. 質數判別
## 問題描述：
### 試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。

## 輸入說明:
### 輸入一個正整數。
## 輸出說明：
### 質數顯示 YES ；非質數顯示 NO 。
## 範例

## 輸入範例:
### 23
### 37
### 39
## 輸出範例:
### YES
### YES
### NO

## 解答
``` 
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



``` 
