#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    char subjects[6][25] = { "Chemistry", "C Programming", "Mathematics", "Environment", "Electrical & Electronics", "Machine Engineering" };

    char subjcode[6][7] = { "102", "102", "111", "107", "101", "101" };
    int midmarks[6], semmarks[6], i = 0;
    int MTotal = 0, count = 0;
    char name[30], fname[30], rollNo[10], college[50];
    printf("Enter your name: ");

    gets(name);
    printf("\nEnter your Father name: ");

    gets(fname);
    printf("\nEnter your Roll Number: ");

    gets(rollNo);
    printf("\nEnter your College name: ");
    gets(college);



    for (i = 0; i < 6; i++)
    {

        printf("\nEnter your midterm marks for %s: ", subjects + i);
        scanf_s("%d", &midmarks[i]);
        printf("Enter your semester marks for %s: ", subjects + i);
        scanf_s("%d", &semmarks[i]);
    }

    printf("\n\n\n\n\t\t********************** YOUR RESULT *********************\n\n");
    printf("\t\tCOLLEGE: %s", college);
    printf("\n\t\tNAME: %s\t\tFATHER NAME: %s", name, fname);
    printf("\n\t\tROLL NUMBER: %s", rollNo);
    printf("\n\t\tSUBJECTS \t Marks1 \t Marks2 \t TOTAL");

    for (i = 0; i < 6; i++)
    {
        printf("\n\t");
        printf("\t%s \t\t %d \t\t %d \t\t %d", subjcode[i], midmarks[i], semmarks[i], midmarks[i] + semmarks[i]);

        MTotal = MTotal + midmarks[i] + semmarks[i];
        if (midmarks[i] + semmarks[i] < 44)
            count = count + 1;
    }

    if (count == 0)
        printf("\n\n\t\tTOTAL MARKS: %d \t\tRESULT: PASS", MTotal);
    else
        printf("\n\n\t\tTOTAL MARKS: %d \t\tRESULT: FAIL", MTotal);
    return 0;
}
































//#include<stdio.h> 
//#include<conio.h> 
//int k = 0;
//struct stud
//{
//    int rollNo;
//    char studentName[30];
//    int marks_1, marks_2, marks_3, total;
//    float avg;
//    char grade, result;
//}s[30];
//void main()
//{
//    int no, roll = 101, i;
//    system("cls");
//    printf("Enter No of Students : ");
//    scanf_s_s("%d", &no);
//    for (i = 0; i < no; i++)
//    {
//        system("cls");
//        s[k].rollNo = roll;
//        printf("\nEnter the Student Roll Number : %d ", s[k].rollNo);
//        printf("\nEnter the Student studentName :");
//        fflush(stdin);
//        gets(s[k].studentName);
//        printf("\nEnter the Three Marks : ");
//        scanf_s_s("%d", &s[k].marks_1);
//        scanf_s_s("%d", &s[k].marks_2);
//        scanf_s_s("%d", &s[k].marks_3);
//        if (s[k].marks_1 >= 35 && s[k].marks_2 >= 35 && s[k].marks_3 >= 35)
//        {
//            s[k].result = 'P';
//        }
//        else
//        {
//            s[k].result = 'F';
//        }
//        s[k].total = s[k].marks_1 + s[k].marks_2 + s[k].marks_3;
//        printf("The Total is : %d", s[k].total);
//        s[k].avg = s[k].total / 3;
//        if (s[k].avg >= 60)
//        {
//            if (s[k].result == 'P')
//            {
//                s[k].grade = 'A';
//            }
//            else
//            {
//                s[k].grade = 'N';
//            }
//        }
//        else if (s[k].avg >= 50)
//        {
//            if (s[k].result == 'P')
//            {
//                s[k].grade = 'B';
//            }
//            else
//            {
//                s[k].grade = 'N';
//            }
//        }
//        else if (s[k].avg >= 35)
//        {
//            if (s[k].result == 'P')
//            {
//                s[k].grade = 'C';
//            }
//            else
//            {
//                s[k].grade = 'N';
//            }
//        }
//        _getch();
//        k++;
//        roll++;
//    }
//    printf("\n*******************************************************");
//    printf("\n                      STUDENT MARKLIST ");
//    printf("\n*******************************************************");
//    printf("\nROLL NO \tName   MARK1 MARK2 MARK3 TOTAL RESULT Average GRADE");
//    for (i = 0; i < no; i++)
//    {
//        printf("\n%d\t%s   %d    %d    %d    %d    %c    %0.1f     %c", s[i].rollNo, s[i].studentName, s[i].marks_1, s[i].marks_2, s[i].marks_3, s[i].total, s[i].result, s[i].avg, s[i].grade);
//    }
//    _getch();
//}