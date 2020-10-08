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

// Question No 2
void sort(int t)
{
    struct student *pstud, temp;
    int i;
    pstud = &arr[0];
    for (i = 0; i < t; i++)
    {
        for (pstud = &arr[0]; pstud < &arr[t - i - 1]; pstud++)
        {
            printf("\n%s\n", pstud->name.first_name);
            if (pstud->DOB.yy > (pstud + 1)->DOB.yy)
            {
                temp = *pstud;
                *pstud = *(pstud + 1);
                *(pstud + 1) = temp;
            }
        }
    }
}

int main()
{
    int i, t;
    t = 10;
    printf("Enter Details of 10 Students\n");
    for (i = 0; i < t; i++)
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

    for (i = 0; i < t; i++)
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

    printf("After Sorting ");
    sort(t);
    for (i = 0; i < t; i++)
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

    return 0;
}