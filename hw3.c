#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
int main()
{
//1.在螢幕上出現個人風格的畫面(至少20行)。使用者按鍵後清除螢幕進入步驟2.//
	puts("///////////////////////////////////////");//個人風格 
	puts("///////////////////////////////////////");
	puts("//EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE//");
	puts("//EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE//");
	puts("//EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE//");
	puts("//EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE//");
	puts("//-----------------------------------//");
	puts("//11111111111111111111111111111111111//");
	puts("//11111111111111111111111111111111111//");
	puts("//11111111111111111111111111111111111//");
	puts("//11111111111111111111111111111111111//");
	puts("//-----------------------------------//");
	puts("//BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB//");
	puts("//BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB//");
	puts("//BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB//");
	puts("//BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB//");
	puts("//-----------------------------------//");
	puts("//55555555555555555555555555555555555//");
	puts("//55555555555555555555555555555555555//");
	puts("//55555555555555555555555555555555555//");
	puts("//55555555555555555555555555555555555//");
	puts("//-----------------------------------//");
	puts("//33333333333333333333333333333333333//");
	puts("//33333333333333333333333333333333333//");
	puts("//33333333333333333333333333333333333//");
	puts("//33333333333333333333333333333333333//");
	puts("///////////////////////////////////////");
	puts("///////////////////////////////////////");
	
	system("pause");//畫面暫停等待使用者按任意鍵
	system("cls");//清除畫面

//2輸入密碼(2024) 
	int a,n,password=2024;
	while(a<3)//只能輸入密碼三次 
	{
		printf("請輸入4個數字的密碼:");
		scanf("%d",&n);//讀取 
		if(n==password)
		{
			break;
		}
		else
		{
			a++;
			printf("密碼錯誤，剩下%d次機會\n",3-a);
		}
	}
	if(a==3)
	{
		printf("錯誤次數超過3次，程序退出\n");
		return 0;
	}
	system("pause");
	system("cls");
//3選單 
	puts("////////////////////////////////////////////");//個人風格 
	puts("/   E                           E          /");
	puts("/    1      a=Available seats    1         /");
	puts("/     B     b=Arrange for you     B        /");
	puts("/      5    c=Choose by yourself   5       /");
	puts("/       3   d=Exit                  3      /");
	puts("/        號                          號    /");
	puts("////////////////////////////////////////////");
} 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
