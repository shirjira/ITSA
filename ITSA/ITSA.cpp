﻿#include<iostream>  
#include<cstring>  

using namespace std;

int main() {
    char enter[10000];
    fgets(enter, 9999, stdin);
    int len = strlen(enter);
    for (int i = 0; i < len; i++) {
        enter[i] = tolower(enter[i]);
    }
    char ans[1000][1000];
    int nowAns = 0;
    char* pch = strtok(enter, " \r\n");  
    while (pch != NULL) {
        int judge = 1;
        for (int i = 0; i < nowAns; i++) {
            if (strcmp(ans[i], pch) == 0) {
                judge = 0;
                break;
            }
        }
        if (judge) {
            strcpy(ans[nowAns], pch);
            nowAns++;
        }
        pch = strtok(NULL, " \r\n");  
    }
    for (int i = 0; i < nowAns; i++) {
        if (i)
            cout<<" ";
           cout<<ans[i];
    }
    cout<<"\n";
    return 0;
}
	
