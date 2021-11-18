# 2010 NPSC 國中組決賽G.失落的維京戰機
[回前頁](https://whaleon120.github.io/blogs/info/main)
## 題目敘述
[點我](http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=g078)
## 想法
字串輸入 用數字搜尋
## 我的AC CODE
``` cpp
#include <iostream>                
#include<string.h>                
#include<queue>                
using namespace std;                
int main() {                
    ios::sync_with_stdio(0);                
    cin.tie();                
    // your code goes here                
    int a, count, x=1;                
    char s[101];                
    queue<int> q;                
                
    cin >> a;                
    for(int i=0;i<a;i++){     
count=0;               
        cin >> s;                
        for(int j=0;j<strlen(s);j++){    
            if(isdigit(s[j])==true){    
if(s[j+1] != '*'){    
x *= (s[j]-'0');    
count += x;    
x=1;    
}    
else{    
x *= (s[j]-'0');    
}    
}    
}    
q.push(count);    
count=0;    
}            
                  
    do{                
        cout << q.front()<<'\n';                
        q.pop();                
    }while(!q.empty());                
    return 0;                
}                

``` 
## 解後小記
恩，字串就是多想  
