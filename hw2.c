#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
void Triangle(char tri);
void nineXnine(int n1);
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
	puts("///////////////////////////////////////");//�ӤH���� 
	puts("/   E                        E        /");
	puts("/    1    a=�e�X�����T����    1       /");
	puts("/     B   b=��ܭ��k��         B      /");
	puts("/      5  c=����                5     /");
	puts("/       3                        3    /");
	puts("///////////////////////////////////////");
//4	a,b,c�{���X 
	char ch,tri,ans;
	int n1,num;
	printf("�п�J�@�Ӧr���ba��c����:\n");
    scanf(" %c", &ch);//Ū���r�� 
	switch (ch)
	{
    	case 'A'://�����T���� 
    	case 'a':	
			system("cls");
       		printf("�п�J�@��(a-n)���r��:");
       		scanf("%c",&tri);//Ū���r�� 
			while (tri<'a'||tri>'n')//�P�_�r���O�_�b�d�� 
       		{
       			printf("���~�A��J�r�����b'a'��'n'�϶�\n");
       			printf("�Э��s��J�@��(a-n)���r��:");
       			scanf("%c",&tri);// ���sŪ���r��
       			getchar();//�i�J�w�İ�Ū����J�� 
       		}
       	Triangle(tri);//�I�s�����T���ε{�� 
		break;//�������X�j�� 
		case 'B'://�E�E���k�� 
    	case 'b':
     		system("cls");
                    int n1,num;
					printf("��J�@��1��9���������:n�G");
                    scanf("%d",&num);//Ū���Ʀr 
                    while(num<1||num>9)//�P�_�O�_�b1-9�� 
					{
        			printf("���~�A�п�J1��9���������\n");
        			scanf("%d", &num);// ���sŪ���r��
        			getchar();//�i�J�w�İ�Ū����J�� 
    				}
                    nineXnine(num);//�I�s�E�E���k��{�� 
                    break;//�������X�j�� 
        case 'C':
    	case 'c':
    		system("cls");
				printf("Continue?(y/n):");
				scanf("%s",&ans);//Ū���r��
				while(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n')//�P�_�r���O�_��y��x 
				{
					printf("Continue? (y/n):");
					scanf("%s",&ans);// ���sŪ���r��
					getchar();//�i�J�w�İ�Ū����J��
				}
				if(ans=='y'||ans=='Y')
				{
        		system("CLS");
        		break;//�������X�j�� 
			}
			else if(ans=='n'||ans=='N')
				break; //�������X�j��  
				default:
                    printf("���~: ��J�r�����b 'a' �� 'c' �϶�\n"); 
	}
system("pause");
	return 0;
}

void Triangle(char tri)//�����T���ε{�� 
{   
    int i,j;
    int rows=tri-'a'+1; 
	for (i=0;i<rows;i++)//�L�X�Ů�
	{
       	for (j=rows-i-1;j>0;j--)
	    {
            printf(" ");
    	}
    	for (j=0;j<=i;j++)// �L�X�r��
		{
            printf("%c",'a'+j);
        }
        printf("\n");
    }
}
void nineXnine(int n1) //�E�E���k��{�� 
{
    printf("���k��G\n");         
    int i,j;
    for(i=1;i<=n1;++i) 
	{
        for (j=1;j<=n1;++j) 
		{
            printf("%d*%d =%-3d",i,j,i*j); //%-3d�ϱo�ƪ����  
        }
        printf("\n");
    }
}
//�o���\�ҧ�ı�o�������O�]�wgithub�]���o�O�s���F����O�]�n�b�i�H�������D�o�ӫܦh���{���F�`���H�b�Ϊ��{��
//�o���\�ҧڤ]��j�馳��[�`�J���F�Ѥר�O�b�j�餤�T�{�A���O�_���A��o���ڪ�F�ܦh�ɶ�
//�o���\�ҧڪ�������O�]�ܦn�F�]���Ĥ@���������ɭԳ��]���X�����ڻݭn�@���ݩ��U�^��ݧڭ��̥X���F
 
