 #include <stdio.h>

int main() {
    char gender;
    float basic_salary, bonus = 0, total_salary;

 printf("calculate the salary of an employee based on 5% bonus for male and 10% for female.if salary of employee less than 10000 then 2% extra bonus\n");
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);


    if (gender == 'M' || gender == 'm') {
        bonus = basic_salary * 0.05;
    } else if (gender == 'F' || gender == 'f') {
        bonus = basic_salary * 0.10;
    } else {
        printf("Invalid gender entered.\n");
        return 1;
    }


    if (basic_salary < 10000) {
        bonus += basic_salary * 0.02;
    }


    total_salary = basic_salary + bonus;


    printf("Bonus: %.2f\n", bonus);
    printf("Total Salary: %.2f\n", total_salary);


}
