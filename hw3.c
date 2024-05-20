#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
#include <time.h>
void displayseat();
void log1seat();
void log2seat();
int parse_seat_choice(const char* seat_choice, int* row, int* col);
int validate_seat_selection(int row, int col);
char seat[9][9];
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
//a,b,c,d程式碼 
	char ch;
	int n1,num;
	printf("請輸入一個字元在a到d之間:\n");
    scanf(" %c", &ch); 
    switch(ch){ 
    	case 'a':
                	system("cls");
                	displayseat();
          	      	break;
        case 'b':    
			{
			system("cls");
            int s,i,j;
        	printf("請輸入所需座位數量 (1~4): ");
        	scanf("%d",&s);
        	getchar(); 
        	displayseat();
        	if(s>=1 && s<= 3)
			{
        		int start_row = rand()%9; 
            	int start_col = rand()%(9-s+1); 
            	for(i=0;i<s;i++)
				{
            		if(seat[start_row][start_col + i] !='*')
					{
            			seat[start_row][start_col + i] = '@'; 
            		}
            	}
    		}
			else if(s == 4)
			{
    			int o;
    			printf("請選擇一種前後兩列各兩個座位(1)/連續4個(2):");
    			scanf("%d",&o);
    			if(o==1)
				{
               		int start_row = rand() % 7;
               		int start_col = rand() % 8; 
               		for (i=start_row;i<start_row+2;i++) 
					{
            			for (j=start_col;j<start_col+2;j++)
						{
                        	seat[i][j] = '@';
                    	}
					}
				}
    			if(o==2)
				{
               		int start_row = rand() % 8;  
                	int start_col = rand() % 6; 
                	for (i=0;i<4;i++)
					{
                		if(seat[start_row][start_col + i] !='*')
						{
                    		seat[start_row][start_col + i] = '@'; 
                    	}
                	}
				}
			}
    			printf("更新後的座位表：\n");
    			displayseat();
    			char faction;
    			printf("是否滿意座位？(y/n):");
    			scanf(" %c",&faction); 
    			getchar();         
    			if (faction== 'y' || faction=='Y')
					{
    					log1seat();
        				system("cls");
						break; 
    				}
					else if (faction== 'n' || faction=='N')
					{
    					log2seat();
        				system("cls");
						break;
    				}
						else
						{
    						printf("請輸入'y'或'n'\n");
    					
						}
		
	
		}
		
  		case 'c':
    	printf("請選擇一個位置，如5-2列5列第2行、3-7會是第3列第7行。\n");
    	printf("選擇一個座位:");
    	char seat_choice[5];
    	scanf("%s", seat_choice);
    	getchar();
    	int row, col, chosen_seats = 0;
    	if (parse_seat_choice(seat_choice, &row, &col))
		{
        	if (validate_seat_selection(row, col))
			{
            seat[row - 1][col - 1] = '@';
            chosen_seats++;
            printf("座位選擇有效。\n");
        	}	
			else
			{
           		printf("座位選擇無效：該座位已經被選。\n");
        	}
    	} 
			else
			{
        		printf("座位選擇解析失敗。\n");
    		}
    	printf("更新后座位表：\n");
    	displayseat();
    	break;	
		
		}
}

void displayseat()
{
	int i,j;
	printf("\\123456789\n");    
    for (i=0;i<9;i++){
        printf("%d",i+1);       
        for (j=0;j<9;j++){
            printf("%c",seat[i][j]); 
        }
        printf("\n"); 
    }
}

void log1seat()
{
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (seat[i][j] == '@')
            {
                seat[i][j] = '*'; 
            }
        }
    }
}
void log2seat()
{
	int i,j;
	for(i=0;i<9;i++)
	{
        for(j=0;j<9;j++)
		{
        	if(seat[i][j]=='@')
			{
        		seat[i][j]='-';
        	}
   		}
	}
}
int parse_seat_choice(const char* seat_choice, int* row, int* col) {
    
    if (sscanf(seat_choice, "%d-%d", row, col) != 2) {         
        printf("解析座位選擇失敗：請按照格式輸入座位選擇，如1-2、2-9。\n");
        return 0;
    }
    
    if (*row < 1 || *row > 9 || *col < 1 || *col > 9) {
        printf("解析座位選擇失敗：座位選擇超出範圍。\n");
        return 0;
    }
    printf("解析座位選擇成功：%d 行 %d 列。\n", *row, *col);
    return 1;    
    
}

	 int validate_seat_selection(int row, int col) {
    if (seat[row - 1][col - 1] == '*') {
        printf("錯誤：座位已經被預訂。\n");
        return 0;
    }
    return 1; 
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
