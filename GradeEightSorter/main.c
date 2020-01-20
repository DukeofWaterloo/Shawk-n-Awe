#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 1000
int main()
{
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

        int Ch1;
        int Ch2;
        int Ch3;
        int Ch4;

    } student[lineTotal];

    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s", filename);
        return 1;
    }

    fp = fopen(filename, "r");
    while (fgets(str, MAXCHAR, fp) != NULL){
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
    ///Working Space


    ///Variables Used to track First Choice Picks
    int Art = 0;
    int Design = 0;
    int Computers = 0;
    int Drama = 0;
    int Family = 0;
    int Vocals = 0;
    ///Used to Sort From Lowest to highest classes Chosen
    int tempV;
    int V1,V2,V3,V4,V5,V6;

    ///Arrays That Keep Class sizes
    int Guidance[3] = {0,0,0,0};
    int Tech[3] = {0,0,0,0};
    int FamilyA[3] = {0,0,0,0};
    int ComputersA[3] = {0,0,0,0};
    int ArtA[3]={0,0,0,0};
    int DramaA[3]={0,0,0,0};
    int VocalsA[3] = {0,0,0,0};

    int CS1 = 25;
    int CS2 = 25;
    int CS3 = 25;
    int CS4 = 25;
    int CS5 = 25;
    int CS6 = 25;





for(int temp = 2;temp<205;temp++){
    printf("\n Name: %s, C1 = %s",student[temp].NameFirst,student[temp].Choice1);
    if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==295)Art++;
    else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==284)Design++;
    else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==287)Computers++;
    else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==279)Drama++;
    else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==276)Family++;
    else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==309)Vocals++;
/*
This For Loop Runs Through else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==287)Each student and takes the Accumulated ASCII Amount of the first
3 letters of a class( A + R + T = 295) and increases the Counter for how many people chose
it as their first Option
*/
}
printf("\n%d Art Choices as first", Art);
V1 = Art;
printf("\n%d Design & Tech Choices as first",Design);
V2 = Design;
printf("\n%d Computer Applications Choices as first", Computers);
V3 = Computers;
printf("\n%d Drama Choices as first", Drama);
V4 = Drama;
printf("\n%d Family Studies Choices as first", Family);
V5 = Family;
printf("\n%d Vocals Choices as first", Vocals);
V6 = Vocals;


for(int bubbleSorter = 1;bubbleSorter < 6;bubbleSorter++){
   if(V1<V2){
    tempV = V1;
    V1 = V2;
    V2 = tempV;
   }
   if(V2<V3){
    tempV = V2;
    V2 = V3;
    V3 = tempV;
   }
   if(V3<V4){
    tempV = V3;
    V3 = V4;
    V4 = tempV;
   }
    if(V4<V5){
        tempV = V4;
        V4 = V5;
        V5 = tempV;
    }
    if(V5<V6){
        tempV = V5;
        V5 = V6;
        V6 = tempV;
    }
}//Sorter loop closes
/*^^^^^^^^^^^^^^^^^^^^
Bubble sorter like we learned in class. All it does is arrange the First Choices to be in greatest -> smallest
(Only Problem with this is it looses track of which class is which by doing it)
^^^^^^^^^^^^^^^^^^^^^^^^^*/

printf("\n%d,%d,%d,%d,%d,%d",V1,V2,V3,V4,V5,V6);//Displays Choices Highest -> Lowest

/*
This Next Big Chunk of code Checks a students First Choice(Still by ASCII which isn't the most convenient)
And Puts them into a class (After checking if its full or not) if the class is full, it moves down to the next period
and so on.
*/

for(int temp = 2;temp<205;temp++){
if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==279){
student[temp].Ch1 = 6;
DramaA[0] = DramaA[0] + 1;
student[temp].Ch4 = 999;
}///Drama

else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==309){
student[temp].Ch1 = 5;
VocalsA[0] = VocalsA[0] + 1;
student[temp].Ch4 = 999;
}///Vocals

else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==284){
if(Tech[3]<CS1){
    student[temp].Ch4 = 1;
    Tech[3] = Tech[3] + 1;
}
else{
    if(Tech[2]<CS1){
        student[temp].Ch3 = 1;
        Tech[2] = Tech[2] + 1;
    }
    else{
        if(Tech[1]<CS1){
            student[temp].Ch2 = 1;
            Tech[1] = Tech[1] + 1;
        }
        else{
            if(Tech[0] <CS1){
                student[temp].Ch1 = 1;
                Tech[0] = Tech[0] + 1;
            }
            else student[temp].Ch4 = 20;///This Line is to See if Tech Overflows
        }
    }
}

}///Tech as First Choice

