#include <stdio.h>

int main(void) {
  printf("Please enter a user name and three exam scores separated by commas for user 1: \n");
  char student_name1[10];
  double score1;
  double score2;
  double score3;

  scanf("%s %lf, %lf, %lf", student_name1, &score1, &score2, &score3);
 
  printf("Please enter a user name and three exam scores separated by commas for user 2: \n");
  char student_name2[10];
  double score4;
  double score5;
  double score6;

  scanf("%s %lf, %lf, %lf", student_name2, &score4, &score5, &score6);
  
  printf("Please enter a user name and three exam scores separated by commas for user 3: \n");
  char student_name3[10];
  double score7;
  double score8;
  double score9;

  scanf("%s %lf, %lf, %lf", student_name3, &score7, &score8, &score9);

  printf("\n");
  printf("%-10s", "Name");
  printf("%8s", "Exam 1");
  printf("%8s", "Exam 2");
  printf("%8s", "Exam 3");
  printf("%8s", "Average \n");

  double average1;
  double average2;
  double average3;
  average1 = (score1 + score2 + score3) / 3;
  average2 = (score4 + score5 + score6) / 3;
  average3 = (score7 + score8 + score9) / 3;

  printf("%-10s", student_name1);
  printf("%8.2lf", score1);
  printf("%8.2lf", score2);
  printf("%8.2lf", score3);
  printf("%7.1lf%%", average1);
  printf("\n");

  printf("%-10s", student_name2);
  printf("%8.2lf", score4);
  printf("%8.2lf", score5);
  printf("%8.2lf", score6);
  printf("%7.1lf%%", average2);
  printf("\n");

  printf("%-10s", student_name3);
  printf("%8.2lf", score7);
  printf("%8.2lf", score8);
  printf("%8.2lf", score9);
  printf("%7.1lf%%", average3);
}
