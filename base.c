#include <stdio.h>



int main()

{
    int studentnum,c1,c2,c3,c4,c5,c6;
    studentnum = 1;
    c1 =1;
    c2 =2;
    c3 = 3;
    c4 =4;
    c5 =5 ;
    int x = 1;
    c6 = 6;
    char ch;
    FILE * tech;
    tech = fopen("tech.txt", "r+");
    FILE * art;
    art = fopen("art.txt", "r+");
    FILE * music;
    music = fopen("music.txt", "r+");
    FILE * drama;
    drama = fopen("drama.txt", "r+");
    FILE * computer;
    computer = fopen("computer.txt", "r+");
    FILE * other;
    other = fopen("other.txt", "r+");



    {

    int lg,lg2,lg3,lg4,lg5,lg6,lg7;
for (int loop = 1; loop <=9 ;loop++) //detect end of file
{
    FILE * temp;
    temp = fopen("students.txt", "r");

    for (int l = 1; l <= loop; l++)
    {
    fscanf(temp,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
    }
    fclose(temp);
    switch(lg2)
    {

    case 1:
        {
        fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
        }
        break;
    case 2:
        {
        fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
        }
        break;
    case 3:
        {
        fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
        }
        break;
    case 4:
        {
        fprintf(drama, "%d %d %d %d %d %d %d\n ",lg,lg2,lg3,lg4,lg5,lg6,lg7);
        }
        break;
    case 5:
        {
        fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
        }
        break;
    case 6:
        {
        fprintf(other, "%d %d %d %d %d %d %d \n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
        }
        break;
    default:

        break;


    }


    printf("\n%d", lg);
    fclose(temp);
}
fclose(other);
fclose(computer);
fclose(drama);
fclose(music);
fclose(tech);

    return 0;
    }
}