else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==276){
        if(FamilyA[0]<CS2){
            student[temp].Ch4 = 2;
            FamilyA[0] = FamilyA[0] + 1;
        }
        else{
            if(FamilyA[1]<CS2){
                student[temp].Ch3 = 2;
                FamilyA[1] = FamilyA[1] + 1;
            }
            else{
                if(FamilyA[2]<CS2){
                    student[temp].Ch2 = 2;
                    FamilyA[2] = FamilyA[2] + 1;
                }
                else student[temp].Ch1 = 888;
            }
        }
}///Closes Family Studies(Second Highest)

else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==287){
 if(ComputersA[0]<CS3){
    student[temp].Ch1 = 3;
    ComputersA[0] = ComputersA[0] + 1;
 }
 else{
    if(ComputersA[0]<CS3){
        student[temp].Ch2 = 3;
        ComputersA[1] = ComputersA[1] + 1;
    }
 }


}///Closes Computers (3rd highest)

else if(student[temp].Choice1[0]+student[temp].Choice1[1]+student[temp].Choice1[2]==295){
if(ArtA[0]<CS4){
   student[temp].Ch4 = 4;
    ArtA[0] = ArtA[0] + 1;
}
else {
    if(ArtA[1]<CS4){
        student[temp].Ch3 = 4;
        ArtA[1] = ArtA[1] + 1;
    }
}
}///Closes Art(4th Highest)


/*

        ~~FIRST CHOICE BIG SORTER ENDS~~
*/
}///For Loop Closes


