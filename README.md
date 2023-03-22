# 題目13. 撲克牌大小
## 問題描述：
### 撲克牌的遊戲有很多種，像是大老二、撿紅點等。然而，現在您要參與的是比大小遊戲，每張牌各有其花色和數字，大小比較主要以花色為主，黑桃 > 紅心 > 方塊 > 梅花；倘若花色相同時，則比較數字。
## 輸入說明:
### 第一列的整數，代表撲克牌的疊數，其後有若干列，每列即為一疊牌的內容，每張牌分別以英文、數字作表示，其中 S 代表黑桃、 H 代表紅心、 D 代表方塊、 C 代表梅花。每筆資料分別以空白隔開。
## 輸出說明：
### 印出排列過後的撲克牌。一行是一 疊 牌， 每張牌以空白隔開。
## 範例

## 輸入範例:
### 4
### H5 D4 S2 C13
### D8 S3 D10 C12 H7
### H6 S3
### C5 D11 S1

## 輸出範例:
### S2 H5 D4 C13
### S3 H7 D10 D8 C12
### S3 H6
### S1 D11 C5

## 解答
``` 
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

void sortPoke(vector<string>& a, int n);
int main()
{
	int input = 0, n = 0;
	string Str, s;
	
	vector<string> pokeS;
	cin >> input;//輸入測試資料筆數
	cin.ignore(1, '\n');//消除於字串後的換行符號
	for (int i = 0; i < input; i++)//依資料筆數決定處理次數
	{
		getline(cin, Str);//讀入一整行
		istringstream cutStr(Str);//轉換成可分割型態
		while (getline(cutStr, s, ' '))//分割並推入向量
		{
			pokeS.push_back(s);
		}
		sortPoke(pokeS, pokeS.size());//排序
		for (int j = 0; j < pokeS.size(); j++)//輸出排序結果
		{
			if (j == pokeS.size() - 1)
				cout << pokeS[j] << endl;
			else
				cout << pokeS[j] << " ";
		}
		pokeS.clear();//清空向量給下一筆測資

	}
		
	
	return 0;
}
void sortPoke(vector<string>& a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			string t;
			if (a[i][0] > a[j][0]) { t = a[i]; a[i] = a[j]; a[j] = t; }
		}
	}
	//以上為泡沫排序法
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 + i; j < n; j++)
		{
			if (a[i][0] == a[j][0])
			{//針對其數字不同進行轉換型態後比較
				string t, bN = a[i].substr(1, 2), sN = a[j].substr(1, 2);
				istringstream bigN(bN);
				istringstream smaN(sN);
				int b = 0, s = 0;
				bigN >> b; smaN >> s;
				if (b < s) { t = a[i]; a[i] = a[j]; a[j] = t; }
			}
		}
	}
	//最後進行同花色間的排序
	
	
}



``` 
