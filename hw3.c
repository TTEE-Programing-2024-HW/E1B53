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
    						printf("�п�J'y'��'n'\n");
    					
						}
		
	
		}
		
  		case 'c':
    	printf("�п�ܤ@�Ӧ�m�A�p5-2�C5�C��2��B3-7�|�O��3�C��7��C\n");
    	printf("��ܤ@�Ӯy��:");
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
            printf("�y���ܦ��ġC\n");
        	}	
			else
			{
           		printf("�y���ܵL�ġG�Ӯy��w�g�Q��C\n");
        	}
    	} 
			else
			{
        		printf("�y���ܸѪR���ѡC\n");
    		}
    	printf("��s�Z�y���G\n");
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
        printf("�ѪR�y���ܥ��ѡG�Ы��Ӯ榡��J�y���ܡA�p1-2�B2-9�C\n");
        return 0;
    }
    
    if (*row < 1 || *row > 9 || *col < 1 || *col > 9) {
        printf("�ѪR�y���ܥ��ѡG�y���ܶW�X�d��C\n");
        return 0;
    }
    printf("�ѪR�y���ܦ��\�G%d �� %d �C�C\n", *row, *col);
    return 1;    
    
}

	 int validate_seat_selection(int row, int col) {
    if (seat[row - 1][col - 1] == '*') {
        printf("���~�G�y��w�g�Q�w�q�C\n");
        return 0;
    }
    return 1; 
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
