#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input); 

    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"; 

    for (int i = 0; i < input.length(); i++)
    {
        char a = input[i];
        int index = keyboard.find(a);
        if (index != string::npos) 
        { 
            char next_a = keyboard[index + 1];
            if (next_a == '!' || next_a == '@' || next_a == '#' || next_a == '$' || next_a == '^' ||
                next_a == '*' || next_a == '(' || next_a == ')' || next_a == '_' || next_a == '+' ||
                next_a == '{' || next_a == '}' || next_a == '|' || next_a == ':' || next_a == '\"' ||
                next_a == '<' || next_a == '>' || next_a == '?' || next_a == '\n' || next_a == '\r' ||
                next_a == '\t' || next_a == '\b' || next_a == '\\' || next_a == ']') {
                next_a = keyboard[index + 2];
            }
            cout << next_a;
        }
        else 
        {
            cout << a;
        }
    }
    cout << endl;
    return 0;
}

