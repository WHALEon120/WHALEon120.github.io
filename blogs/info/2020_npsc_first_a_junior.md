# 2010 NPSC 國中組初賽 A.迴文
[回前頁](https://whaleon120.github.io/blogs/info/main)
## 題目敘述
[點我](http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=g066)
## 想法
字串
## 我的AC CODE
``` cpp
#include <iostream>  
using namespace std;  
   
int main() {  
    ios_base::sync_with_stdio(0);  
    cin.tie(0);  
    int T;  
    cin >> T;  
    string s;  
    while (T--) {  
        cin >> s;  
        bool flag = true;  
        for (int l = 0, r = s.size() - 1; l <= r; l++, r--) {  
            if (s[l] != s[r]) {  
                flag = false;  
                break;  
            }  
        }  
        if (flag) cout << "yes\n";  
        else cout << "no\n";  
    }  
    return 0;  
}  

``` 
## 解後小記
無    
