# 題目6. 季節判定
## 問題描述：
###  試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。

## 輸入說明:
### 輸入月份。
## 輸出說明：
### 輸出該月份的季節， 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)。
## 範例

## 輸入範例:
### 3
### 10
## 輸出範例:
### Spring
### Autumn

## 解答
``` 
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
		season = "Spring\n";
		break;
	case 6:
	case 7:
	case 8:
		season = "Summer\n";
			break;
	case 9:
	case 10:
	case 11:
		season = "Autumn\n";
			break;
	case 12:
	case 1:
	case 2:
		season = "Winter\n";
			break;
	}
	cout << season << endl;

	


}

``` 