///Second Choice
printf("\nTECH 3 = %d",Tech[3]);
for(int Second = 0;Second<205;Second++){
if(student[Second].Choice2[0]+student[Second].Choice2[1]+student[Second].Choice2[2]==284){
    if(student[Second].Ch1==0&&Tech[0]<CS1){
        student[Second].Ch1 = 1;
        Tech[0] = Tech[0] + 1;
    }
else if(student[Second].Ch2==0&&Tech[1]<25){
if(student[Second].Ch2==0&&Tech[2]<CS1){
  student[Second].Ch2 = 12;
  Tech[2] = Tech[2] + 1;
    }
}
else if(student[Second].Ch3==0&&Tech[2]<CS1){
    student[Second].Ch3 = 1;
    Tech[1] = Tech[1] +1;
}
else if(student[Second].Ch4==0&&Tech[3]<CS1){
    printf("!Fourth Period!");
    student[Second].Ch4 = 1;
    Tech[3]= Tech[3] + 1;
}
else{

}
} ///If Statement for Second Choice Tech

else if(student[Second].Choice2[0]+student[Second].Choice2[1]+student[Second].Choice2[2]==276){
if(student[Second].Ch1==0&&FamilyA[3]<CS2){
student[Second].Ch1 = 2;
FamilyA[3] = FamilyA[3] + 1;
}
else if(student[Second].Ch2==0&&FamilyA[2]<CS2){
student[Second].Ch2 = 2;
FamilyA[3] = FamilyA[3] + 1;
}
else if(student[Second].Ch2==0&&FamilyA[1]<CS2){
student[Second].Ch3 = 2;
FamilyA[1] = FamilyA[1] + 1;
}
}///If Statement Closes For Second Choice Family Studies

else if(student[Second].Choice2[0]+student[Second].Choice2[1]+student[Second].Choice2[2]==287){
if(student[Second].Ch2==0&&ComputersA[1]<CS4){
    student[Second].Ch2 = 3;
    ComputersA[1] = ComputersA[1] + 1;
}
else if(student[Second].Ch3==0&&ComputersA[2]<CS4){
    student[Second].Ch3 = 3;
    ComputersA[2] = ComputersA[2] + 1;
}
else if(student[Second].Ch4==0&&ComputersA[3]<CS4){
    student[Second].Ch4 = 3;
    ComputersA[3] = ComputersA[3] + 1;
}
}///Closes Computer Applications for your Second Choice

else if(student[Second].Choice2[0]+student[Second].Choice2[1]+student[Second].Choice2[2]==295){
 if(student[Second].Ch4==0&&ArtA[0]<CS4){
    student[Second].Ch4 = 4;
    ArtA[0] = ArtA[0] + 1;
 }
else if(student[Second].Ch3==0&&ArtA[1]<CS4){
student[Second].Ch3 = 4;
ArtA[1] = ArtA[1] + 1;
}
else if(student[Second].Ch2==0&&ArtA[2]<CS4){
student[Second].Ch2 = 4;
ArtA[2] = ArtA[2] + 1;
}
else if(student[Second].Ch1==0&&ArtA[3]<CS4){
student[Second].Ch1 = 4;
ArtA[3] = ArtA[3] + 1;
}

}///Closes Art for your Second Choice

else if(student[Second].Choice2[0]+student[Second].Choice2[1]+student[Second].Choice2[2]==309){
 if(student[Second].Ch1==0&&VocalsA[0]<25){
    student[Second].Ch1 = 5;
    VocalsA[0] = VocalsA[0] + 1;
}
    else if(student[Second].Ch2==0&&VocalsA[1]<25){
    student[Second].Ch2 = 5;
    VocalsA[1] = VocalsA[1] + 1;
}
else if(student[Second].Ch3==0&&VocalsA[2]<25){
student[Second].Ch3 = 5;
VocalsA[2] = VocalsA[2] + 1;
}
else if(student[Second].Ch4==0&&VocalsA[3]<25){
student[Second].Ch4 = 5;
VocalsA[3] = VocalsA[3] + 1;
}
}///Closes Vocals for your Second Choice
else if(student[Second].Choice2[0]+student[Second].Choice2[1]+student[Second].Choice2[2]==279){
if(student[Second].Ch1==0&&DramaA[0]<CS6){
student[Second].Ch1 = 6;
DramaA[0] = DramaA[0] + 1;
}
else if(student[Second].Ch2==0&&DramaA[1]<CS6){
student[Second].Ch1 = 6;
DramaA[1] = DramaA[1] + 1;
}
else if(student[Second].Ch3==0&&DramaA[2]<CS6){
student[Second].Ch3 = 6;
DramaA[2] = DramaA[2] + 1;
}
else if(student[Second].Ch4==0&&DramaA[3]<CS6){
student[Second].Ch4 = 6;
DramaA[3] = DramaA[3] + 1;
}




}///Closes Drama for your Second Choice

}///Closes Loop for Second Choice
/*
Code above is for choosing the students Second Choice, It figures out the
Second code by ASCII value and checks if there Period___ is open and that
the class at that period isn't Full. This System Still leaves maybe 1 in 6
Kids without there Second choice either because the classes don't run with open spots
or the classes are full when they do.



    ~~ SECOND CHOICE BIG SORTER ENDS ~~
*/
int Empty;
int full = Tech[3] + Tech[2] + Tech[1] + Tech[0];
printf("\nTech: %d",ArtA[2]);

