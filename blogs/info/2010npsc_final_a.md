# 2010 NPSC國中組決賽 A帕斯卡三角形
[回前頁](https://whaleon120.github.io/blogs/info/main)
## 題目敘述
[點我](http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=g072)
## 想法
dp 累加
## 我的AC CODE
``` cpp
#include<iostream>  
#include<queue>  
#include<utility>  
using namespace std;  
#define pii pair<int,int>  
int main(){  
int n, dp[14][14];  
queue<pii> q;  
pii test;  
int i, j;  
while(cin >> n){  
for( i=0;i<n;i++){  
cin >> test.first >> test.second;  
q.push(test);  
}  
}  
for(i=1;i<14;i++){  
for(j=1;j<=i;j++){  
    if(j==1 || j==i){  
        dp[i][j]=1;  
    }  
    else{  
        dp[i][j]=dp[i-1][j-1]+dp[i-1][j];  
          
    }  
}  
      
}  
do{  
    test=q.front();  
    cout << dp[test.first][test.second]<<'\n';  
    q.pop();  
}while(!q.empty());  
return 0;  
}  
```
