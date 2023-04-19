#include<iostream> 
using namespace std;

int main()
{
    int board[3][3];
    int flag;
    bool compare = false;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        flag = 0;
        for (int j = 0; j < 2; j++) //行比較 
        {
            if (board[i][j] == board[i][j + 1])flag++;
        }
        if (flag == 2)compare = true;
    }

    for (int i = 0; i < 2; i++) {
        flag = 0;
        for (int j = 0; j < 2; j++) //列比較 
        {
            if (board[j][i] == board[j + 1][i])flag++;
        }
        if (flag == 2)compare = true;
    }
    flag = 0;
    for (int i = 0; i < 2; i++) //左上到右下 
    {

        if (board[i][i] == board[i + 1][i + 1])flag++;
        if (flag == 2)compare = true;
    }
    flag = 0;
    for (int i = 0; i < 2; i++) //右下到左上 
    {
        if (board[2 - i][i] == board[1 - i][i + 1])flag++;
        if (flag == 2)compare = true;
    }
    if (compare == true)cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}