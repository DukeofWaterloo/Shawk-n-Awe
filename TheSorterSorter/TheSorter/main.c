#include <stdio.h>
#include <stdlib.h>
///FIRST CHOICE FIRST CLASS, SECOND CHOICE FIRST CLASS, THIRD CHOICE FIRST CLASS, GUIDANCE, REPEAT FOR NEXT CLASS, SUCCESS
struct infotext
{
    char name[25];
    char choice1[25];
    char choice2[25];
    char choice3[25];

    char class1[25];
    char class2[25];
    char class3[25];
    };

struct info
{
    char name[25];
    int choice1[25];
    int choice2[25];
    int choice3[25];

    int class1[25];
    int class2[25];
    int class3[25];
    };
struct infotext studentchar[3] = {
{"Billy", "Tech", "Vocals", "Art"},
{"Bob", "Art", "Vocals", "Tech"},
{"Joe", "Vocals", "Art", "Tech"},
};

struct info student[3] = {
{0, 2, 4, 1},
{1, 1, 4, 2},
{2, 4, 1, 2},
};

int main()
{
    char *classeschar[4][1] = {{"Tech","WOAH"}, {"Vocals"}, {"Art"}, {"Guidance"}}; //The other spots in these arrays are <NULL>
    int studentcap[7] = {1,1,1,1,1,1,5}; //Max Size for Classes - User inputed or just {30,30,25,30,30,30,50}
    int classes [7][1] = {-1}; ///Family Studies - 0, Art - 1, Design and Technology - 2, Computer Applications -3, Music/Vocals - 4, Drama - 5, Guidance - 6 !! -1 is used as placeholder for empty spot



    printf("Hello world!\n");
    printf("OH HEY %d\n",classes[7][0]);

///SORTER CODE BELOW:
    for (int i=0;i<(sizeof(student)/sizeof(student[0]));i++) { ///Cycles through each and every student

        for (int z=0;z<(sizeof(classes)/sizeof(classes[0]));z++) { ///Cycles through each and every class

            if(student[i].choice1==classes[z]) ///Find the student's first choice class

                for (int j=0;j<studentcap[i];j++) { ///Cycle through the whole class

                    if(classes[z][j]==NULL) { ///Find an open space in that class

                        classes[z][j] = student[i].name;
                    }
                }
        }

        printf("%d\n",i);
    }


    printf("\nSomething fun follows\n");
    for (int i=0;i<3;i++) {
        printf("%s : %s\n",student[i].name, student[i].choice1);
        //puts(student[i].choice1);
    }

    printf("\nHEYYY %s", classes[2][1]);
    return 0;
}

int capacity()
{
    printf("YAY");
    return 0;
}
