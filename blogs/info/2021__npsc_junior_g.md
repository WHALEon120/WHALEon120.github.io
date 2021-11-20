# 2021 NPSC國中組網路賽 G. 三⾓撞球
[回前頁](https://whaleon120.github.io/blogs/info/main)  
## 題目敘述
[點我](https://whaleon120.github.io/contest%20(1).pdf)
## 想法
就解出三種反彈路徑的函數，代在一起解
## 我的AC CODE
``` cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
int a, b, c=0, d=0, g, h;
int t[1001][1001];
std::cin >> a >> b;
for(int i=0;i<a;i++){
	for(int j=1;j<=i+1;j++){
	t[i][j]=0;	
	}
 
}
g=b;
 
do{
	if(d==0){
		t[g][g+1]=1;
		d=1;
		h=g+1;
		g=a;
		c +=1;
	}
	else if(d==1){
		t[g][h]=1;
		d=2;
		g=a-h+1;
		c += 1;
	}
	else if(d==2){
		t[g][1]=1;
		d=0;
		c += 1;
	}
}while(t[b][1] != 1);
std::cout<<c<<endl;
return 0;
}

```
## 感想
本來以為推出簡單數學解，浪費很多時間QQ  
