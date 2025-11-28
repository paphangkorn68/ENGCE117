#include <stdio.h>

typedef struct employee {
    int id ;
    int bonus ; 
    int income ;
    int salary ;
} s;

int calculat(s employee);

int main() {
    int ttincome , n = 0 ;
    s epy[2] ;

    while( scanf("%d %d %d", &epy[n].id, &epy[n].salary, &epy[n].bonus) != 3 ) {
        printf("number pls\n");
    }

    epy[n].income = epy[n].salary + epy[n].bonus ;

    ttincome = calculat(epy[n]);

    printf("---salary report---\n");
    printf("ID: %d\n", epy[n].id);
    printf("Gross Salary: %d\n", epy[n].salary);
    printf("Bonus: %d\n", epy[n].bonus);
    printf("Total income: %d\n", epy[n].income);
    printf("Net Salary: %d\n", ttincome);

    return 0;
}

int calculat(s employee) {
    float tax ;
    int num ;

    if (employee.income > 30000) {
        
        tax = 0.1;
    } else {
        tax = 0.05;
    }
    num = (employee.income * tax);
    employee.income = employee.income - num ;
    return employee.income;
}