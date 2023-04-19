# 題目23. 找零錢問題
## 問題描述：
### 假設銅板有1元、5元、50元共三種，媽媽請小明去菜市場買水果，給了小明N元，且媽媽交待，要老闆找小明的零錢的數目要最少，而小明到了水果攤買了a1顆蘋果，a2顆柳丁，及a3顆桃子，1顆蘋果15元，1顆柳丁20元，1顆桃子30元，請問老問需找多少個1元、5元、50元，其銅板數目最少。
## 輸入說明:
### 先輸入媽媽給小明多少錢，N，接著輸入a1, a2, a3 ， 在此n, a1, a2, a3為整數，且a1*15+ a2*20+ a3*30小於或等於N。
## 輸出說明：
### 列出共找小明多少個1元，5元及50元，若帶的錢不夠買水果，則顯示”0”。
## 範例

## 輸入範例:
### 500,1,2,3

## 輸出範例:
### 0,1,7

## 解答
``` 
#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int a[4];
    int flag = 0;
    int change = 0;
    int c1 = 0, c5 = 0, c50 = 0;

    string input, temp;//輸入字串,暫存
    cin >> input;

    stringstream ss;
    ss << input;
    while (getline(ss, temp, ','))//getline(要輸入的資料,輸入的佔存器)
    {
        if (flag < 4)a[flag] = stoi(temp);//stoi string轉int
        flag++;
    }
    change = a[0] - (a[1] * 15 + a[2] * 20 + a[3] * 30);
    if (change > 0)//由大算到小
    {
        c50 = change / 50;
        c5 = change % 50 / 5;
        c1 = change % 50 % 5;
        cout << c1 << ',' << c5 << ',' << c50 << endl;
    }
    else 
    {
        change = 0;
        cout << change << endl;
    };
}
``` 
