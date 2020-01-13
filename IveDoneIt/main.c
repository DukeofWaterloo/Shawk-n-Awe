#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 1000
int main()
{
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "c:\\Users\\Nick\\Desktop\\Comp Sci 2019\\Projects\\Over Built and under Paid\\Operation Shaw-k\\Old Info\\ExperienceWDHS2019\\CSV\\Experience a Day 2019.csv";
    int n = 0;
    int lineTotal = 0;
    int CommaAmount = 0;
    int studentNumber = 0;
    int position = 0;

    fp = fopen(filename, "r");
    while (fgets(str, MAXCHAR, fp) != NULL){
        lineTotal++;
    }

    struct info{
        char NameFirst[50];
        char NameLast[50];
        char School[100];
        char Teacher[200];
        char Choice1[50];
        char Choice2[50];
        char Choice3[50];
        char Choice4[50];
        char Choice5[50];
        char Choice6[50];

    } student[lineTotal];

    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s", filename);
        return 1;
    }

    fp = fopen(filename, "r");
    while (fgets(str, MAXCHAR, fp) != NULL){

     /*   while (str[n] != '\n'){
            printf("\nCheck this value: %c", str[n]);
            n++;
            printf("\nThis is text one \n");
        }
        n = 0;
        printf("\nThis is text number two  -  %d\n", studentNumber);
*/
        while (str[n] != '\n'){
           // printf("n value %d \nCommas: %d \nPosition: %d \n Character Value @ n: %c\nFirst Name: %s\nLast Name: %s\n School: %s \nStudent Number: %d\n", n, CommaAmount, position, str[n], student[studentNumber].NameFirst, student[studentNumber].NameLast, student[studentNumber].School, studentNumber);
            if (str[n] == 44){
                CommaAmount++;
                position = -1;
            }

            if (CommaAmount == 9 && str[n] != 44){
                student[studentNumber].NameFirst[position] = str[n];
                student[studentNumber].NameFirst[position + 1] = 0;
              //  printf("Character: %c\n First Name: %s\n", str[n], student[studentNumber].NameFirst);
            }
            else if (CommaAmount == 10 && str[n] != 44){
                student[studentNumber].NameLast[position] = str[n];
                student[studentNumber].NameLast[position + 1] = 0;
              //  printf("Character: %c\n  Last Name: %s\n", str[n], student[studentNumber].NameLast);
            }
            else if (CommaAmount == 11 && str[n] != 44){
                student[studentNumber].School[position] = str[n];
                student[studentNumber].School[position + 1] = 0;
              //  printf("Character: %c\n   School: %s\n", str[n], student[studentNumber].School);
            }
            else if (CommaAmount == 13 && str[n] != 44){
                student[studentNumber].Teacher[position] = str[n];
                student[studentNumber].Teacher[position + 1] = 0;
              //  printf("Character: %c\n    Teacher: %s\n", str[n], student[studentNumber].Teacher);
            }
            else if (CommaAmount == 15 && str[n] != 44){
                student[studentNumber].Choice1[position] = str[n];
                student[studentNumber].Choice1[position + 1] = 0;
              //  printf("Character: %c\n      Choice One: %s\n", str[n], student[studentNumber].Choice1);
            }
            else if (CommaAmount == 16 && str[n] != 44){
                student[studentNumber].Choice2[position] = str[n];
                student[studentNumber].Choice2[position + 1] = 0;
              //  printf("Character: %c\n       Choice Two: %s\n", str[n], student[studentNumber].Choice2);
            }
            else if (CommaAmount == 17 && str[n] != 44){
                student[studentNumber].Choice3[position] = str[n];
                student[studentNumber].Choice3[position + 1] = 0;
              //  printf("Character: %c\n        Choice Three: %s\n", str[n], student[studentNumber].Choice3);
            }
            else if (CommaAmount == 18 && str[n] != 44){
                student[studentNumber].Choice4[position] = str[n];
                student[studentNumber].Choice4[position + 1] = 0;
              //  printf("Character: %c\n        Choice Four: %s\n", str[n], student[studentNumber].Choice4);
            }
            else if (CommaAmount == 19 && str[n] != 44){
                student[studentNumber].Choice5[position] = str[n];
                student[studentNumber].Choice5[position + 1] = 0;
              //  printf("Character: %c\n         Choice Five: %s\n", str[n], student[studentNumber].Choice5);
            }
            else if (CommaAmount == 20 && str[n] != 44){
                student[studentNumber].Choice6[position] = str[n];
                student[studentNumber].Choice6[position + 1] = 0;
              //  printf("Character: %c\n          Choice Six: %s\n", str[n], student[studentNumber].Choice6);
            }
            position++;
            n++;
        }
        printf("\nStudent %d:\n| Name: %s, %s \n| School: %s\n| Teacher: %s\n| Choice One: %s\n| Choice Two: %s\n| Choice Three: %s\n| Choice Four: %s\n| Choice Five: %s\n| Choice Six: %s", studentNumber, student[studentNumber].NameLast, student[studentNumber].NameFirst, student[studentNumber].School, student[studentNumber].Teacher, student[studentNumber].Choice1, student[studentNumber].Choice2, student[studentNumber].Choice3, student[studentNumber].Choice4, student[studentNumber].Choice5, student[studentNumber].Choice6);
        n = 0;
        studentNumber++;
        CommaAmount = 0;
     //   printf("n value %d \nCommas: %d \nPosition: %d \n Character Value @ n: %c\nFirst Name: %s\nLast Name: %s\n School: %s \nStudent Number: %d\n", n, CommaAmount, position, str[n], student[studentNumber].NameFirst, student[studentNumber].NameLast, student[studentNumber].School, studentNumber);
    }

    fclose(fp);
    return 0;
}
