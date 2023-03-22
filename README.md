# 題目14. 判斷是否為迴文
## 問題描述：
### 迴文是指從前面讀和從後面讀都相同的一個數字或一段文字。例如下列每一五位數的整數都是迴文： 123321 ， 55555 ， 45554 ， 11611 。請撰寫一個程式，判斷它是否迴文。
## 輸入說明:
###輸入一個正整數。
## 輸出說明：
### 迴文印出 ” 是 ” ；非回文印出 ” 否 ” 。
## 範例

## 輸入範例:
### 123321
### 1556551
### 1244221

## 輸出範例:
### YES
### YES
### NO

## 解答
``` 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input, output;
	bool a = 1;

	cin >> input;
	for (int i = input.length() - 1; i >= 0; i--)//將字串逆序傳到output 
	{
		output[input.length() - 1 - i] = input[i];
	}
	for (int j = 0; j < input.length(); j++)//比較是否有異 
	{
		if (input[j] != output[j]) { a = 0; break; }//發現有異即時跳出 
		else a = 1;
	}
	a ? cout << "YES" << endl : cout << "NO" << endl;//輸出結果 
	return 0;

}


``` 
