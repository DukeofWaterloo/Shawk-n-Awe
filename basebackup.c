#include <stdio.h>



int main()


{
    rngdata();


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
    FILE*main2;
    main2 = fopen("main2.txt", "w+");



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
for (int again = 1; again <= 3;again++)
{
    end = 2;
for (int loop = 1; loop <=end ;loop++) //detect end of file
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                othercount = othercount + 1;
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

{
char checker;
fclose(overflow);
fopen("overflow.txt","r");
overflow2=fopen("secondflow.txt","r+");
 int end2 =2;
 lg= 0;
 checker= getc(overflow);
 int loop = 1;
 if (checker == EOF)

 {
     loop = 100;
 }
 fclose(overflow);
}
for (; loop <= end2 ;loop++) //detect end of file
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

    end2 = end2 +1;
   if (lg == hold)
    {
        end2 = 0;
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
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
                fprintf(main2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                othercount = othercount + 1;
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

fclose(overflow);

}

int end1 =2;
FILE *temp;
temp = fopen("students.txt", "w+");

for (int transfer = 1; transfer <= end1 ;transfer++) //detect end of file
{
class2 = fopen("students.txt", "r");
    for (int l = 1; l <= transfer; l++)
    {
        fscanf(class2,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
        fprintf(temp,"%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);

    }
    end1 = end1 +1;
   if (lg == hold)
    {
        end1 = 0;
        lg2 = 117;
    }
hold = lg;
fclose(class2);
}

}

fclose(class2);
fclose(overflow2);
printf("\n%d %d %d %d %d %d",othercount,computercount,dramacount,musiccount,techcount,artcount);
fclose(other);
fclose(overflow);
fclose(computer);
fclose(drama);
fclose(music);
fclose(tech);

    return 0;
    }
}
