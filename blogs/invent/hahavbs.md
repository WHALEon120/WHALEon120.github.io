# vbs 上課整老師之整理
[回前頁](https://whaleon120.github.io/blogs/invent/main)   
template:(一定要先敲)
``` vbs
set ws = CreateObject("WScript.Shell")
``` 
按ESC鍵
``` vbs
ws.sendkeys"{ESC}"
``` 
撥放影音
``` vbs
ws.run("檔案位置")
``` 
計時
``` vbs
Wscript.Sleep(你要的秒數*1000)
``` 
跳出訊息框(英文最安全)
``` vbs
msgbox("內容")
``` 
跳出輸入框
``` vbs
inputbox("輸入標題")
``` 
定義變數
``` vbs
dim a
``` 
運算子
``` vbs
+ - * /
......一堆，不用說吧?(國小數學
``` 
for迴圈
``` vbs
for i= 1 to 你要的數字
執行的東東
next
``` 
if和else if和else
``` vbs
if 條件
.
.
.
.
end if
``` 
其他東西自己google一下  
先說，對初學者來說實在不太建議學vbs，除非是想學整人  
一整人經驗來看for就是讓東西一直關不掉  
sendkeys就是讓ptt自己跳  
run就是突然跑東西出來  
恩，大概就這樣  
(我以後要不要開整人日常啊...?
