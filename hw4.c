#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MIN_STUDENTS 5


typedef struct {
    char name[50];
    int id, math, physics, english;
    float average;
} Student;

void clear_screen()
{
    	system("pause");
        system("cls");
} 
void display_intro()
{
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
}
int password() {
     int a = 0, n, password = 2024;
    while(a < 3) {
        printf("請輸入4個數字的密碼:");
        scanf("%d", &n);
        if(n == password) {
            break;
        } else {
            a++;
            printf("密碼錯誤，剩下%d次機會\n", 3 - a);
        }
    }
    if(a == 3) {
        printf("錯誤次數超過3次，程序退出\n");
        return 0;
    }
}

void menu()
{
    puts("////////////////////////////////////////////");
    puts("/ E      a=Enter student grade      E      /");
    puts("/  1     b=Display student grade     1     /");
    puts("/   B    c=Search for student grade   B    /");
    puts("/    5   d=Grade ranking               5   /");
    puts("/     3  e=Exit system                  3  /");
    puts("////////////////////////////////////////////");
}

void input_students(Student students[], int *n) {
    printf("請輸入學生人數（5~10）：");
    while (scanf("%d", n) != 1 || *n < MIN_STUDENTS || *n > MAX_STUDENTS) {
        printf("輸入錯誤，請輸入5到10之間的整數：");
        while (getchar() != '\n');
    }
    int i; 
    for (i = 0; i < *n; i++) {
        printf("輸入第 %d 位學生的姓名：", i + 1);
        while (getchar() != '\n');
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("輸入第 %d 位學生的學號（6位整數）：", i + 1);
        while (scanf("%d", &students[i].id) != 1 || students[i].id < 100000 || students[i].id > 999999) {
            printf("輸入錯誤，請輸入6位整數學號：");
            while (getchar() != '\n');
        }

        printf("輸入第 %d 位學生的數學成績（0~100）：", i + 1);
        while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) {
            printf("輸入錯誤，請輸入0到100之間的整數：");
            while (getchar() != '\n');
        }

        printf("輸入第 %d 位學生的物理成績（0~100）：", i + 1);
        while (scanf("%d", &students[i].physics) != 1 || students[i].physics < 0 || students[i].physics > 100) {
            printf("輸入錯誤，請輸入0到100之間的整數：");
            while (getchar() != '\n');
        }

        printf("輸入第 %d 位學生的英文成績（0~100）：", i + 1);
        while (scanf("%d", &students[i].english) != 1 || students[i].english < 0 || students[i].english > 100) {
            printf("輸入錯誤，請輸入0到100之間的整數：");
            while (getchar() != '\n');
        }

        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0;
    }
}
void display_students(Student students[], int n)
{
    clear_screen();
    printf("學生成績列表：\n");
    int i; 
    for (i = 0; i < n; i++) {
        printf("姓名: %s\n學號: %d\n數學: %d\n物理: %d\n英文: %d\n平均成績: %.1f\n\n",
               students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, students[i].average);
    }
    printf("按任意鍵返回主選單...");
    getchar();
    getchar();
}
void search_student(Student students[], int n) {
    char search_name[50];
    int found = 0;
    clear_screen();
    printf("請輸入要搜尋的姓名：");
    while (getchar() != '\n');
    gets(search_name);
    search_name[strcspn(search_name, "\n")] = 0;
	int i; 
    for (i = 0; i < n; i++) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("姓名: %s\n學號: %d\n數學: %d\n物理: %d\n英文: %d\n平均成績: %.1f\n",
                   students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, students[i].average);
            found = 1;
            break;
        }
    }

    if (!found) printf("資料不存在。\n");

    printf("按任意鍵返回主選單...");
    getchar();
    getchar();
}
void grade_ranking(Student students[], int n) {
    clear_screen();
    int i,j; 
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("成績排名：\n");
    
    for (i = 0; i < n; i++) {
        printf("姓名: %s, 學號: %d, 平均成績: %.1f\n", students[i].name, students[i].id, students[i].average);
    }
    printf("按任意鍵返回主選單...");
    getchar();
    getchar();
}

int main()
{
    char choice;
    Student students[MAX_STUDENTS];
    int n = 0;

    display_intro();
    clear_screen();
    if (!password()) return 0;

    while (1) {
        clear_screen();
        menu();
        printf("輸入a-e選取");
        scanf(" %c", &choice);

        switch (choice) {
            case 'A':
			case 'a':
			 	clear_screen(); 
				input_students(students, &n); 
				break;
            case 'B':
			case 'b':
				display_students(students, n); 
				break;
			case 'C':
			case 'c':
			 	search_student(students, n); 
				break;
			case 'D':
			case 'd':	
				grade_ranking(students, n);
				break;
			case 'E':
			case 'e':
			{
				clear_screen();
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
                    printf("錯誤: 輸入字元不在 'a' 至 'c' 區間\n"); 
	}	
			
				
    }
    return 0;
}
}


	
	
	
	
	
	
	
	
	
	
	
	
	
 