for(int Third = 0;Third <205;Third++){
Empty = 0;
if(student[Third].Ch1==0)Empty++;
if(student[Third].Ch2==0)Empty++;
if(student[Third].Ch3==0)Empty++;///4 If Statements Check How many Empty Class slots a student has
if(student[Third].Ch4==0|student[Third].Ch4==999)Empty++;///(Or, How many classes a student DOES have)

if(Empty==3){

if(student[Third].Choice3[0]+student[Third].Choice3[1]+student[Third].Choice3[2]==284){
    if(student[Third].Ch1==0&&Tech[0]<25){
        student[Third].Ch1 = 1;
        Tech[0] = Tech[0] + 1;
    }
else if(student[Third].Ch1==0&&Tech[3]>25){
if(student[Third].Ch2==0&&Tech[1]>25){
  student[Third].Ch2 = 12;
  Tech[3] = Tech[3] + 1;
    }
}
else if(student[Third].Ch1==0&&Tech[2]>25){
student[Third].Ch3 = 1;
Tech[2] = Tech[2] = 1;
}
} ///If Statement for Third Choice Tech

else if(student[Third].Choice3[0]+student[Third].Choice3[1]+student[Third].Choice3[2]==276){
if(student[Third].Ch1==0&&FamilyA[3]<25){
student[Third].Ch1 = 2;
FamilyA[3] = FamilyA[3] + 1;
}
else if(student[Third].Ch2==0&&FamilyA[2]<25){
student[Third].Ch2 = 2;
FamilyA[3] = FamilyA[3] + 1;
}
else if(student[Third].Ch2==0&&FamilyA[1]<25){
student[Third].Ch3 = 2;
FamilyA[1] = FamilyA[1] + 1;
}
}///If Statement Closes For Third Choice Family Studies

else if(student[Third].Choice3[0]+student[Third].Choice3[1]+student[Third].Choice3[2]==287){
if(student[Third].Ch2==0&&ComputersA[1]<25){
    student[Third].Ch2 = 3;
    ComputersA[1] = ComputersA[1] + 1;
}
else if(student[Third].Ch3==0&&ComputersA[2]<25){
    student[Third].Ch3 = 3;
    ComputersA[2] = ComputersA[2] + 1;
}
else if(student[Third].Ch4==0&&ComputersA[3]<25){
    student[Third].Ch4 = 3;
    ComputersA[3] = ComputersA[3] + 1;
}
}///Closes Computer Applications for your Third Choice

else if(student[Third].Choice3[0]+student[Third].Choice3[1]+student[Third].Choice3[2]==295){
 if(student[Third].Ch4==0&&ArtA[0]<25){
    student[Third].Ch4 = 4;
    ArtA[0] = ArtA[0] + 1;
 }
else if(student[Third].Ch3==0&&ArtA[1]<25){
    student[Third].Ch3 = 4;
    ArtA[1] = ArtA[1] + 1;
}
else if(student[Third].Ch2==0&&ArtA[2]<25){
    student[Third].Ch2 = 4;
    ArtA[2]= ArtA[2] + 1;
}
else if(student[Third].Ch3==0&&ArtA[3]<25){
    student[Third].Ch1 = 4;
    ArtA[3] = ArtA[3] + 1;
}
}///Closes Art for your Third Choice

else if(student[Third].Choice3[0]+student[Third].Choice3[1]+student[Third].Choice3[2]==309){
 if(student[Third].Ch1==0&&VocalsA[0]<25){
    student[Third].Ch1 = 5;
    VocalsA[0] = VocalsA[0] + 1;
}
    else if(student[Third].Ch2==0&&VocalsA[1]<25){
    student[Third].Ch2 = 5;
    VocalsA[1] = VocalsA[1] + 1;
}
}///Closes Vocals for your Third Choice



else if(student[Third].Choice3[0]+student[Third].Choice3[1]+student[Third].Choice3[2]==279){
 if(student[Third].Ch1==0&&DramaA[0]<25){
student[Third].Ch1 = 6;
DramaA[0] = DramaA[0] + 1;
}
else if(student[Third].Ch2==0&&DramaA[1]<25){
student[Third].Ch2 = 6;
DramaA[1] = DramaA[1] + 1;
}
}///Closes Drama for your Third Choice


}///IF Statement to Give the kids without their Second Class Priority to Third Choice



}///Closes Third ForLoop

/*
        ~~ THIRD BIG SORTER ENDS
*/



