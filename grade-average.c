#include <stdio.h>

#define PROGWEIGHT .60
#define QUIZWEIGHT .10
#define EXAMWEIGHT .30

double progAvg;
double quizAvg;
double examAvg;

double getProgramGrade(){
  double progGrades[9];
  double currentProgs;
  int entry;
  double grade;
  double progSum;

  printf("How many programs have been graded? \n");
  scanf("%lf", &currentProgs);
  printf("\n");
  printf("Enter %.0lf program grades: \n", currentProgs);
  

  for(entry = 0; entry < currentProgs; entry++){
    printf("Program %d: ", entry+1);
    scanf("%lf", &grade);
    progGrades[entry] = grade;
    progSum += grade;
    }
  
  progAvg = progSum / currentProgs;
  
return 0;}

double getQuizGrade(){
  double quizGrades[8];
  double currentQuizzes;
  int entry;
  double grade;
  double quizSum;

  printf("\n");
  printf("How many quizzes have been graded? \n");
  scanf("%lf", &currentQuizzes);
  printf("\n");
  printf("Enter %.0lf quiz grades: \n", currentQuizzes);
  
  for(entry = 0; entry < currentQuizzes; entry++){
    printf("Quiz %d: ", entry+1);
    scanf("%lf", &grade);
    quizGrades[entry] = grade;
    quizSum += grade;
  }

  quizAvg = quizSum / currentQuizzes;

return 0;}

double getExamGrade(){
  double examGrades[2];
  double currentExams;
  int entry;
  double grade;
  double examSum;

  printf("\n");
  printf("How many exams have been graded? \n");
  scanf("%lf", &currentExams);
  printf("\n");
  printf("Enter %.0lf exam grades: \n", currentExams);

  for(entry = 0; entry < currentExams; entry++){
    printf("Exam %d: ", entry+1);
    scanf("%lf", &grade);
    examGrades[entry] = grade;
    examSum += grade;
  }

  examAvg = examSum / currentExams;
  return 0;}

int main() {
  getProgramGrade();
  getQuizGrade();
  getExamGrade();

  printf("\n");
  printf("---------");
  printf("\n");

  double finalAvg;
  finalAvg = ((progAvg*PROGWEIGHT) + (quizAvg*QUIZWEIGHT) + (examAvg*EXAMWEIGHT));

  printf("Your grades: \n");
  printf("Programs (60%%): ");
  printf("%10.2lf%% \n", progAvg);
  printf("Quizzes (10%%): ");
  printf("%10.2lf%% \n", quizAvg);
  printf("Exams (30%%): ");
  printf("%10.2lf%% \n", examAvg);
  printf("--------- \n");
  printf("Overall grade:");
  printf("%10.2lf%% \n", finalAvg);
  }
