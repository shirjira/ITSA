# 題目17. 英文斷詞
## 問題描述：
### 斷詞在自然語言的研究上是個很重要的步驟，主要就是將關鍵字從句子中斷出，英文的斷詞較為簡單，就根據句子中的空格將英文字隔開。
## 輸入說明:
### 輸入一句英文敘述句。 字元數≤1000。
## 輸出說明：
### 將輸入的句子進行斷詞，將斷出的關鍵字依照句子中的出現排序列印出。全部轉成小寫，列印出的關鍵字不得重複，關鍵字間以一個空格隔開，最後一個關鍵字後面進行換行。例如輸入 How do you do ，則輸出 how do you 。
## 範例

## 輸入範例:
### How do you do


## 輸出範例:
### how do you


## 解答
``` 
#include<iostream>  
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



``` 
