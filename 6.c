#include <stdio.h>

struct Salary {
    float basic, bonus, deduction;
};

struct Employee {
    int id;
    char name[30];
    struct Salary sal;
};

float netSalary(struct Salary s) {
    return s.basic + s.bonus - s.deduction;
}

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Pay: ");
    scanf("%f", &e.sal.basic);

    printf("Enter Bonus: ");
    scanf("%f", &e.sal.bonus);

    printf("Enter Deduction: ");
    scanf("%f", &e.sal.deduction);

    printf("\n--- Employee Salary Details ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Net Salary = %.2f\n", netSalary(e.sal));

    return 0;
}
