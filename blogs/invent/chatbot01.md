# 自製C++ CHATBOT  
### SOURCE CODE  
``` cpp
#include<bits/stdc++.h>
using namespace std;
int DIGITS=4;    //宣告要猜的數字的位數，由使用者定義，初值設 4
int question[6];    //宣告問題數字陣列
void generateQuestion();    //隨機產生 DIGITS 個不同的數字 int
void guess(int your_answer[]);    //猜數字，由使用者輸入數字
int compare(int your_answer[]);    //比較是否正確  
void generateQuestion()
{
    int is_repeat;    /* 為了檢查是否產生重複的數字 */
    int i, j;    //宣告 index 變數
    srand( time(NULL) );    //以時間做為亂數種子

    question[0] = rand() % 9 + 1;    /* 第一個數字會是 1-9 */
 
    /* 產生其餘數字 */
    for(i = 1; i < DIGITS; i++){
        /* 產生新的數字直到沒有重複的情形發生 */
        do{
            is_repeat = 0;    /* 一開始假設沒有產生重複數字的情況 */
            question[i] = rand() % 10;    /* 其他數字會是 0-9. */
            for(j = 0; j < i; j++)
            {
                if(question[i] == question[j])
                {
                    is_repeat = 1;    /* 重複發生 */
                    break;
                }
            }
        }while(is_repeat == 1);    //重複發生就繼續做
    }
}
void guess(int your_answer[])
{
    int value, i;    //宣告整數變數
    cin >> value;    //輸入數字
    if(value == 0)    //當數字為 0 時，印出答案
    {
        for(i=0;i<DIGITS;i++)
        {
             cout << question[i];
             your_answer[i] = question[i];
        }
        cout << endl;
    }
    else     /* 取得數字 */
    {
        for(i = DIGITS-1; i >=0; i--)
        {
            your_answer[i] = value % 10;
            value = value / 10;
        }
    }
}
int compare(int your_answer[])
{
    int a_count = 0, b_count = 0, i, j;

    for(i = 0; i < DIGITS; i++)
    {
        if(your_answer[i] == question[i])
        {
            a_count++;
        }
        else
        {
            for(j = 0; j < DIGITS; j++)
            {
                if(your_answer[i] ==  question[j] && j != i)
                {
                    b_count++;
                    break;
                }
            }
        }
    }
 
    cout << a_count << "A" << b_count << "B\n";
    if(a_count == DIGITS)
        return 1;
    else
    {
        cout << "請再猜一次 ^_^\n";
        return 0;
    }
}
void start(){
	cout<<"嗨，我是由William Lin做出的ChatBot小鯨\n";
	cout<<"先說，你只能對我輸入特定格式的命令(沒辦法，製作人太弱)\n";
	cout<<"輸入 google 開啟一個 google分頁\n";
	cout<<"輸入 fb 開啟一個 facebook分頁\n";
	cout<<"輸入 yt 開啟youtube\n";
	cout<<"輸入 gm 開啟gmail\n";
	cout<<"輸入 ab 跟我玩幾A幾B\n";
	cout<<"輸入 pss 跟我猜拳\n";
	cout<<"輸入 ran 讓我產生亂數\n";
	cout<<"輸入 game 跟我玩個神祕遊戲\n";
	cout<<"最後，輸入 start 查詢這些命令，輸入 quit 以將我關閉\n還有其他隱藏指令等你來猜喔!!!!!!\n";	
}
int main(){
    int pss;
    int ssp;
    int ran;
    int game[13];
    int your_answer[6];    //宣告猜測數字陣列
    int is_correct;    //整數值：辨別所猜數字是否正確
    int count=0;    //計算猜了幾次
	ios::sync_with_stdio(0);
	cin.tie();
	string a;
	game[9]=0;
    start();
	do{
		cin >> a;
		if(a == "google"){
			system ("START www.google.com");
		}
		else if(a == "fb"){
			system ("START www.facebook.com");
		}
		else if(a == "yt"){
			system ("START www.youtube.com");
		}
		else if(a == "gm"){
			system ("START www.gmail.com");
		}
		else if(a=="game"){
			do{
			
			for(int i=0;i<=8;i++){
				game[i]=(rand()%10000)+99999;
				game[9] += game[i];
				cout << game[i]<<"\n + \n";
			}
			cout << "=";
			cin >> game[10];
			if(game[10]==game[9]||game[10]==0){
				game[11]=rand()%3;
				if(game[11]==0){
				
				system ("START https://i0.hdslb.com/bfs/article/5b529889032476a6f8768ec4a8c15def5d5d851e.jpg@942w_1257h_progressive.webp");
			}
			else if(game[11]==1){
			system ("START https://s.zimedia.com.tw/s/hJcSRK-0");	
			}
			else{
				system ("START https://www.lovemk.com/wp-content/uploads/2020/05/2020052112371148.jpeg");
			}
			cout<<"答對咯!";
			}
			else{
				for(int j=0;j<=10;j++){
				
			system ("START https://google.com");	
		}
		cout <<"答錯咯!!!";
			}
			cout <<"在玩一次輸入1";
			cin>>game[12];
		}while(game[12]==1);
			
		}
		else if(a == "ab"){
    do
    {
        cout << "請輸入要猜幾位數？(4 或 5 或 6)";
        cin >> DIGITS;
    }while(DIGITS < 4 || DIGITS > 6);
    generateQuestion();
    cout << "請輸入" << DIGITS << "個不同的數字，且第一個數字不為零。 ^_^\n";

    do
    {
       guess(your_answer);    //猜數字
       count++;
       is_correct = compare(your_answer);    //比較是否正確
    }while(is_correct == 0);    //不正確就繼續猜

    cout << "恭喜！！\n你猜對了！！\n";
    cout << "你總共猜了 " << count << " 次！\n";
      
		}
		else if(a =="pss"){
			cout<<"輸入 1 代表 剪刀， 2 代表 石， 3 代表 布\n";
			cin>>ssp;
			pss=(rand())%3+1;
			if(pss==1){
				cout<<"你贏了!\n";
			}
			else if(pss==2){
				cout <<"平手\n";
			}
			else if(pss==3){
				cout << "你輸咯!\n";
			}
		}
		else if(a == "ran"){
			cout <<"輸入起始數";
			cin>>ssp;
			cout <<"輸入結尾數";
			cin>>pss;
			ran=rand()%(pss-ssp)+ssp;
			cout << ran;
		}
		else if(a == "start"){
			start();
		}
		else if(a == "whale"){
			system ("START www.youtube.com/channel/UCASVJU3rlqmw8lyy1JyPdpQ");
		}
		else  if(a == "sggs"){
			cout<<"沒想到你那麼愛學校XD\n";
			system ("START http://www.sggs.hc.edu.tw/sggsnew/news.php");
		}
		else if(a == "shutdown"){	
        system("shutdown -s -f -t 0");
		}
		else{
			cout << "請輸入正確的指令ww\n";
			start();
		}
	} while(a != "quit");
	return 0;
}
```
