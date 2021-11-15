# NPSC 2010 國中組決賽 B.好吃的麵包
[回前頁](https://whaleon120.github.io/blogs/info/main)
## 題目敘述
[點我](http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=g073)
## 想法
就......用for跑方程解
## 我的AC CODE
``` cpp
#include<iostream>  
using namespace std;  
int main(){  
    ios::sync_with_stdio(0);  
    cin.tie();  
    int n, a[10000], b[10000], c[10000], d[10000], i, j;  
    while(cin >> n){  
        for(i=0;i<n;i++){  
            cin >> a[i] >> b[i] >> c[i] >> d[i];  
              
        }  
    }  
    for(i=0;i<n;i++){  
        for(j=0;j<=d[i];j++){  
            if(b[i]*j+c[i]*(d[i]-j)==a[i]){  
                cout << j<<" "<<d[i]-j<<'\n';  
            }  
        }  
    }  
    return 0;  
}  
```
## 感想
最近準備國中組NPSC，都先刷點廢題  
(難的也沒幾題ww)(大神勿轟)
