#include <stdio.h>
#include <windows.h>



int base()


{


    struct kids {
        int choice1;
        int choice2;
        int choice3;


    } studentchoice[1000];





    int techcount,artcount,musiccount,dramacount,computercount,othercount;
int studentcap[6];
int classes[6];
int heck;




for(int classs = 2; classs <= 2; classs++)
{system("cls");
printf("please enter the number of Family Studies classes:");
scanf("%d",&classes[0]);
printf("please enter max number of students per Family Studies class:");
scanf("%d",&studentcap[0]);
system("cls");
printf("please enter the number of art classes:");
scanf("%d",&classes[1]);
printf("please enter max number of students per art class:");
scanf("%d",&studentcap[1]);
system("cls");
printf("please enter the number of Design and Technology classes:");
scanf("%d",&classes[2]);
printf("please enter max number of students per Design and Technology class:");
scanf("%d",&studentcap[2]);
system("cls");
printf("please enter the number of Computer Applications classes:");
scanf("%d",&classes[3]);
printf("please enter max number of students per Computer Applications class:");
scanf("%d",&studentcap[3]);
system("cls");
printf("please enter the number of Music/Vocals classes:");
scanf("%d",&classes[4]);
printf("please enter max number of students per Music/Vocals class:");
scanf("%d",&studentcap[4]);
system("cls");
printf("please enter the number of Drama classes:");
scanf("%d",&classes[5]);
printf("please enter max number of students per Drama class:");
scanf("%d",&studentcap[5]);
system("cls");



techcount =     classes[2] * studentcap[2] ;
musiccount =    classes[4] * studentcap[4] ;
dramacount=     classes[5] * studentcap[5] ;
computercount=  classes[3] * studentcap[3] ;
artcount=       classes[1] * studentcap[1] ;
othercount=     classes[0] * studentcap[0] ;



printf("\n\n\n class name             | number of classes\t| number of students per\t| total available spots\n");
printf(" Family Studies         | %d\t\t\t| %d\t\t\t\t\t| %d\n",classes[0],studentcap[0],othercount);
printf(" art                    | %d\t\t\t| %d\t\t\t\t\t| %d\n",classes[1],studentcap[1],artcount);
printf(" Design and Technology  | %d\t\t\t| %d\t\t\t\t\t| %d\n",classes[2],studentcap[2],techcount);
printf(" Computer Applications  | %d\t\t\t| %d\t\t\t\t\t| %d\n",classes[3],studentcap[3],computercount);
printf(" Music/Vocals           | %d\t\t\t| %d\t\t\t\t\t| %d\n",classes[4],studentcap[4],musiccount);
printf(" Drama                  | %d\t\t\t| %d\t\t\t\t\t| %d\n\n\n",classes[5],studentcap[5],dramacount);
printf("\nare those numbers correct?\npress 1 to change numbers, 2 to continue\n\n");
scanf("%d",&classs);
printf("\n");

}

    FILE * tech;
    tech = fopen("tech.txt", "w+");
    FILE * art;
    art = fopen("art.txt", "w+");
    FILE * music;
    music = fopen("music.txt", "w+");
    FILE * drama;
    drama = fopen("drama.txt", "w+");
    FILE * computer;
    computer = fopen("computer.txt", "w+");
    FILE * other;
    other = fopen("other.txt", "w+");
    FILE * overflow;
    overflow = fopen("overflow.txt", "w+");
    FILE * class2;
    class2 = fopen("class2.txt", "w+");
    FILE*overflow2;
    fclose(tech);
    fclose(art);
    fclose(music);
    fclose(drama);
    fclose(computer);
    fclose(other);
    fclose(overflow);
    fclose(class2);



int loop;
int hold,end;

    {

                // (size * number of classes)


    int lg,lg2,lg3,lg4,lg5,lg6,lg7;




for(int sorter= 0; sorter <= 2;sorter++)
    {
    tech = fopen("tech.txt", "a+");
    art = fopen("art.txt", "a+");
    music = fopen("music.txt", "a+");
    drama = fopen("drama.txt", "a+");
    computer = fopen("computer.txt", "a+");
    other = fopen("other.txt", "a+");
    overflow = fopen("overflow.txt", "w+");
    class2=fopen("class2.txt","w+");



 end = 2;
 loop = 1;
hold = 1 -2;
lg = 1;
for ( loop = 1; loop <=end ;loop++) //detect end of file
{




    end = end +1;

    FILE * temp;
    temp = fopen("students.txt", "r");

    for (int l = 1; l <= loop; l++)
    {
        fscanf(temp,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
    }

    if (lg == hold)
    {

        end = 0;
        lg2 = 88;
    }
    fclose(temp);



  printf("\n\n\n\t\t\t %d %d %d %d %d %d",othercount,computercount,dramacount,musiccount,techcount,artcount);
    switch(lg2)
    {

    case 1:
        {
            if (techcount >= 1)
            {
                fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 11\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}


                techcount = techcount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    case 2:
        {
            if (artcount >= 1)
            {
                fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 12\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}

                artcount = artcount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    case 3:
        {
            if (musiccount >= 1)
            {
                fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 13\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}

                musiccount = musiccount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 4:
        {
        if (dramacount >= 1)
            {
                fprintf(drama, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 14\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}

                dramacount = dramacount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 5:
        {
        if (computercount >= 1)
            {
                fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 15\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}

                computercount = computercount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 6:
        {

        if (othercount >= 1)
            {
                fprintf(other, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 16\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}

                othercount = othercount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    default:

        break;


    }
     hold = lg;
}
heck = loop;

char checker;
fclose(overflow);
overflow =fopen("overflow.txt","r");
overflow2=fopen("secondflow.txt","w+");
 end =2;
 lg= 0;
 checker= getc(overflow);
fclose(overflow);
 int loop = 1;
 if (checker == EOF)
 {loop = 100; }


for (; loop <= end ;loop++) //detect end of file
{
overflow=fopen("overflow.txt","r");

    for (int l = 1; l <= loop; l++)
    {
        fscanf(overflow,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
    }

    end = end +1;
   if (lg == hold)
    {
        end = 0;
        lg2 = 117;
    }

    //overflow


    switch(lg2)
    {

    case 1:
        {
            if (techcount >= 1)
            {
                fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 11\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}


                techcount = techcount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    case 2:
        {
            if (artcount >= 1)
            {
                fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 12\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}

                artcount = artcount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    case 3:
        {
            if (musiccount >= 1)
            {
                fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 13\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}

                musiccount = musiccount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 4:
        {
        if (dramacount >= 1)
            {
                fprintf(drama, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 14\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}

                dramacount = dramacount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 5:
        {
        if (computercount >= 1)
            {
                fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 15\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}

                computercount = computercount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 6:
        {

        if (othercount >= 1)
            {
                fprintf(other, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 16\n",lg,lg3,lg4,lg5,lg6,lg7);
                if (sorter == 0)
                {studentchoice[lg].choice1 = lg2;}
                if (sorter == 1)
                {studentchoice[lg].choice2 = lg2;}
                if (sorter == 2)
                {studentchoice[lg].choice3 = lg2;}

                othercount = othercount - 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    default:

        break;


    }
    hold = lg;



}
fclose(overflow);
fclose(overflow2);
int move2 = 2;

    int holder;
FILE * temp;
temp = fopen("students.txt", "w+");
overflow2 = fopen("secondflow.txt","r");
for(int move = 1;move <= move2; move++)
{
    move2 = move2 + 1;
   fscanf(overflow2,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
   if (lg != holder )
   {
      fprintf(temp,"%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
   }
   if (lg == holder)
   {
       move2 = 0;
   }
   holder = lg;



}
fclose(class2);
class2 = fopen("class2.txt", "r");
move2=2;
for(int move = 1;move <= move2; move++)
{
    move2 = move2 + 1;
   fscanf(class2,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
   if (lg != holder )
   {
      fprintf(temp,"%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
   }
   if (lg == holder)
   {
       move2 = 0;
   }
   holder = lg;



}
fclose(temp);
fclose(class2);
fclose(overflow2);

    }


for(int put = 2; put <= heck-2; put ++)
{
    printf("\n%d %d %d %d",put,studentchoice[put].choice1,studentchoice[put].choice2,studentchoice[put].choice3 );
}
fclose(class2);
int a[6];
int x = 0;
if (x == 0){converter(othercount,computercount,dramacount,musiccount,techcount,artcount,a);}

printf("\n\n\n\n\n");

printf("Drama has\t\t\t%d spaces left\nArt has\t\t\t\t%d spaces left\nFamily Studies has\t\t%d spaces left\nDesign and Technology has\t%d spaces left\nMusic/Vocals has\t\t%d spaces left\nComputer Applications has \t%d spaces left\n",a[2],a[5],a[0],a[4],a[3],a[1]);
fclose(other);

fclose(computer);
fclose(drama);
fclose(music);
fclose(tech);
//filler program


    return 0;
    }
}