for(int Fourth = 2;Fourth <195;Fourth ++){
        Empty = 0;
if(student[Fourth ].Ch1==0)Empty++;
if(student[Fourth ].Ch2==0)Empty++;
if(student[Fourth ].Ch3==0)Empty++;///4 If Statements Check How many Empty Class slots a student has
if(student[Fourth ].Ch4==0|student[Fourth ].Ch4==999)Empty++;///(Or, How many classes a student DOES have)
if(Empty>=3){

if(student[Fourth ].Choice4[0]+student[Fourth ].Choice4[1]+student[Fourth ].Choice4[2]==284){
    if(student[Fourth ].Ch1==0&&Tech[0]<25){
        student[Fourth ].Ch1 = 1;
        Tech[0] = Tech[0] + 1;
    }
else if(student[Fourth ].Ch1==0&&Tech[3]>25){
if(student[Fourth ].Ch2==0&&Tech[1]>25){
  student[Fourth ].Ch2 = 12;
  Tech[3] = Tech[3] + 1;
    }
}
else if(student[Fourth ].Ch1==0&&Tech[2]>25){
student[Fourth ].Ch3 = 1;
Tech[2] = Tech[2] = 1;
}
} ///If Statement for Fourth Choice Tech

 else if(student[Fourth].Choice4[0]+student[Fourth].Choice4[1]+student[Fourth].Choice4[2]==276){
if(student[Fourth].Ch1==0&&FamilyA[3]<25){
student[Fourth].Ch1 = 2;
FamilyA[3] = FamilyA[3] + 1;
}
else if(student[Fourth].Ch2==0&&FamilyA[2]<25){
student[Fourth].Ch2 = 2;
FamilyA[3] = FamilyA[3] + 1;
}
else if(student[Fourth].Ch2==0&&FamilyA[1]<25){
student[Fourth].Ch3 = 2;
FamilyA[1] = FamilyA[1] + 1;
}
}///If Statement Closes For Fourth Choice Family Studies

else if(student[Fourth].Choice4[0]+student[Fourth].Choice4[1]+student[Fourth].Choice4[2]==287){
if(student[Fourth].Ch2==0&&ComputersA[1]<25){
    student[Fourth].Ch2 = 3;
    ComputersA[1] = ComputersA[1] + 1;
}
else if(student[Fourth].Ch3==0&&ComputersA[2]<25){
    student[Fourth].Ch3 = 3;
    ComputersA[2] = ComputersA[2] + 1;
}
else if(student[Fourth].Ch4==0&&ComputersA[3]<25){
    student[Fourth].Ch4 = 3;
    ComputersA[3] = ComputersA[3] + 1;
}
}///Closes Computer Applications for your Fourth Choice

else if(student[Fourth].Choice4[0]+student[Fourth].Choice4[1]+student[Fourth].Choice4[2]==295){
 if(student[Fourth].Ch4==0&&ArtA[0]<25){
    student[Fourth].Ch4 = 4;
    ArtA[0] = ArtA[0] + 1;
 }
else if(student[Fourth].Ch3==0&&ArtA[1]<25){
    student[Fourth].Ch3 = 4;
    ArtA[1] = ArtA[1] + 1;
}
else if(student[Fourth].Ch2==0&&ArtA[2]<25){
    student[Fourth].Ch2 = 4;
    ArtA[2]= ArtA[2] + 1;
}
else if(student[Fourth].Ch3==0&&ArtA[3]<25){
    student[Fourth].Ch1 = 4;
    ArtA[3] = ArtA[3] + 1;
}
}///Closes Art for your Fourth Choice

else if(student[Fourth].Choice4[0]+student[Fourth].Choice4[1]+student[Fourth].Choice4[2]==309){
 if(student[Fourth].Ch1==0&&VocalsA[0]<25){
    student[Fourth].Ch1 = 5;
    VocalsA[0] = VocalsA[0] + 1;
}
    else if(student[Fourth].Ch2==0&&VocalsA[1]<25){
    student[Fourth].Ch2 = 5;
    VocalsA[1] = VocalsA[1] + 1;
}
}///Closes Vocals for your Fourth Choice

else if(student[Fourth].Choice4[0]+student[Fourth].Choice4[1]+student[Fourth].Choice4[2]==279){
 if(student[Fourth].Ch1==0&&DramaA[0]<25){
student[Fourth].Ch1 = 6;
DramaA[0] = DramaA[0] + 1;
}
else if(student[Fourth].Ch2==0&&DramaA[1]<25){
student[Fourth].Ch2 = 6;
DramaA[1] = DramaA[1] + 1;
}
}///Closes Drama for your Fourth Choice
}///Closes For kids Without 2 Classes
}///Closes Fourth For Loop
for(int i = 0;i<205;i++)printf("\nS#%d)|%d|%d|%d|%d|",i,student[i].Ch1,student[i].Ch2,student[i].Ch3,student[i].Ch4);//For Loop to Display what the current Schedule Looks like


int temp = 0;

for(int Fourth = 2;Fourth <195;Fourth ++){
        Empty = 0;
if(student[Fourth ].Ch1==0)Empty++;
if(student[Fourth ].Ch2==0)Empty++;
if(student[Fourth ].Ch3==0)Empty++;///4 If Statements Check How many Empty Class slots a student has
if(student[Fourth ].Ch4==0|student[Fourth ].Ch4==999)Empty++;///(Or, How many classes a student DOES have)
if(Empty==3){
printf("\n Student # %d",Fourth);
        temp = temp + 1;
}
}

printf("\nStudents getting cucked: %d",temp);

//This Code Checks how many students have gotten absolutely screwed and didn't get Second or Third Choice


    fclose(fp);
    return 0;
}
