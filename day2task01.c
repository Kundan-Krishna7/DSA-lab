#include <stdio.h>

struct Employee {
    char name[100];
    char gender[10];
    char designation[100];
    char department[100];
    float basic_pay;
    float gross_pay;
};

void calculate_gross_pay(struct Employee* emp) {
    float HR = 0.25 * emp->basic_pay;
    float DA = 0.75 * emp->basic_pay;
    emp->gross_pay = emp->basic_pay + HR + DA;
}

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %c", employees[i].name);  

        printf("Gender: \n");
        scanf(" %c", employees[i].gender);

        printf("Designation: \n");
        scanf(" %c", employees[i].designation); 

        printf("Department: \n");
        scanf(" %c", employees[i].department);  

        printf("Basic Pay: \n");
        scanf("%f", &employees[i].basic_pay);

       
        calculate_gross_pay(&employees[i]);
    }

    printf("\nEmployee Details:\n");
    for(i=0;i< n;i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Gender: %s\n", employees[i].gender);
        printf("Designation: %s\n", employees[i].designation);
        printf("Department: %s\n", employees[i].department);
        printf("Basic Pay: %.2f\n", employees[i].basic_pay);
        printf("Gross Pay: %.2f\n", employees[i].gross_pay);
    }

    return 0;
}