#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <colour.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAXCHAR 1000
int main()
{
    FILE * imgoingtodocalculus;
    imgoingtodocalculus = fopen("students.txt","w+"); //





    FILE *fp;
    char str[MAXCHAR];
    char* filename = "./Experience a Day 2019.csv";
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

int nopick = 0;
int choice[6] ={0,0,0,0,0,0};
     if (studentNumber >= 2)
     {



        char s1[]="Drama";
         if(strcmp(s1,student[studentNumber].Choice1)==0)
         {
             choice[0]=1;
         }
        char s2[]="Art";
         if(strcmp(s2,student[studentNumber].Choice1)==0)
         {
             choice[0]=2;
         }
         char s3[]="Family Studies";
         if(strcmp(s3,student[studentNumber].Choice1)==0)
         {
             choice[0]=3;
         }
         char s4[]="Design and Technology";
         if(strcmp(s4,student[studentNumber].Choice1)==0)
         {
             choice[0]=4;
         }
         char s5[]="Music/Vocals";
         if(strcmp(s5,student[studentNumber].Choice1)==0)
         {
             choice[0]=5;
         }
         char s6[]="Computer Applications";
         if(strcmp(s6,student[studentNumber].Choice1)==0)
         {
             choice[0]=6;
         }
         char s7[]= "\0";
         if(strcmp(s7,student[studentNumber].Choice1)==0)
        {
            nopick = nopick + 1;
        }

         if(strcmp(s1,student[studentNumber].Choice2)==0)
         {
             choice[1]=1;
         }
         if(strcmp(s2,student[studentNumber].Choice2)==0)
         {
             choice[1]=2;
         }
         if(strcmp(s3,student[studentNumber].Choice2)==0)
         {
             choice[1]=3;
         }
         if(strcmp(s4,student[studentNumber].Choice2)==0)
         {
             choice[1]=4;
         }
         if(strcmp(s5,student[studentNumber].Choice2)==0)
         {
             choice[1]=5;
         }
         if(strcmp(s6,student[studentNumber].Choice2)==0)
         {
             choice[1]=6;
         }
         if(strcmp(s7,student[studentNumber].Choice2)==0)
        {
            nopick = nopick + 1;
        }


        if(strcmp(s1,student[studentNumber].Choice3)==0)
         {
             choice[2]=1;
         }
         if(strcmp(s2,student[studentNumber].Choice3)==0)
         {
            choice[2]=2;
         }
         if(strcmp(s3,student[studentNumber].Choice3)==0)
         {
             choice[2]=3;
         }
         if(strcmp(s4,student[studentNumber].Choice3)==0)
         {
             choice[2]=4;
         }
         if(strcmp(s5,student[studentNumber].Choice3)==0)
         {
             choice[2]=5;
         }
         if(strcmp(s6,student[studentNumber].Choice3)==0)
         {
             choice[2]=6;
         }
         if(strcmp(s7,student[studentNumber].Choice3)==0)
        {
            nopick = nopick + 1;
        }


         if(strcmp(s1,student[studentNumber].Choice4)==0)
         {
             choice[3]=1;
         }
         if(strcmp(s2,student[studentNumber].Choice4)==0)
         {
             choice[3]=2;
         }
         if(strcmp(s3,student[studentNumber].Choice4)==0)
         {
             choice[3]=3;
         }
         if(strcmp(s4,student[studentNumber].Choice4)==0)
         {
             choice[3]=4;
         }
         if(strcmp(s5,student[studentNumber].Choice4)==0)
         {
             choice[3]=5;
         }
         if(strcmp(s6,student[studentNumber].Choice4)==0)
         {
             choice[3]=6;
         }
         if(strcmp(s7,student[studentNumber].Choice4)==0)
        {
            nopick = nopick + 1;
        }



         if(strcmp(s1,student[studentNumber].Choice5)==0)
         {
             choice[4]=1;
         }
         if(strcmp(s2,student[studentNumber].Choice5)==0)
         {
             choice[4]=2;
         }
         if(strcmp(s3,student[studentNumber].Choice5)==0)
         {
             choice[4]=3;
         }
         if(strcmp(s4,student[studentNumber].Choice5)==0)
         {
             choice[4]=4;
         }
         if(strcmp(s5,student[studentNumber].Choice5)==0)
         {
             choice[4]=5;
         }
         if(strcmp(s6,student[studentNumber].Choice5)==0)
         {
             choice[4]=6;
         }
         if(strcmp(s7,student[studentNumber].Choice5)==0)
        {
            nopick = nopick + 1;
        }
         if(strcmp(s1,student[studentNumber].Choice6)==0)
         {
             choice[5]=1;
         }
         if(strcmp(s2,student[studentNumber].Choice6)==0)
         {
             choice[5]=2;
         }
         if(strcmp(s3,student[studentNumber].Choice6)==0)
         {
             choice[5]=3;
         }
         if(strcmp(s4,student[studentNumber].Choice6)==0)
         {
             choice[5]=4;
         }
         if(strcmp(s5,student[studentNumber].Choice6)==0)
         {
             choice[5]=5;
         }
         if(strcmp(s6,student[studentNumber].Choice6)==0)
         {
             choice[5]=6;
         }
         if(strcmp(s7,student[studentNumber].Choice6)==0)
        {
            nopick = nopick + 1;
        }
printf("%d",nopick);

        if (nopick >= 1)
        {
            for (int lol = 1; lol <= nopick; lol++ )
            {
                for (int order = 0; order <= 5; order ++)
                {
                    if (choice[order] == 0 && order < 5)
                    {
                    choice[order] = choice[(order + 1)];
                    choice[order + 1] = 0;
                    printf("\t\t\t%d %d %d %d %d %d %d \n\n\n\n", studentNumber, choice[0],choice[1],choice[2],choice[3],choice[4],choice[5]);
                    }


                }
            }













    int lower = 1, upper = 6, count = 1;
    srand(time(0));


  for (int filler = 1; filler <= nopick;filler++)
  {
  int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %
           (upper - lower + 1)) + lower;
        printf("%d ", num);

    for(int place = 0; place <= 5; place ++)
                  {


                      if (choice[0] == 0)
                      {
                          choice[place] = num;
                          num = 0;
                          place = 0;

                      }
                      if ( choice[place] == num)
                      {

                          num =0;


                      }
                      if (choice[5]== 0)
                      {
                          count= count + 1;
                      }
                      if (choice[place] == 0)
                      {
                          choice[place]=num;

                          num = 0;


                      }


                  }}



}



        }
printf("\n\t\t\t%d %d %d %d %d %d %d \n\n\n\n", studentNumber, choice[0],choice[1],choice[2],choice[3],choice[4],choice[5]);

fprintf(imgoingtodocalculus,"%d %d %d %d %d %d %d \n", studentNumber, choice[0],choice[1],choice[2],choice[3],choice[4],choice[5]);


     }
        n = 0;
        studentNumber++;
        CommaAmount = 0;
     //   printf("n value %d \nCommas: %d \nPosition: %d \n Character Value @ n: %c\nFirst Name: %s\nLast Name: %s\n School: %s \nStudent Number: %d\n", n, CommaAmount, position, str[n], student[studentNumber].NameFirst, student[studentNumber].NameLast, student[studentNumber].School, studentNumber);



    }

    fclose(fp);
    fclose(imgoingtodocalculus);
 base();

    return 0;
}
