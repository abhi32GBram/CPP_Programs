#include<stdio.h>
void mainmain() {
    int roll[10];
    int phy[10];
    int chem[10];
    int math[10];
    int total[10];
    int i;
    int n;
    int ab = 0, pr = 0, abs = 0, pres = 0, abmath = 0, presmath = 0;
    int netpres;
    int netabs;
    float percentage;
    int totals = 300;
    printf("===================================================================================\n");
    printf("                                    Result data entry                              ");

    printf("  \n ");
    printf("Enter the Number of student's whose data you want to enter : ");
    scanf_s("%d", &n);
    printf("Enter Student Roll number\n");
    for (i = 1; i <= n; i++) {
        scanf_s("%d", &roll[i]);
    }
    printf("Enter Physics marks\n");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d\n", &phy[i]);
    }
    printf("Enter Chemistry marks\n");
    for (i = 0; i < n; i++) {
        scanf_s("%d\n", &chem[i]);
    }
    printf("Enter Maths marks");
    for (i = 0; i < n; i++) {
        scanf_s("%d\n", &math[i]);
    }

    printf("------------------------------------------------------------------------\n");
    printf(" Result Display \n");
    printf("\n");


    printf("Sr.Number");
    for (i = 1; i <= n; i++) {
        i = i++;
        printf("\t %d", i);
    }

    printf("\nRoll Number");
    for (i = 0; i < n; i++) {
        printf("\t %d", roll[i]);
    }
    printf("\nPhysics \t");
    for (i = 0; i < n; i++) {
        printf("%d", phy[i]);
        if (phy[i] == -1) {
            printf("(A)\t");
            ab++;
        }
        else {
            printf("(P)\t");
            pr++;
        }
    }
    printf("\t\nChemistry \t");
    for (i = 0; i < n; i++) {
        printf("%d", chem[i]);
        if (chem[i] == -1) {
            printf(" (A)\t");
            abs++;

        }
        else {
            printf(" (P)\t");
            pres++;
        }
    }
    printf("\t\nMathematics \t");
    for (i = 0; i < n; i++) {
        printf("%d", math[i]);
        if (math[i] == -1) {
            printf(" (A)\t");
            abmath++;

        }
        else {
            printf(" (P)\t");
            presmath++;
        }

    }
    printf("\t\nTotal marks\t");
    for (i = 0; i < n; i++) {
        total[i] = phy[i] + chem[i] + math[i];
        printf("%d \t", total[i]);
    }
    printf("\t\n average\t");
    for (i = 0; i < n; i++) {
        total[i] = (total[i] / 3.0);
        printf("%d \t", total[i]);
    }
    printf("\nGrade       \t");
    for (i = 0; i < n; i++)
    {
        if (total[i] > 40) {
            printf(" Pass\t");
        }
        else {
            printf(" Fail\t");
        }

    }
    printf("   \n");
    printf("===============================================================\n");
    netpres = pr + pres + presmath;
    netabs = ab + abs + abmath;
    printf("Attendence Summary\n");
    printf("\n");
    printf("\t P ");
    printf("\t A \n");

    printf("\t %d ", pr);
    printf("\t %d ", ab);
    printf("Physics\n");

    printf("\t %d ", pres);
    printf("\t %d ", abs);
    printf("Chem \n");

    printf("\t %d ", presmath);
    printf("\t %d ", abmath);
    printf("Maths \n");

    printf("\t %d ", netpres);
    printf("\t %d ", netabs);
    printf("Total \n ");

    return 0;
}   