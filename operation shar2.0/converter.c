#include <stdio.h>

int converter(int othercount,int computercount,int dramacount,int musiccount, int techcount, int artcount,int a[])
{
    FILE * tech;
    FILE * art;
    FILE * music;
    FILE * drama;
    FILE * computer;
    FILE * other;
    FILE * class2;
    FILE*overflow2;
    overflow2 = fopen("secondflow.txt","r");
    computer = fopen("computer.txt","a+");
    class2 = fopen("class2.txt","a+");
    drama = fopen("drama.txt","a+");
    music = fopen("music.txt","a+");
    other = fopen("other.txt","a+");
    tech = fopen("tech.txt","a+");
    art = fopen("art.txt","a+");
int move2 = 2;
int lg,lg2,lg3,lg4,lg5,lg6,lg7;
int holder = 0;
int overflowcount = 0;










fscanf(overflow2,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
if(lg != EOF)
{


    for(int move = 1;move <= move2; move++)
{
    fprintf(class2,"%d %d %d %d %d %d %d",lg,lg2,lg3,lg4,lg5,lg6,lg7);


            if (techcount >= 1 && lg2 == 1)
            {
                fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                techcount--;
            }
            if (artcount >= 1 && lg2 ==2)
            {
                fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                artcount--;
            }

            if (musiccount >= 1 && lg2 ==3)
            {
                fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                musiccount--;
            }
            if (dramacount >= 1 && lg2 ==4)
            {
                fprintf(drama, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                dramacount--;
            }
            if (computercount >= 1 && lg2 ==5)
            {
                fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                computercount--;
            }

            if (othercount >= 1 && lg2 ==6)
            {
                fprintf(other, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                othercount--;
            }
            else
            {
                if (techcount >= 1 && lg3 == 1)
                {
                    fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                    techcount--;
                }
                if (artcount >= 1 && lg3 ==2)
                {
                    fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                    artcount--;
                }

                if (musiccount >= 1 && lg3 ==3)
                {
                    fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                    printf( "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                    musiccount--;
                }
                if (dramacount >= 1 && lg3 ==4)
                {
                    fprintf(drama, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                    printf( "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                    dramacount--;
                }
                if (computercount >= 1 && lg3 ==5)
                {
                    fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                    printf( "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                    computercount--;
                }

                if (othercount >= 1 && lg3 ==6)
                {
                    fprintf(other, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                    printf( "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                    othercount--;
                }
                else
                    {
                        printf("need bigger classes");
                        exit (0);
                    }
            }







int hold= lg;
fscanf(overflow2,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
move2 = move2 + 1;
if (hold == lg)
{
    move2 = 0;
}




printf("\n\n\n\t\t\t %d %d %d %d %d %d\t\t\tamount of students without placment :%d \n",othercount,computercount,dramacount,musiccount,techcount,artcount,overflowcount);
}
}


    fclose(tech);
    fclose(art);
    fclose(music);
    fclose(drama);
    fclose(computer);
    fclose(other);
    fclose(overflow2);
    fclose(class2);
    a[0]=othercount;
    a[1]=computercount;
    a[2]=dramacount;
    a[3]=musiccount;
    a[4]=techcount;
    a[5]=artcount;

if(overflowcount >=1)
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\tyou need % d more class space\n\n\n\n\n\n\n\n\n", overflowcount);
    exit(0);
}
class2 = fopen("class2","r");

return (a);
}
