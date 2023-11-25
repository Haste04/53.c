/* RAW CODE /*
#include<stdio.h>

void userInput(int* score1, int* score2, int* score3);
char gradeCalculation(int score1, int score2, int score3);
void gradeOuput(char grade);

int main()
{
    int testScore1, testScore2, testScore3;
    char averageGrade;
    userInput(&testScore1, &testScore2, &testScore3);
    averageGrade = gradeCalculation(testScore1, testScore2, testScore3);
    gradeOuput(averageGrade);
    return 0;
}
void userInput(int* score1, int* score2, int* score3)
{
    printf("Please Enter your 1st test score (between 0-100): ");
    scanf("%d", score1);
    printf("\nPlease Enter your 2nd test score (between 0-100): ");
    scanf("%d", score2);
    printf("\nPlease Enter your 3rd test score (between 0-100): ");
    scanf("%d", score3);
    return;
}
char gradeCalculation(int score1, int score2, int score3)
{
    int average;
    char grade;

    average = (score1 + score2 + score3) / 3;

    
    if (average >= 90) {
        grade = 'A';
    }
    else {
        if (average >= 70){
            if (score3 > 90){
                grade = 'A';
            }
            else{
                grade = 'B';
            }
        }
        else{
            if (average >= 50){
                if (((score2 + score3) / 2 > 70)){
                    grade = 'C';
                }
                else{
                    grade = 'D';
                }
            }
            else{
                grade = 'F';
            }
        }
    }
    return grade;
}
void gradeOuput(char grade)
{
    printf("\nYour grade is %c", grade);
    return;
}
