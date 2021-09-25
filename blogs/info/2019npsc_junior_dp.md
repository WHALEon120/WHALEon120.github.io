# F. bb 與序列(npsc國中組 2019初賽) 
## 題目敘述  
[點我](https://www.google.com/url?sa=t&source=web&rct=j&url=https://contest.cc.ntu.edu.tw/npsc2019/teamclient/semi_junior.pdf&ved=2ahUKEwj18_zAq5rzAhVUIaYKHULZC9AQFnoECAkQAQ&usg=AOvVaw2jRs7Shi0hxxFPgC-b4T7u)
(最後一題)
## 觀念  
分色動態規劃，用三個陣列處存最後使用某顏色之最大值
## 動態規劃  
簡單來說就是費氏數列  
[詳細內容](http://www.tcgs.tc.edu.tw/~sagit/cpp/q12.htm)  
## 我的AC CODE  
``` cpp
#include <bits/stdc++.h>
using namespace std;
int max(int a, int b){
if(a>b){
return a;
}
  else{
  return b;
  }
}

int main(){
	int n;
	cin >> n;
	int ary[n+1];
	int i, j;
	for(i = 1;i <= n;i++){
		cin >> ary[i];
  }
	int dp[n+1][3];
	for(i = 0;i < n+1;i++){
		for(j = 0;j < 3;j++){
			dp[i][j] = 0;
    }
  }
	int color;
	for(i = 1;i <= n;i++){
		dp[i][0] = max(dp[i-1][1] - ary[i], dp[i-1][2] - ary[i]);
		dp[i][1] = max(dp[i-1][0] + ary[i], dp[i-1][2] + ary[i]);
		dp[i][2] = max(dp[i-1][0], dp[i-1][1]);
		int Max=0;
		if(dp[i][0] > Max){
			Max = dp[i][0];
			color = 0;
		}
		if(dp[i][1] > Max){
			Max = dp[i][1];
			color = 1;
		}
		if(dp[i][2] > Max){
			Max = dp[i][2];
			color = 2;
		}
		
		dp[i][color] = Max;
	}
		
	cout << dp[n][color];
	
}
```
## 結語  
抱歉第一次寫解題，挑簡單一點的寫，請不令指教  
(到BLOG主頁留言)
