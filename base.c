#include <stdio.h>



int base()


{



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
        int techcount,artcount,musiccount,dramacount,computercount,othercount;
        techcount = 0;
        musiccount = 0;
        dramacount=0;
        computercount=0;
        artcount=0;
        othercount=0;

    int lg,lg2,lg3,lg4,lg5,lg6,lg7;




for(int sorter= 1; sorter <= 3;sorter++)
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

    if (loop >=2)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
    }

    end = end +1;

    FILE * temp;
    temp = fopen("students.txt", "r");

    for (int l = 1; l <= loop; l++)
    {
        fscanf(temp,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
    }

    if (lg == hold)
    {
        printf(" %d %d ",hold,lg);
        end = 0;
        lg2 = 88;
    }
    fclose(temp);



    switch(lg2)
    {

    case 1:
        {
            if (techcount <= 99)
            {
                fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                techcount = techcount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    case 2:
        {
            if (artcount <= 99)
            {
                fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                artcount = artcount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    case 3:
        {
            if (musiccount <= 99)
            {
                fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                musiccount = musiccount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 4:
        {
        if (dramacount <= 99)
            {
                fprintf(drama, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                dramacount = dramacount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 5:
        {
        if (computercount <= 99)
            {
                fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                computercount = computercount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 6:
        {

        if (othercount <= 99)
            {
                fprintf(other, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                othercount = othercount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    case 117:
        {

                lg2 = 117;
                fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);


        }
        break;
    default:

        break;


    }
     hold = lg;
}


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
    if (loop >=2)
    {
        printf("\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);

    }
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
            if (techcount <= 99)
            {
                fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                techcount = techcount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    case 2:
        {
            if (artcount <= 99)
            {
                fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                artcount = artcount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    case 3:
        {
            if (musiccount <= 99)
            {
                fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                musiccount = musiccount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 4:
        {
        if (dramacount <= 99)
            {
                fprintf(drama, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                dramacount = dramacount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 5:
        {
        if (computercount <= 99)
            {
                fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                computercount = computercount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }
        }
        break;
    case 6:
        {

        if (othercount <= 99)
            {
                fprintf(other, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);

                othercount = othercount + 1;
            }
            else{
                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                }

        }
        break;
    case 117:
        {

                lg2 = 117;
                fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);


        }
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



fclose(class2);
int a[6];
converter(othercount,computercount,dramacount,musiccount,techcount,artcount,a);
printf("\n\n\n\n\n\t\t\t");
for(int out = 0; out <= 5;out++)
{
    printf(" %d ", a[out]);
}
fclose(other);

fclose(computer);
fclose(drama);
fclose(music);
fclose(tech);
//filler program

    return 0;
    }
}
