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
    int name;
    int choice1;
    int choice2;
    int choice3;

    int class1;
    int class2;
    int class3;
    };
struct infotext studentchar[3] = {
{"Billy", "Tech", "Vocals", "Art"},
{"Bob", "Art", "Vocals", "Tech"},
{"Joe", "Vocals", "Art", "Tech"},
};

struct info student[4] = { ///This is temporary data that will be properly filled by Keegan's massive list of kiddos with their top 3s
{0, 4, 2, 1},
{1, 4, 1, 4},
{2, 4, 1, 2},
{3, 4, 1, 2},
};

int main()
{
    char *classeschar[4][1] = {{"Tech","WOAH"}, {"Vocals"}, {"Art"}, {"Guidance"}}; //The other spots in these arrays are <NULL>
    int studentcap[7] = {1,1,1,1,1,1,5}; //Max Size for Classes - User inputed or just {30,30,25,30,30,30,50}
    int classes [7][1]; ///Family Studies - 0, Art - 1, Design and Technology - 2, Computer Applications -3, Music/Vocals - 4, Drama - 5, Guidance - 6 !! -1 is used as placeholder for empty spot
    memset(classes, -1, sizeof(classes[0][0]) * 7 * 1); ///Sets all open values to -1 so that code is able to find empty spots ALSO NOTE THE 7 AND 1



    printf("Hello world!\n"); ///Couldn't let this guy go

    printf("OH HEY %d\n",classes[2][0]); ///Bugtime is Funtime

///SORTER CODE BELOW:
    for (int i=0;i<(sizeof(student)/sizeof(student[0]));i++) { ///Cycles through each and every student

        for (int z=0;z<=(sizeof(classes)/sizeof(classes[0]));z++) { ///Cycles through each and every class

            if(student[i].choice1==z) { ///Find the student's first choice class

                for (int j=1;j<=studentcap[z];j++) { ///Cycle through the whole class                                   CHANGE BACK TO 0 WHEN DOEN!!!!! OR DO YOU ACTUALLY HAVE TO?

                    if(classes[z][j]==(-1)) { ///Find an open space in that class
                            printf("THIS HAPPENED HERE WITH %d FOR CLASS %d AT CLASS POSITION %d \n",i,z,j);

                        classes[z][j] = student[i].name; ///Put that student in that class in that spot
                        student[i].class1 = z; ///Set that student's first class in structure to that class
                        break; ///This prevents one student from filling the entire class
                    }

                            printf("THIS GUY DID NOT GET FIRST CHOICE\n");
                            //printf("ALSO CLASS 4 POS 1 IS %d\n\n",classes[4][1]);

                            for (int x=0;x<=(sizeof(classes)/sizeof(classes[0]));x++) { ///Cycles through each and every class

                                if(student[i].choice2==x) { ///Find the student's second choice class WHEN FIRST CHOICE CLASS IS FULL

                                    for (int j=1;j<=studentcap[z];j++) { ///Cycle through the whole class

                                        if(classes[x][j]==(-1)) { ///Find an open space
                            printf("THIS HAPPENED THERE WITH %d FOR CLASS %d AT CLASS POSITION %d \n",i,z,j);
                           // printf("ALSO CLASS 4 POS 1 IS %d\n\n",classes[x][j]);

                                            classes[x][j] = student[i].name; ///Put that student in that class (2nd pick) in that spot
                                            student[i].class1 = x; ///Set that student's first class in structure to that second class
                                            break;

                                        }

                                            printf("THIS GUY DID NOT GET SECOND CHOICE\n");

                                            for (int y=0;y<=(sizeof(classes)/sizeof(classes[0]));y++) { ///Cycling through each and every class

                                                if(student[i].choice3==y) { ///Find the student's third choice class WHEN BOTH FIRST CHOICE AND SECOND CHOICE CLASS IS FULL

                                                    for (int j=1;j<=studentcap[z];j++) { ///Cycle through the whole class

                                                            if(classes[y][j]==(-1)) { ///Find an open space

                                                                printf("THIS HAPPENED WITH %d FOR CLASS %d AT CLASS POSITION %d \n",i,z,j);
                                                                classes[y][j] = student[i].name; ///Put that student in that class (2nd pick) in that spot
                                                                student[i].class1 = y; ///Set that student's first class in structure to that second class
                                                                break;
                                                            }

                                                                printf("THIS GUY DID NOT GET THIRD CHOICE (F)\n");
                                                                student[i].class1=6;

                                                    }
                                                }
                                            }
                                        }
                                }
                            }
                }
            }

        }
        printf("%d\n",i);

    }

    int students = (sizeof(student)/sizeof(student[0]));

    printf("\nSomething fun follows \n");
    for (int i=0;i<students;i++) {
        printf("%d : %d\n",student[i].name, student[i].class1);
        //puts(student[i].choice1);
    }

    //printf("\nHEYYY %d", classes[2][1]); Just having some fun here :)
    return 0;
}

int capacity()
{
    printf("YAY");
    return 0;
}
