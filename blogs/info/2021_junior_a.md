# 2021 網路賽A. 圈圈叉叉
## 題目敘述
[點我](https://whaleon120.github.io/contest%20(1).pdf)
## 想法
for處理，比耐心和細心
## 我的AC CODE
``` cpp
#include<iostream>
using namespace std;
int main(){
int a, i, j, co=0, cx=0, c, o=0, x=0;
int b[2000][2000];
char s[2000];
std::cin >> a;
    for(j=0;j<a;j++){
        std::cin >> s;
    for(i=0;i<a;i++){
        if(s[i]=='O'){
        b[j][i]=1;
        co += 1;
        }
        else{
            b[j][i]=0;
            cx += 1;
        }
    }
    }
 
if(a%2==0 and cx != co){
    std::cout << "Impossible" << endl;
}
else if(a%2 !=0 and (cx+1) != co){
    std::cout << "Impossible" << endl;
}
else{
    for(i=0;i<a;i++){
        c=0;
        for(j=0;j<a;j++){
            if(b[i][j]==b[i][0]){
                c += 1;
            }
        }
        if(c==a){
            if(b[i][0]==1){
                o += 1;
            }
            else{
                x += 1;
            }
        }
    }
    c=0;
    for(i=0;i<a;i++){
        c=0;
        for(j=0;j<a;j++){
            if(b[j][i]==b[0][i]){
                c += 1;
            }
        }
        if(c==a){
            if(b[0][i]==1){
                o += 1;
            }
            else{
                x += 1;
            }
        }
    }
    c=0;
    for(i=0;i<a;i++){
        if(b[i][i]==b[0][0]){
        c += 1;
        }
 
    }
    if(c==a){
            if(b[0][0]==1){
                o += 1;
            }
            else{
                x += 1;
            }
        }
    c=0;
    for(i=0;i<a;i++){
        if(b[a-1-i][i]==b[a-1][0]){
        c += 1;
        }
    }
    if(c==a){
            if(b[a-1][0]==1){
                o += 1;
            }
            else{
                x += 1;
            }
        }
        std::cout << o <<" "<< x << endl;
}
 
return 0;
}

```
## 感想
啊!!!結果沒預期好QQ  
但網路賽其實蠻不公平，還有人在發攻擊
