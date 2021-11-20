# 2021 NPSC國中組網路賽 F. ⼀個遊戲
## 題目敘述
[點我](https://whaleon120.github.io/contest%20(1).pdf)
## 想法
用%看餘數 用to_string()轉成字串看包含
## 我的AC CODE
``` cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie();
int a, b, c, i, j;
string s;
bool t=false;
cin >> a >> b;
c=0;
for(i=1;i<=a;i++){
	s=to_string(i);
	t=false;
	for(j=0;j<sizeof(s);j++){
		if((s[j]-'0')==b or i % b==0){
			t=true;
		}
	}
	if(t==true){
		c += 1;
	}
}
cout << c << '\n';
return 0;
}
 

```
## 感想
啊!!!結果沒預期好QQ  
但網路賽其實蠻不公平，還有人在發攻擊(主辦單位說的)
