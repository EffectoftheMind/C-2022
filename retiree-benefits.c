#include <stdio.h>

int print_benefits(int n) {
  int years;
  double salary1;
  double salary2;
  double salary3;
  
  printf("Enter retiree %d's years of service and 3 years highest salaries.\n", n);
  scanf("%d %lf %lf %lf", &years, &salary1, &salary2, &salary3);

  double benefits;
  benefits = (((((salary1+salary2+salary3)/3)*.02)*years)/12);

  printf("Retiree %d will recieve $%.2lf per month. \n", n, benefits);
}

int main(void) {
  int count;
  int stop;
  count = 0;
  printf("How many employees? ");
  scanf("%d", &stop);

  while (count != stop) {
    count++;
    print_benefits(count);
    }
}
