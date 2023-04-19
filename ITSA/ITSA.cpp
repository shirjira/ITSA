#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    string strN;
    getline(cin, strN);
    int N = atoi(strN.c_str());

    for (int g = 0; g < N; g++)
    {
        string STRinput;
        getline(cin, STRinput);
        string other = "!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdfghjkl;''<>??zxcvbnm,.//";
        int fir = STRinput.size();
        int sec = other.size();

        for (int i = 0; i < fir; i++)
        {
            STRinput[i] = tolower(STRinput[i]);
        }
        for (int i = 0; i < fir; i++)
        {
            for (int j = 0; j < sec; j++)
            {
                if (STRinput[i] == ' ')
                {
                    STRinput[i] = ' ';
                    break;
                }
                else if (STRinput[i] == other[j])
                {
                    STRinput[i] = other[j + 1];
                    break;
                }
            }
            cout << STRinput[i];
        }
        cout << endl;
    }
    return 0;
}

