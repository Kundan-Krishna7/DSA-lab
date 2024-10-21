#include<stdio.h>
struct employess{
    char name[100];
    char gender[10];
    char designation[100];
    char department[100];
    float Basic_pay;
    float gross_pay;
};

void calculate_gross_pay(struct employess *emp){
    float HR =25*emp->Basic_pay;
    float DA =75*emp->Basic_pay;
    emp->gross_pay =emp->Basic_pay +HR +DA;
}
int main()
{int n,i;
printf("Enter the numbers of employees working in a company\n");
scanf("%d",&n);
struct  Employee employess[n];
for(i=0;i<n;i++){
    printf("Details of Employees %d\n",i+1);
    printf("Enter the name of employee\n");
    scanf("%c",employess[i].name);
    printf("Enter the gender of the employee\n");
    scanf("%c",employess[i].gender);
    printf("Enter the designation of employees\n");
    scanf("%c",employess[i].designation);
    printf("DEPARTMENT of employees");
    scanf("%c",employess[i].department);
    printf("Enter the basic pay of employees\n");
    scanf("%f",employess[i].basic_pay);
    printf("Enter the gross pay of employees\n");
    scanf("%f",employess[i].gross);
    calculate_gross_pay(&employee[i]);

    }
    printf("Details of employee:\n");
    for(i=0; i<n;i++){
        printf("Name: %s\n",employee[i].name);
        printf("Gender: %s\n",employee[i].gender);
        printf("Designation: %s\n",employee[i].designation);
        printf("Department: %s\n",employee[i].department);
        printf("Basic Pay: %.2f\n",employee[i].basic_pay);
        printf("Gross Pay: %.2f\n\n",employee[i].gross_pay);
    }
    return 0;
}
