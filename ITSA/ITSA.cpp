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