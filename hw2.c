#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 
int main()
{
//1.�b�ù��W�X�{�ӤH���檺�e��(�ܤ�20��)�C�ϥΪ̫����M���ù��i�J�B�J2.//
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
	
	system("pause");//�e���Ȱ����ݨϥΪ̫����N��
	system("cls");//�M���e��

//2
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
	system("pause");//�e���Ȱ����ݨϥΪ̫����N��
	system("cls");//�M���e��
//3
	puts("///////////////////////////////////////");
	puts("/   E                        E        /");
	puts("/    1    a=�e�X�����T����    1       /");
	puts("/     B   b=��ܭ��k��         B      /");
	puts("/      5  c=����                5     /");
	puts("/       3                        3    /");
	puts("///////////////////////////////////////");
//4	
	char ch,tri;
	int n1,num;
	printf("�п�J�@�Ӧr���ba��c����:\n");
    scanf(" %c", &ch);
		getchar();
	switch (ch){
    	case 'A':
    	case 'a':	
			system("cls");
       		printf("�п�J�@��(a-n)���r��:");
       		scanf("%c",&tri);
			while (tri<'a'||tri>'n')
       		{
       			printf("���~�A��J�r�����b'a'��'n'�϶�\n");
       			printf("�Э��s��J�@��(a-n)���r��:");
       			scanf("%c",&tri);
       			getchar();
       		}
       	Triangle(tri);
		break;
		case 'B':
    	case 'b':
     		system("cls");
                    int n1,num;
					printf("��J�@��1��9���������:n�G");
                    scanf("%d",&num);
                    getchar();
                    while(num<1||num>9)
					{
        			printf("���~�A�п�J1��9���������\n");
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
    printf("���k��G\n");         
    int i,j;
    for(i=1;i<=n1;++i) {
        for (j=1;j<=n1;++j) {
            printf("%d*%d =%-3d",i,j,i*j);   
        }
        printf("\n");
    }
}

	

