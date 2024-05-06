#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
int main()
{
//1.在螢幕上出現個人風格的畫面(至少20行)。使用者按鍵後清除螢幕進入步驟2.//
	puts("///////////////////////////////////////");
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

//2
	int a,n,password=2024;
	while(a<3)
	{
		printf("請輸入4個數字的密碼:");
		scanf("%d",&n);
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
	system("pause");//畫面暫停等待使用者按任意鍵
	system("cls");//清除畫面
//3
	puts("///////////////////////////////////////");
	puts("/   E                        E        /");
	puts("/    1    a=畫出直角三角形    1       /");
	puts("/     B   b=顯示乘法表         B      /");
	puts("/      5  c=結束                5     /");
	puts("/       3                        3    /");
	puts("///////////////////////////////////////");
//4	
	char ch,tri;
	int n1,num;
	printf("請輸入一個字元在a到c之間:\n");
    scanf(" %c", &ch);
		getchar();
	switch (ch){
    	case 'A':
    	case 'a':	
			system("cls");
       		printf("請輸入一個(a-n)的字母:");
       		scanf("%c",&tri);
			while (tri<'a'||tri>'n')
       		{
       			printf("錯誤，輸入字元不在'a'至'n'區間\n");
       			printf("請重新輸入一個(a-n)的字母:");
       			scanf("%c",&tri);
       			getchar();
       		}
       	Triangle(tri);
		break;
		case 'B':
    	case 'b':
     		system("cls");
                    int n1,num;
					printf("輸入一個1到9之間的整數:n：");
                    scanf("%d",&num);
                    getchar();
                    while(num<1||num>9)
					{
        			printf("錯誤，請輸入1至9之間的整數\n");
        			scanf("%d", &num);
        			getchar();
    				}
                    nineXnine(num); 
                    break;
		
			
				
    	
    	
		
		
		
		
		
		
		
       		


        
        
        
       	
       	
    
}
system("pause");
	return 0;
}

void Triangle(char tri){   
    int i,j;
    int rows=tri-'a'+1; 

    for (i=0;i<rows;i++){
       
        for (j=rows-i-1;j>0;j--){
            printf(" ");
        }
     
        for (j=0;j<=i;j++){
            printf("%c",'a'+j);
        }
        printf("\n");
    }
}
void nineXnine(int n1) {
    printf("乘法表：\n");         
    int i,j;
    for(i=1;i<=n1;++i) {
        for (j=1;j<=n1;++j) {
            printf("%d*%d =%-3d",i,j,i*j);   
        }
        printf("\n");
    }
}

	

