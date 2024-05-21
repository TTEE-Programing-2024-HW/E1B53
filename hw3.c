#include<stdio.h>
#include<stdlib.h>
void displayseat();
void log1seat();
void log2seat();
int parse_seat_choice(const char* seat_choice, int* row, int* col);
int validate_seat_selection(int row, int col);
char seat[9][9];
int main()//Main function
{

	puts("///////////////////////////////////////");// Personal style interface
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
	
	system("pause");// Pause program, press any key to continue
	system("cls");// Clear screen when any key is pressed


	int a,n,password=2024;
	while(a<3)
	{
		printf("�п�J4�ӼƦr���K�X:");
		scanf("%d",&n);
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
 
	puts("////////////////////////////////////////////"); // Personal style interface
	puts("/   E                           E          /");
	puts("/    1      a=Available seats    1         /");
	puts("/     B     b=Arrange for you     B        /");
	puts("/      5    c=Choose by yourself   5       /");
	puts("/       3   d=Exit                  3      /");
	puts("/        ��                          ��    /");
	puts("////////////////////////////////////////////");

	char ch;
	printf("�п�J�@�Ӧr���ba��d����:\n");
    scanf(" %c", &ch); // Read user ch
    switch(ch){ 
    	case 'a':
                	system("cls");
                	displayseat();// Display current seat arrangement
          	      	break;
        case 'b':    
			{
			system("cls");
            int s,i,j;
        	printf("�п�J�һݮy��ƶq (1~4):");
        	scanf("%d",&s);//Read 
        	getchar();// Consume newline 
        	displayseat();//plug-in
        	if(s>=1 && s<=3)
			{
        		int start_row = rand()%9;//Generate a random number between 0-8(row) 
            	int start_col = rand()%(9-s+1);//// Generate a random number between 0-(9-s)(col)
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
    			scanf("%d",&o);//Read 
    			if(o==1)
				{
               		int start_row = rand() % 7;// Random row (0-6)
               		int start_col = rand() % 8; // Random col (0-7)
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
               		int start_row = rand() % 8;// Random row (0-7)  
                	int start_col = rand() % 6; // Random col (0-5)
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
    			displayseat();//plug-in
    			char check;
    			printf("�O�_���N�y��H(y/n):");
    			scanf(" %c",&check); 
    			getchar();  // Consume newline       
    			if (check== 'y' || check=='Y')
					{
    					log1seat();//plug-in
        				system("cls");
						break; 
    				}
					else if (check== 'n' || check=='N')
					{
    					log2seat();//plug-in
        				system("cls");
						break;
    				}
						else
						{
    						printf("�п�J'y'��'n'\n");
    					
						}
		
	
		}
		
  		case 'c':
  		{
    	printf("�п�ܤ@�Ӧ�m�A�p5-2�C5�C��2��B3-7�|�O��3�C��7��C\n");
    	printf("��ܤ@�Ӯy��:");
    	char seat_choice[5];
    	scanf("%s", seat_choice);
    	getchar();// Consume newline
    	int row, col, chosen_seats = 0;
    	if (parse_seat_choice(seat_choice, &row, &col))
		{
        	if (validate_seat_selection(row, col))
			{
            seat[row-1][col-1]='@';
            chosen_seats++;
            printf("�y���ܦ���\n");
        	}	
			else
			{
           		printf("�y��w�Q���\n");
        	}
    	} 
			else
			{
        		printf("�y���ܥ��ѡC\n");
    		}
    	printf("��s�Z�y���G\n");
    	displayseat();//plug-in
    	break;	
		}
		case 'd':
			{
			system("cls");
			char ans;
				printf("Continue?(y/n):");
				scanf("%s",&ans);//Read 
				while(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n')// Check if the character is 'y' or 'x'
				{
					printf("Continue? (y/n):");
					scanf("%s",&ans);
					getchar();
				}
				if(ans=='y'||ans=='Y')
				{
        		system("CLS");
        		break; 
			}
			else if(ans=='n'||ans=='N')
				break;
				default:
                    printf("���~: ��J�r�����b 'a' �� 'c' �϶�\n"); 
	}
system("pause");
	return 0;
}
}


void displayseat()
{
	int i,j;
	printf("\\123456789\n");  // Display seat numbers  
    for (i=0;i<9;i++){
        printf("%d",i+1);   // Display row numbers    
        for (j=0;j<9;j++){
            printf("%c",seat[i][j]); // Display seat status
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
                seat[i][j] = '*'; // Log seat as reserved
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
        		seat[i][j]='-';// Log seat as canceled
        	}
   		}
	}
}
int parse_seat_choice(const char* seat_choice, int* row, int* col) {
    // Return 0 if the format of seat choice is incorrect
    if (sscanf(seat_choice, "%d-%d", row, col) != 2) {         
        printf("�ѪR�y���ܥ��ѡG�Ы��Ӯ榡��J�y���ܡA�p1-2�B2-9�C\n");
        return 0;
    }
 
	// Return 0 if the seat selection is out of range
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
//�o���@�~�ڪ�F�ܦh�ɶ��ӤF�ѶR���D�اڻݭn��򰵤]��F�ܦh�ɶ��h���X�@�~���e
//�ڤ]�ϥΤF�ܦh�ɶ��h�M�P�ǰQ�׵{���n���,���٬O���ǵ{�������X�өΦ��I�p�� 
//�o�����]�ھǨ�F�ܦh�s��C�y���Ϊk�Ʊ��ڥH�ᥴ�{������h���U 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
