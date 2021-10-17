#include<bits/stdc++.h>
using namespace std;
int main()
{
cout << "我是chatbot 叫做 Whale01\n";
cout <<"我可以:\n四位數幾A幾B\n猜拳\n聽你抱怨\n開啟google\n開啟youtube\n";
cout <<"但請您完整輸入上述字串，不然我會無法運作喔!!!\n";
string s;
int ask[4],ans[4];
int a=0,b=0;
int i, j, c, d;
    cin >> s;
if(s=="四位數幾A幾B"||"幾A幾B"){
  cout <<"p.s:數字輸入得用空格隔開喔!\n四數均不相等\n";
  do{
for(i=0;i<=3;i++){
  srand( time(NULL) );
    ask[i] = rand() % 10;
}
}while(ask[0] !=ask[1] != ask[2] !=ask[3]);
do{
for(i=0;i<=3;i++){
  cin >> ans[i];
}
for(j=0;j<=3;j++){
for(i=0;i<=3;i++){
  if(ans[j]==ask[j]){
    a += 1;
  }
  else if(ans[j]==ask[i]){
    b += 1;
  }
}
}
cout << a <<"A"<<b<<"B\n";
if(a==4){
  cout << "你對了!"<<"， 你用了"<<c+1<< "次機會\n";
  c=0;
  }
  else{
    c+=1;
  }
a=0,b=0;
}while(a != 4);  
}
    else if(s=="test"){
        cout << "test";
    }
return 0;
}
//system ("START www.google.com");
