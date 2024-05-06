#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
void Triangle(char tri);
void nineXnine(int n1);
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
	puts("///////////////////////////////////////");//個人風格 
	puts("/   E                        E        /");
	puts("/    1    a=畫出直角三角形    1       /");
	puts("/     B   b=顯示乘法表         B      /");
	puts("/      5  c=結束                5     /");
	puts("/       3                        3    /");
	puts("///////////////////////////////////////");
//4	a,b,c程式碼 
	char ch,tri,ans;
	int n1,num;
	printf("請輸入一個字元在a到c之間:\n");
    scanf(" %c", &ch);//讀取字元 
	switch (ch)
	{
    	case 'A'://直角三角形 
    	case 'a':	
			system("cls");
       		printf("請輸入一個(a-n)的字母:");
       		scanf("%c",&tri);//讀取字元 
			while (tri<'a'||tri>'n')//判斷字源是否在範圍內 
       		{
       			printf("錯誤，輸入字元不在'a'至'n'區間\n");
       			printf("請重新輸入一個(a-n)的字母:");
       			scanf("%c",&tri);// 重新讀取字元
       			getchar();//進入緩衝區讀取輸入值 
       		}
       	Triangle(tri);//呼叫直角三角形程式 
		break;//結束跳出迴圈 
		case 'B'://九九乘法表 
    	case 'b':
     		system("cls");
                    int n1,num;
					printf("輸入一個1到9之間的整數:n：");
                    scanf("%d",&num);//讀取數字 
                    while(num<1||num>9)//判斷是否在1-9間 
					{
        			printf("錯誤，請輸入1至9之間的整數\n");
        			scanf("%d", &num);// 重新讀取字元
        			getchar();//進入緩衝區讀取輸入值 
    				}
                    nineXnine(num);//呼叫九九乘法表程式 
                    break;//結束跳出迴圈 
        case 'C':
    	case 'c':
    		system("cls");
				printf("Continue?(y/n):");
				scanf("%s",&ans);//讀取字元
				while(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n')//判斷字源是否為y或x 
				{
					printf("Continue? (y/n):");
					scanf("%s",&ans);// 重新讀取字元
					getchar();//進入緩衝區讀取輸入值
				}
				if(ans=='y'||ans=='Y')
				{
        		system("CLS");
        		break;//結束跳出迴圈 
			}
			else if(ans=='n'||ans=='N')
				break; //結束跳出迴圈  
				default:
                    printf("錯誤: 輸入字元不在 'a' 至 'c' 區間\n"); 
	}
system("pause");
	return 0;
}

void Triangle(char tri)//直角三角形程式 
{   
    int i,j;
    int rows=tri-'a'+1; 
	for (i=0;i<rows;i++)//印出空格
	{
       	for (j=rows-i-1;j>0;j--)
	    {
            printf(" ");
    	}
    	for (j=0;j<=i;j++)// 印出字母
		{
            printf("%c",'a'+j);
        }
        printf("\n");
    }
}
void nineXnine(int n1) //九九乘法表程式 
{
    printf("乘法表：\n");         
    int i,j;
    for(i=1;i<=n1;++i) 
	{
        for (j=1;j<=n1;++j) 
		{
            printf("%d*%d =%-3d",i,j,i*j); //%-3d使得排版整齊  
        }
        printf("\n");
    }
}
//這次功課我覺得最難的是設定github因為這是新的東西但是也好在可以提早知道這個很多打程式厲害的人在用的程式
//這次功課我也對迴圈有更加深入的了解尤其是在迴圈中確認括弧是否有括對這讓我花了很多時間
//這次功課我的除錯能力也變好了因為第一次打完的時候都跑不出來讓我需要一直看底下英文看我哪裡出錯了
 
