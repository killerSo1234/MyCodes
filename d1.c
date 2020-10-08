#include <stdio.h>
#include <stdlib.h>

struct NAME
{
    char first_name[20], middle_name[20], last_name[20];
};
struct DATE
{
    int dd, mm, yy;
};
struct student
{
    int roll_no;
    struct NAME name;
    char course[20];
    struct DATE DOB;
    float fees;
} arr[10];

void display(int t)
{
    int i;
    for (i = 0; i <=t; i++)
    {
        printf("\nRoll : %d", arr[i].roll_no);
        printf("\nFirst Name : %s", arr[i].name.first_name);
        printf("\nMiddle Name : %s", arr[i].name.middle_name);
        printf("\nLast Name : %s", arr[i].name.last_name);
        printf("\nCourse : %s", arr[i].course);
        printf("\nDOB date : %d", arr[i].DOB.dd);
        printf("\nDOB Month : %d", arr[i].DOB.mm);
        printf("\nDOB Year : %d", arr[i].DOB.yy);
        printf("\nFees : %f", arr[i].fees);
    }
}

void Insert(int i)
{
    printf("Enter Details of Student : %d\n", i + 1);
    printf("Enter roll\n");
    scanf("%d", &arr[i].roll_no);
    printf("Enter First name\n");
    scanf("%s", &arr[i].name.first_name);
    printf("Enter Middle name\n");
    scanf("%s", &arr[i].name.middle_name);
    printf("Enter Last name\n");
    scanf("%s", &arr[i].name.last_name);
    printf("Enter Course\n");
    scanf("%s", &arr[i].course);
    printf("Enter Date of Birth\n");
    scanf("%d", &arr[i].DOB.dd);
    printf("Enter Month of Birth\n");
    scanf("%d", &arr[i].DOB.mm);
    printf("Enter Year of Birth\n");
    scanf("%d", &arr[i].DOB.yy);
    printf("Enter Total Fees\n");
    scanf("%f", &arr[i].fees);
}

int main()
{
    int i, t = -1;
    printf("Enter \n1 for Insert\n2 for Display\n3 for Delete Last Student\n4 for Exit\n");
    int op, bool = 1;
    while (bool)
    {
        printf("Enter Option\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            if (t < 9)
            {
                t++;
                Insert(t);
            }
            else
            {
                printf("Already 10 Student present");
            }
            break;
        case 2:
            display(t);
            break;
        case 3:
            if (t < 0)
            {
                printf("No Student to delete");
            }
            else
            {
                printf("%d Roll No deleted\n", arr[t].roll_no);
                t--;
            }
            break;
        case 4:
            bool = 0;
            break;
        }
    }

    return 0;
}