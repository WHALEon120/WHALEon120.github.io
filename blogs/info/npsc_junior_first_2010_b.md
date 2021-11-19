# NPSC 2010 國中組決賽 B.好吃的麵包
[回前頁](https://whaleon120.github.io/blogs/info/main)
## 題目敘述
[點我](http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=g067)
## 想法
用字串輸入土地 細節注意 用for跑
## 我的AC CODE
``` cpp
#include<iostream>  
#include<string.h>  
using namespace std;  
  
int main() {  
    // your code goes here  
    ios::sync_with_stdio(0);  
    cin.tie();  
    int t, m, n, i,  count, x;  
    int l[500][500];  
    int dirx[4]={0,0,1,-1};  
    int diry[4]={1,-1,0,0};  
    string s;  
        while(cin >> t){  
        for(i=1;i<=t;i++){  
            count=0;  
            cin >> n >> m;  
            for(int j=0;j<n;j++){  
                cin >> s;  
                for(int k=0;k<m;k++){  
                    l[j][k]=s[k]-'0';  
                }  
            }  
            for(int z=0;z<n;z++){  
                for(int y=0;y<m;y++){  
                if(l[z][y]==1){  
                for(int x=0;x<=3;x++){  
                    if(l[z+dirx[x]][y+diry[x]]==0 or z+dirx[x]<0 or z+dirx[x]>=n or y+diry[x]<0 or y+diry[x] >=m ){  
                        count += 1;  
                    }  
                }     
                }     
                }  
            }  
  
              
            cout << count << '\n';  
              
        }  
        }  
    return 0;  
}  

```
## 感想
最近準備國中組NPSC，都先刷點廢題  
(難的也沒幾題ww)(大神勿轟)
