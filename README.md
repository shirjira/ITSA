# 題目20. 大整數加法
## 問題描述：
### 有時候我們有些很大的值，大到即使大型的計算機也無法幫我們作一些很基本的運算。請你寫一個程式來解決兩個大整數的加法問題。
## 輸入說明:
### 第一行有一個正整數 N ，表示共有 N 筆測試資料。接下來有 N 行，每行為一筆測試資料，內含兩個整數，其值不超過 30 位數，兩個整數間有一個空格。
## 輸出說明：
### 每筆測試資料輸出兩個整數的和於一行
## 範例

## 輸入範例:
### 2
### 123456789012345678901234567890 98765432109876543210
### 13579024681234567890012453 24681357909876543210567891
## 輸出範例:
### 123456789111111111011111111100
### 38260382591111111100580344
## 解答
``` 
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string plus_stacks(const string& num1, const string& num2)
{
    int n1[35] = { 0 };
    int n2[35] = { 0 };
    int sum[35] = { 0 };
    int num1_len = num1.size();
    int num2_len = num2.size();
    stringstream ss;

    for (int i = 0; i < 35; i++)
    {
        if (i < num1_len)n1[34 - i] = num1[num1_len - 1 - i] - '0';//字串陣列-'0'後可以強制轉成int
        if (i < num2_len)n2[34 - i] = num2[num2_len - 1 - i] - '0';

        sum[i] = n1[34 - i] + n2[34 - i];//倒過來從個位數開始
    };
    for (int j = 0; j < 35; j++) 
    {
        if (sum[j] >= 10) 
        {
            sum[j] -= 10;  
            sum[j + 1]++;  
        };
    };
    bool leading_zeros = true;//輸入stringstream時把前導零排除
    for (int k = 34; k >= 0; k--)
    {
        if (leading_zeros == 1 && sum[k] == 0) 
        {
            continue;
        }
        leading_zeros = false;
        ss << sum[k];
    }

    string result = ss.str();//轉換成字串
    return result;
}

int main()
{
    int n;
    cin >> n;
    string sum;
    for (int i = 0; i < n; i++)
    {
        string num1, num2;
        cin >> num1 >> num2;
        cout << plus_stacks(num1, num2) << endl;
    };
}
``` 
