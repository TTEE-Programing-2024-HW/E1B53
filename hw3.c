#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
#include <time.h>
void displayseat();
void log1seat();
void log2seat();
char seat[9][9];
int main()
{
//1.�b�ù��W�X�{�ӤH���檺�e��(�ܤ�20��)�C�ϥΪ̫����M���ù��i�J�B�J2.//
	puts("///////////////////////////////////////");//�ӤH���� 
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
	
	system("pause");//�e���Ȱ����ݨϥΪ̫����N��
	system("cls");//�M���e��

//2��J�K�X(2024) 
	int a,n,password=2024;
	while(a<3)//�u���J�K�X�T�� 
	{
		printf("�п�J4�ӼƦr���K�X:");
		scanf("%d",&n);//Ū�� 
		if(n==password)
		{
			break;
		}
		else
		{
			a++;
			printf("�K�X���~�A�ѤU%d�����|\n",3-a);
		}
	}
	if(a==3)
	{
		printf("���~���ƶW�L3���A�{�ǰh�X\n");
		return 0;
	}
	system("pause");
	system("cls");
//3��� 
	puts("////////////////////////////////////////////");//�ӤH���� 
	puts("/   E                           E          /");
	puts("/    1      a=Available seats    1         /");
	puts("/     B     b=Arrange for you     B        /");
	puts("/      5    c=Choose by yourself   5       /");
	puts("/       3   d=Exit                  3      /");
	puts("/        ��                          ��    /");
	puts("////////////////////////////////////////////");
//a,b,c,d�{���X 
	char ch;
	int n1,num;
	printf("�п�J�@�Ӧr���ba��d����:\n");
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
        	printf("�п�J�һݮy��ƶq (1~4): ");
        	scanf("%d", &s);
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
    			printf("�п�ܤ@�ثe���C�U��Ӯy��(1)/�s��4��(2):");
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
    			printf("��s�᪺�y���G\n");
    			displayseat();
    			char faction;
    			printf("�O�_���N�y��H(y/n):");
    			scanf(" %c", &faction); 
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
    						printf("�п�J'y'��'n'\n");
    					
						}
		
	
		} 
						
          	
		
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
	int i,j;
	for(i=0;i<9;i++) {
        for(j=0;j<9;j++){
        	if(seat[i][j]=='@'){
        		seat[i][j]='*';
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

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
