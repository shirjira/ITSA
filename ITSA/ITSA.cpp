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