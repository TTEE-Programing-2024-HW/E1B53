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
        printf("�п�J4�ӼƦr���K�X:");
        scanf("%d", &n);
        if(n == password) {
            break;
        } else {
            a++;
            printf("�K�X���~�A�ѤU%d�����|\n", 3 - a);
        }
    }
    if(a == 3) {
        printf("���~���ƶW�L3���A�{�ǰh�X\n");
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
    printf("�п�J�ǥͤH�ơ]5~10�^�G");
    while (scanf("%d", n) != 1 || *n < MIN_STUDENTS || *n > MAX_STUDENTS) {
        printf("��J���~�A�п�J5��10��������ơG");
        while (getchar() != '\n');
    }
    int i; 
    for (i = 0; i < *n; i++) {
        printf("��J�� %d ��ǥͪ��m�W�G", i + 1);
        while (getchar() != '\n');
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("��J�� %d ��ǥͪ��Ǹ��]6���ơ^�G", i + 1);
        while (scanf("%d", &students[i].id) != 1 || students[i].id < 100000 || students[i].id > 999999) {
            printf("��J���~�A�п�J6���ƾǸ��G");
            while (getchar() != '\n');
        }

        printf("��J�� %d ��ǥͪ��ƾǦ��Z�]0~100�^�G", i + 1);
        while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) {
            printf("��J���~�A�п�J0��100��������ơG");
            while (getchar() != '\n');
        }

        printf("��J�� %d ��ǥͪ����z���Z�]0~100�^�G", i + 1);
        while (scanf("%d", &students[i].physics) != 1 || students[i].physics < 0 || students[i].physics > 100) {
            printf("��J���~�A�п�J0��100��������ơG");
            while (getchar() != '\n');
        }

        printf("��J�� %d ��ǥͪ��^�妨�Z�]0~100�^�G", i + 1);
        while (scanf("%d", &students[i].english) != 1 || students[i].english < 0 || students[i].english > 100) {
            printf("��J���~�A�п�J0��100��������ơG");
            while (getchar() != '\n');
        }

        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0;
    }
}
void display_students(Student students[], int n)
{
    clear_screen();
    printf("�ǥͦ��Z�C��G\n");
    int i; 
    for (i = 0; i < n; i++) {
        printf("�m�W: %s\n�Ǹ�: %d\n�ƾ�: %d\n���z: %d\n�^��: %d\n�������Z: %.1f\n\n",
               students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, students[i].average);
    }
    printf("�����N���^�D���...");
    getchar();
    getchar();
}
void search_student(Student students[], int n) {
    char search_name[50];
    int found = 0;
    clear_screen();
    printf("�п�J�n�j�M���m�W�G");
    while (getchar() != '\n');
    fgets(search_name, sizeof(search_name), stdin);
    search_name[strcspn(search_name, "\n")] = 0;
	int i; 
    for (i = 0; i < n; i++) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("�m�W: %s\n�Ǹ�: %d\n�ƾ�: %d\n���z: %d\n�^��: %d\n�������Z: %.1f\n",
                   students[i].name, students[i].id, students[i].math, students[i].physics, students[i].english, students[i].average);
            found = 1;
            break;
        }
    }

    if (!found) printf("��Ƥ��s�b�C\n");

    printf("�����N���^�D���...");
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
        printf("��Ja-d���");
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
			
				
    }
    return 0;
}
}


	
	
	
	
	
	
	
	
	
	
	
	
	
 
