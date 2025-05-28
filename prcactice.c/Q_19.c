// 19 . Create a structure employee, which consists emp_name, emp_id and Salary. Accept the information 5 employess  and display employees name whose Salary  is between 15000 to 20000

#include <stdio.h>

struct employee{
    char emp_name[100];
    int emp_id;
    float salary;
};

int main(){
    struct employee emp[5];
    int i;
    for(i=0; i<5; i++){
        printf("Enter the name of employee %d: ", i+1);
        gets(emp[i].emp_name);
        printf("Enter the id of employee %d: ", i+1);
        scanf("%d", &emp[i].emp_id);
        printf("Enter the salary of employee %d: ", i+1);
        scanf("%f", &emp[i].salary);
    }

    for(i=0; i<5; i++){
        if(emp[i].salary >= 15000 && emp[i].salary <= 20000){
            printf("Employee name: %s\n", emp[i].emp_name);
        }
    }
    return 0;
}
