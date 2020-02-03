#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXCHAR 1000
int main(){
    FILE * imgoingtodocalculus;
    imgoingtodocalculus = fopen("students.txt","w+"); //
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "./Experience a Day 2019.csv";
    char s1[]="Drama";
    char s2[]="Art";
    char s3[]="Family Studies";
    char s5[]="Music/Vocals";
    char s6[]="Computer Applications";
    char s4[]="Design and Technology";
    char s7[]= "\0";
    int n = 0;
    int studentchecker;
    int lineTotal = 0;
    int CommaAmount = 0;
    int studentNumber = 0;
    int understaffed= 0;
    int position = 0;
    int god
    = 1;
    fp = fopen(filename, "r");
    while (fgets(str, MAXCHAR, fp) != NULL){
        lineTotal++;}
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
    struct kids{
        int name;
        int choice1;
        int choice2;
        int choice3;
        int choice4;
        int class1;
        int class2;
        int class3;
        int class4;
    }studentchoice[1000];
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s", filename);
        return 1;}
    fp = fopen(filename, "r");
    while (fgets(str, MAXCHAR, fp) != NULL){
        while (str[n] != '\n'){// printf("n value %d \nCommas: %d \nPosition: %d \n Character Value @ n: %c\nFirst Name: %s\nLast Name: %s\n School: %s \nStudent Number: %d\n", n, CommaAmount, position, str[n], student[studentNumber].NameFirst, student[studentNumber].NameLast, student[studentNumber].School, studentNumber);
            if (str[n] == 44){
                CommaAmount++;
                position = -1;}
            if (CommaAmount == 9 && str[n] != 44){
                student[studentNumber].NameFirst[position] = str[n];//  printf("Character: %c\n First Name: %s\n", str[n], student[studentNumber].NameFirst);
                student[studentNumber].NameFirst[position + 1] = 0;}
            else if (CommaAmount == 10 && str[n] != 44){
                student[studentNumber].NameLast[position] = str[n];//  printf("Character: %c\n  Last Name: %s\n", str[n], student[studentNumber].NameLast);
                student[studentNumber].NameLast[position + 1] = 0;}
            else if (CommaAmount == 11 && str[n] != 44){
                student[studentNumber].School[position] = str[n];//  printf("Character: %c\n   School: %s\n", str[n], student[studentNumber].School);
                student[studentNumber].School[position + 1] = 0;}
            else if (CommaAmount == 13 && str[n] != 44){
                student[studentNumber].Teacher[position] = str[n];//  printf("Character: %c\n    Teacher: %s\n", str[n], student[studentNumber].Teacher);
                student[studentNumber].Teacher[position + 1] = 0;}
            else if (CommaAmount == 15 && str[n] != 44){
                student[studentNumber].Choice1[position] = str[n];//  printf("Character: %c\n      Choice One: %s\n", str[n], student[studentNumber].Choice1);
                student[studentNumber].Choice1[position + 1] = 0;}
            else if (CommaAmount == 16 && str[n] != 44){
                student[studentNumber].Choice2[position] = str[n];  //  printf("Character: %c\n       Choice Two: %s\n", str[n], student[studentNumber].Choice2);
                student[studentNumber].Choice2[position + 1] = 0;}
            else if (CommaAmount == 17 && str[n] != 44){
                student[studentNumber].Choice3[position] = str[n];//  printf("Character: %c\n        Choice Three: %s\n", str[n], student[studentNumber].Choice3);
                student[studentNumber].Choice3[position + 1] = 0;}
            else if (CommaAmount == 18 && str[n] != 44){
                student[studentNumber].Choice4[position] = str[n]; //  printf("Character: %c\n        Choice Four: %s\n", str[n], student[studentNumber].Choice4);
                student[studentNumber].Choice4[position + 1] = 0;}
            else if (CommaAmount == 19 && str[n] != 44){
                student[studentNumber].Choice5[position] = str[n];//  printf("Character: %c\n         Choice Five: %s\n", str[n], student[studentNumber].Choice5);
                student[studentNumber].Choice5[position + 1] = 0;}
            else if (CommaAmount == 20 && str[n] != 44){
                student[studentNumber].Choice6[position] = str[n];//  printf("Character: %c\n          Choice Six: %s\n", str[n], student[studentNumber].Choice6);
                student[studentNumber].Choice6[position + 1] = 0;}
            position++;
            n++;}
            int nopick = 0;
        int choice[6] ={0,0,0,0,0,0};
        if (studentNumber >= 2){
             if(strcmp(s1,student[studentNumber].Choice1)==0){
                 choice[0]=1;}
             if(strcmp(s2,student[studentNumber].Choice1)==0){
                 choice[0]=2;}
             if(strcmp(s3,student[studentNumber].Choice1)==0){
                 choice[0]=3;}
             if(strcmp(s4,student[studentNumber].Choice1)==0){
                 choice[0]=4;}
             if(strcmp(s5,student[studentNumber].Choice1)==0){
                 choice[0]=5;}
             if(strcmp(s6,student[studentNumber].Choice1)==0){
                 choice[0]=6;}
             if(strcmp(s7,student[studentNumber].Choice1)==0){
                nopick = nopick + 1;}
             if(strcmp(s1,student[studentNumber].Choice2)==0){
                 choice[1]=1;}
             if(strcmp(s2,student[studentNumber].Choice2)==0){
                 choice[1]=2;}
             if(strcmp(s3,student[studentNumber].Choice2)==0){
                 choice[1]=3;}
             if(strcmp(s4,student[studentNumber].Choice2)==0){
                 choice[1]=4;}
             if(strcmp(s5,student[studentNumber].Choice2)==0){
                 choice[1]=5;}
             if(strcmp(s6,student[studentNumber].Choice2)==0){
                 choice[1]=6;}
             if(strcmp(s7,student[studentNumber].Choice2)==0){
                nopick = nopick + 1;}
             if(strcmp(s1,student[studentNumber].Choice3)==0){
                 choice[2]=1;}
             if(strcmp(s2,student[studentNumber].Choice3)==0){
                choice[2]=2;}
             if(strcmp(s3,student[studentNumber].Choice3)==0){
                 choice[2]=3;}
             if(strcmp(s4,student[studentNumber].Choice3)==0){
                 choice[2]=4;}
             if(strcmp(s5,student[studentNumber].Choice3)==0){
                 choice[2]=5;}
             if(strcmp(s6,student[studentNumber].Choice3)==0){
                 choice[2]=6;}
             if(strcmp(s7,student[studentNumber].Choice3)==0){
                nopick = nopick + 1;}
             if(strcmp(s1,student[studentNumber].Choice4)==0){
                 choice[3]=1;}
             if(strcmp(s2,student[studentNumber].Choice4)==0){
                 choice[3]=2;}
             if(strcmp(s3,student[studentNumber].Choice4)==0){
                 choice[3]=3;}
             if(strcmp(s4,student[studentNumber].Choice4)==0){
                 choice[3]=4;}
             if(strcmp(s5,student[studentNumber].Choice4)==0){
                 choice[3]=5;}
             if(strcmp(s6,student[studentNumber].Choice4)==0){
                 choice[3]=6;}
             if(strcmp(s7,student[studentNumber].Choice4)==0){
                nopick = nopick + 1;}
             if(strcmp(s1,student[studentNumber].Choice5)==0){
                 choice[4]=1;}
             if(strcmp(s2,student[studentNumber].Choice5)==0){
                 choice[4]=2;}
             if(strcmp(s3,student[studentNumber].Choice5)==0){
                 choice[4]=3;}
             if(strcmp(s4,student[studentNumber].Choice5)==0){
                 choice[4]=4;}
             if(strcmp(s5,student[studentNumber].Choice5)==0){
                 choice[4]=5;}
             if(strcmp(s6,student[studentNumber].Choice5)==0){
                 choice[4]=6;}
             if(strcmp(s7,student[studentNumber].Choice5)==0){
                nopick = nopick + 1;}
             if(strcmp(s1,student[studentNumber].Choice6)==0){
                 choice[5]=1;}
             if(strcmp(s2,student[studentNumber].Choice6)==0){
                 choice[5]=2;}
             if(strcmp(s3,student[studentNumber].Choice6)==0){
                 choice[5]=3;}
             if(strcmp(s4,student[studentNumber].Choice6)==0){
                 choice[5]=4;}
             if(strcmp(s5,student[studentNumber].Choice6)==0){
                 choice[5]=5;}
             if(strcmp(s6,student[studentNumber].Choice6)==0){
                 choice[5]=6;}
             if(strcmp(s7,student[studentNumber].Choice6)==0){
                nopick = nopick + 1;}
             if (nopick >= 1){
                for (int lol = 1; lol <= nopick; lol++ ){
                    for (int order = 0; order <= 5; order ++){
                        if (choice[order] == 0 && order < 5){
                            choice[order] = choice[(order + 1)];
                            choice[order + 1] = 0;}}}
                int lower = 1, upper = 6, count = 1;
                srand(time(0));
                for (int filler = 1; filler <= nopick;filler++){
                    int i;
                    for (i = 0; i < count; i++) {
                        int num = (rand() %
                        (upper - lower + 1)) + lower;
                        for(int place = 0; place <= 5; place ++){
                            if (choice[0] == 0){
                              choice[place] = num;
                              num = 0;
                              place = 0;}
                            if ( choice[place] == num){
                              num =0;}
                            if (choice[5]== 0){
                                count= count + 1;}
                            if (choice[place] == 0){
                                choice[place]=num;
                                num = 0; }}}}}
        fprintf(imgoingtodocalculus,"%d %d %d %d %d %d %d \n", studentNumber, choice[0],choice[1],choice[2],choice[3],choice[4],choice[5]);}
        n = 0;
        studentNumber++;//   printf("n value %d \nCommas: %d \nPosition: %d \n Character Value @ n: %c\nFirst Name: %s\nLast Name: %s\n School: %s \nStudent Number: %d\n", n, CommaAmount, position, str[n], student[studentNumber].NameFirst, student[studentNumber].NameLast, student[studentNumber].School, studentNumber);
        CommaAmount = 0;}
    fclose(fp);
    fclose(imgoingtodocalculus);
    studentNumber = studentNumber - 2;
    int techcount,artcount,musiccount,dramacount,computercount,othercount;
    int studentcap[6];
    int classes;
    int heck;
    int recomended = studentNumber;
    int totalclass = 0;
    for(int classs = 2; classs <= 2; classs++){
        totalclass = 0;
        classes= 4;
        recomended = (studentNumber*3)/(6* classes);
        printf("|\tclass name\t|     recomended size\t| class size\n");
        printf(" ----------------------------------------------------------------\n");
        printf("| Family Studies class\t|\t\t%d\t|\t", recomended);
        scanf("%d",&studentcap[0]);
        totalclass = totalclass + (studentcap[0] * classes);
        recomended = (((studentNumber*3)-(totalclass))/(5* classes));
        printf("| art\t\t\t|\t\t%d\t|\t", recomended);
        scanf("%d",&studentcap[1]);
        totalclass = totalclass + (studentcap[1] * classes);
        recomended = (((studentNumber*3)-(totalclass))/(4* classes));
        printf("| Design and Technology\t|\t\t%d\t|\t", recomended);
        scanf("%d",&studentcap[2]);
        totalclass = totalclass + (studentcap[2] * classes);
        recomended = (((studentNumber*3)-(totalclass))/(3* classes));
        printf("| Computer Applications\t|\t\t%d\t|\t", recomended);
        scanf("%d",&studentcap[3]);
        totalclass = totalclass + (studentcap[3] * classes);
        recomended = (((studentNumber*3)-(totalclass))/(2* classes));
        printf("| Music/Vocals\t\t|\t\t%d\t|\t", recomended);
        scanf("%d",&studentcap[4]);
        totalclass = totalclass + (studentcap[4] * classes);
        recomended = (((studentNumber*3)-(totalclass))/(1* classes));
        printf("| Drama\t\t\t|\t\t%d\t|\t", recomended);
        scanf("%d",&studentcap[5]);{ //declare arrays
            techcount =     classes * studentcap[2] ;
            musiccount =    classes * studentcap[4] ;
            dramacount=     classes * studentcap[5] ;
            computercount=  classes * studentcap[3] ;
            artcount=       classes * studentcap[1] ;
            othercount=     classes * studentcap[0] ;
            understaffed = techcount + musiccount +  dramacount + computercount + artcount + othercount;}
        {//pritty print
            printf("\n\n\n class name             | number of classes\t| number of students\t\t| total available spots\n");
            printf(" Family Studies         | %d\t\t\t| %d\t\t\t\t| %d\n",classes,studentcap[0],othercount);
            printf(" art                    | %d\t\t\t| %d\t\t\t\t| %d\n",classes,studentcap[1],artcount);
            printf(" Design and Technology  | %d\t\t\t| %d\t\t\t\t| %d\n",classes,studentcap[2],techcount);
            printf(" Computer Applications  | %d\t\t\t| %d\t\t\t\t| %d\n",classes,studentcap[3],computercount);
            printf(" Music/Vocals           | %d\t\t\t| %d\t\t\t\t| %d\n",classes,studentcap[4],musiccount);
            printf(" Drama                  | %d\t\t\t| %d\t\t\t\t| %d\n\n\n",classes,studentcap[5],dramacount);
        if( understaffed < (studentNumber * 3)){
                printf("\nyou do not have enough space for the number of students applying, please change the class sizes\nif you need help, use the recomended class size listed\npress any number to return to the input page.\n\n");
                scanf("%d",&classs);
                classs = 1;}
        if( understaffed == (studentNumber * 3)){
                printf("\nare those numbers correct?\npress 1 to change numbers, 2 to continue\n\n");
                scanf("%d",&classs);}
        if( understaffed > (studentNumber * 3)){
                printf("\nthe total number of spaces avalable is larger than the needed.\nthis may cause the program to generate inconsistant class sizes.\nto change the class size, please press 1, or 2 to continue anyway.\n\n");
                scanf("%d",&classs);}}
                printf("\n\n\n\n\n\n\n\n\n\n\n\n");}
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
        int hold,end;{
            int lg,lg2,lg3,lg4,lg5,lg6,lg7;
            for(int sorter= 0; sorter <= 2;sorter++){
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
                for ( loop = 1; loop <=end ;loop++){ //detect end of file
                    end = end +1;
                    FILE * temp;
                    temp = fopen("students.txt", "r");
                    for (int l = 1; l <= loop; l++){
                        fscanf(temp,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);}
                        if (lg == hold){
                            end = 0;
                            lg2 = 88;}
                        fclose(temp);
                        switch(lg2){
                            case 1:{
                                    if (techcount >= 1){
                                        fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                        fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                        if (sorter == 0)
                                        {studentchoice[lg].choice1 = lg2;}
                                        if (sorter == 1)
                                        {studentchoice[lg].choice2 = lg2;}
                                        if (sorter == 2)
                                        {studentchoice[lg].choice3 = lg2;}
                                        techcount = techcount - 1;}
                                    else{
                                        lg2 = 117;
                                        fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            case 2:{
                                if (artcount >= 1){
                                    fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                    fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                    if (sorter == 0){
                                            studentchoice[lg].choice1 = lg2;}
                                    if (sorter == 1){
                                        studentchoice[lg].choice2 = lg2;}
                                    if (sorter == 2){
                                        studentchoice[lg].choice3 = lg2;}
                                    artcount = artcount - 1;}
                                else{
                                        lg2 = 117;
                                        fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            case 3:{
                                if (musiccount >= 1){
                                    fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                    fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                    if (sorter == 0){
                                            studentchoice[lg].choice1 = lg2;}
                                    if (sorter == 1){
                                        studentchoice[lg].choice2 = lg2;}
                                    if (sorter == 2){
                                        studentchoice[lg].choice3 = lg2;}
                                    musiccount = musiccount - 1;
                                    studentchecker =1;}
                                else{
                                    lg2 = 117;
                                    fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            case 4:{
                                if (dramacount >= 1){
                                    fprintf(drama, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                    fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                    if (sorter == 0){
                                            studentchoice[lg].choice1 = lg2;}
                                    if (sorter == 1){
                                        studentchoice[lg].choice2 = lg2;}
                                    if (sorter == 2){
                                        studentchoice[lg].choice3 = lg2;}
                                    dramacount = dramacount - 1;}
                                else{
                                    lg2 = 117;
                                    fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            case 5:{
                                if (computercount >= 1){
                                        fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                        fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                        if (sorter == 0){
                                            studentchoice[lg].choice1 = lg2;}
                                        studentchecker =1;
                                        if (sorter == 1){
                                                studentchoice[lg].choice2 = lg2;}
                                        if (sorter == 2){
                                            studentchoice[lg].choice3 = lg2;}
                                        computercount = computercount - 1;}
                                else{
                                    lg2 = 117;
                                    fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            case 6:{
                                if (othercount >= 1){
                                    fprintf(other, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                    fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                    if (sorter == 0){
                                            studentchoice[lg].choice1 = lg2;}
                                    if (sorter == 1){
                                        studentchoice[lg].choice2 = lg2;}
                                    if (sorter == 2){
                                        studentchoice[lg].choice3 = lg2;}
                                    othercount = othercount - 1;}
                                else{
                                    lg2 = 117;
                                    fprintf(overflow,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            default:
                                break;}
                        hold = lg;}
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
                    if (checker == EOF){
                        loop = 100; }
                    for (; loop <= end ;loop++){ //detect end of file
                        overflow=fopen("overflow.txt","r");
                        for (int l = 1; l <= loop; l++){
                            fscanf(overflow,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);}
                        end = end +1;
                        if (lg == hold){
                            end = 0;
                            lg2 = 117;}
                        switch(lg2){
                            case 1:{
                                if (techcount >= 1){
                                    fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                    fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                    if (sorter == 0){
                                        studentchoice[lg].choice1 = lg2;}
                                    if (sorter == 1){
                                        studentchoice[lg].choice2 = lg2;}
                                    if (sorter == 2){
                                        studentchoice[lg].choice3 = lg2;}
                                    techcount = techcount - 1;}
                                else{
                                    lg2 = 117;
                                    fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            case 2:{
                                if (artcount >= 1){
                                    fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                    fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                    if (sorter == 0){
                                        studentchoice[lg].choice1 = lg2;}
                                    if (sorter == 1){
                                        studentchoice[lg].choice2 = lg2;}
                                    if (sorter == 2){
                                        studentchoice[lg].choice3 = lg2;}
                                    artcount = artcount - 1;}
                                else{
                                    lg2 = 117;
                                    fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            case 3:{
                                if (musiccount >= 1){
                                    fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                    fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                    if (sorter == 0){
                                        studentchoice[lg].choice1 = lg2;}
                                    if (sorter == 1){
                                        studentchoice[lg].choice2 = lg2;}
                                    if (sorter == 2){
                                        studentchoice[lg].choice3 = lg2;}
                                    musiccount = musiccount - 1;}
                                else{
                                    lg2 = 117;
                                    fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            case 4:{
                                if (dramacount >= 1){
                                    fprintf(drama, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                    fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                    if (sorter == 0){
                                        studentchoice[lg].choice1 = lg2;}
                                    if (sorter == 1){
                                        studentchoice[lg].choice2 = lg2;}
                                    if (sorter == 2){
                                        studentchoice[lg].choice3 = lg2;}
                                    dramacount = dramacount - 1;}
                                else{
                                    lg2 = 117;
                                    fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            case 5:{
                                if (computercount >= 1){
                                    fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                    fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                    if (sorter == 0){
                                        studentchoice[lg].choice1 = lg2;}
                                    if (sorter == 1){
                                        studentchoice[lg].choice2 = lg2;}
                                    if (sorter == 2){
                                        studentchoice[lg].choice3 = lg2;}
                                    computercount = computercount - 1;}
                                else{
                                    lg2 = 117;
                                    fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            case 6:{
                                if (othercount >= 1){
                                    fprintf(other, "%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                                    fprintf(class2, "%d %d %d %d %d %d 117\n",lg,lg3,lg4,lg5,lg6,lg7);
                                    if (sorter == 0){
                                        studentchoice[lg].choice1 = lg2;}
                                    if (sorter == 1){
                                        studentchoice[lg].choice2 = lg2;}
                                    if (sorter == 2){
                                        studentchoice[lg].choice3 = lg2;}
                                    othercount = othercount - 1;}
                                else{
                                    lg2 = 117;
                                    fprintf(overflow2,"%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);}}
                                break;
                            default:
                                break;}
                        hold = lg;}
                    fclose(overflow);
                    fclose(overflow2);
                    int move2 = 2;
                    int holder;
                    FILE * temp;
                    temp = fopen("students.txt", "w+");
                    overflow2 = fopen("secondflow.txt","r");
                    for(int move = 1;move <= move2; move++){
                        move2 = move2 + 1;
                        fscanf(overflow2,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
                        if (lg != holder ){
                            fprintf(temp,"%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);}
                        if (lg == holder){
                        move2 = 0;}
                        holder = lg;}
                    fclose(class2);
                    class2 = fopen("class2.txt", "r");
                    move2=2;
                    for(int move = 1;move <= move2; move++){
                        move2 = move2 + 1;
                        fscanf(class2,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
                        if (lg != holder ){
                            fprintf(temp,"%d %d %d %d %d %d %d\n",lg,lg2,lg3,lg4,lg5,lg6,lg7);}
                        if (lg == holder){
                            move2 = 0;}
                        holder = lg;}
                    fclose(temp);
                    fclose(class2);
                    fclose(overflow2);}
            fclose(tech);
            fclose(art);
            fclose(music);
            fclose(drama);
            fclose(computer);
            fclose(other);
            fclose(overflow2);
            fclose(class2);{
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
                int hunh = 0;
                heck = heck- 2;
                for(int put = 2; put <= heck; put ++){
                    if (studentchoice[put].choice3 ==0 || studentchoice[put].choice2 == 0 || studentchoice[put].choice1 ==0){
                        hunh++;}}
                fscanf(overflow2,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
                if(lg != EOF){
                    for(int move = 1;move <= move2; move++){
                        fprintf(class2," %d %d %d %d %d %d %d ",lg,lg2,lg3,lg4,lg5,lg6,lg7);
                        for(int r = 2;r <= 2; r++){
                            if (lg2 == 117){
                                lg2 = lg3;
                                lg3 = 117;
                                if (lg2 == 117){
                                    lg2 = lg4;
                                    lg4 = 117;
                                    if (lg2 == 117){
                                        lg2 = lg5;
                                        lg5 = 117;
                                        if (lg2 == 117){
                                            lg2 = lg6;
                                            lg6 = 117;
                                            if (lg2 == 117){
                                                lg2 = lg7;
                                                lg7 = 117;
                                                if (lg2 == 117){
                                                    studentchoice[lg].choice3 = 0;}}}}}}
                            if (techcount >= 1 && lg2 == 1){
                                fprintf(tech, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                                studentchoice[lg].choice3 = lg2;
                                techcount--;}
                            else if (artcount >= 1 && lg2 ==2){
                                fprintf(art, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                                studentchoice[lg].choice3 = lg2;
                                artcount--;}
                            else if (musiccount >= 1 && lg2 ==3){
                                fprintf(music, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                                studentchoice[lg].choice3 = lg2;
                                musiccount--;}
                            else if (dramacount >= 1 && lg2 ==4){
                                fprintf(drama, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                                studentchoice[lg].choice3 = lg2;
                                dramacount--;}
                            else if (computercount >= 1 && lg2 ==5){
                                fprintf(computer, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                                studentchoice[lg].choice3 = lg2;
                                computercount--;}
                            else if (othercount >= 1 && lg2 ==6){
                                fprintf(other, "%d %d %d %d %d %d %d\n",lg,lg3,lg4,lg5,lg6,lg7,lg2);
                                studentchoice[lg].choice3 = lg2;
                                othercount--;}
                            else if (techcount <= 0 && lg2 == 1){
                                lg2 = 117;
                                r--;}
                            else if (artcount <= 0 && lg2 ==2){
                                lg2 = 117;
                                r--;}
                            else if (musiccount <= 0 && lg2 ==3){
                                lg2 = 117;
                                r--;}
                            else if (dramacount <= 0 && lg2 ==4){
                                lg2 = 117;
                                r--;}
                            else if (computercount <= 0 && lg2 ==5){
                                lg2 = 117;
                                r--;}
                            else if (othercount <= 0 && lg2 ==6){
                                lg2 = 117;
                                r--;}}
                        int hold= lg;
                        fscanf(overflow2,"%d %d %d %d %d %d %d",&lg,&lg2,&lg3,&lg4,&lg5,&lg6,&lg7);
                        move2 = move2 + 1;
                        if (hold == lg){
                            move2 = 0;}}}
                fclose(tech);
                fclose(art);
                fclose(music);
                fclose(drama);
                fclose(computer);
                fclose(other);
                fclose(overflow2);
                fclose(class2);
                class2 = fopen("class2","r");}
            int s = 1;
            for (int k= 2; k <= heck; k++){
                if (s == 1){
                    s = 2;
                    studentchoice[k].choice4 = 7;}
                else if (s == 2){
                    s = 3;
                    studentchoice[k].choice4 = studentchoice[k].choice3;
                    studentchoice[k].choice3 = 7;}
                else if (s == 3){
                    s = 4;
                    studentchoice[k].choice4 = studentchoice[k].choice3;
                    studentchoice[k].choice3 = studentchoice[k].choice2;
                    studentchoice[k].choice2 = 7;}
                else if(s == 4){
                    s=1;
                    studentchoice[k].choice4 = studentchoice[k].choice3;
                    studentchoice[k].choice3 = studentchoice[k].choice2;
                    studentchoice[k].choice2 = studentchoice[k].choice1;
                    studentchoice[k].choice1 = 7;}}{
                int sortedclass[11][4];
                for(int fil = 0; fil <= 3; fil++){
                    sortedclass [0][fil] = studentcap[0];
                    sortedclass [1][fil] = studentcap[1];
                    sortedclass [2][fil] = studentcap[2];
                    sortedclass [3][fil] = studentcap[3];
                    sortedclass [4][fil] = studentcap[4];
                    sortedclass [5][fil] = studentcap[5];
                    sortedclass [6][fil] = (heck / 4 + 15);}
                int noclassstudents [1000];
                int fail=0;
                for (int h = 0;h <= 999; h++){
                    noclassstudents[h]= 0;}
                for(int sh = 2; sh <=  heck; sh++){
                    for (int period = 0 ; period <= 3; period++){
                    if (studentchoice[sh].choice1 != 0 && studentchoice[sh].choice2 != 0 && studentchoice[sh].choice3 != 0 && studentchoice[sh].choice4 != 0){
                        if( period == 0){
                            if (sortedclass[studentchoice[sh].choice1 - 1][period] >= 1){
                                sortedclass[studentchoice[sh].choice1 - 1][period]--;
                                studentchoice[sh].class1 = studentchoice[sh].choice1;}
                            else if (sortedclass[studentchoice[sh].choice1 - 1][period] ==0){
                                if (sortedclass[studentchoice[sh].choice2 - 1][period] >= 1){
                                    sortedclass[studentchoice[sh].choice2 - 1][period]--;
                                    studentchoice[sh].class1 = studentchoice[sh].choice2;
                                    studentchoice[sh].choice2 = studentchoice[sh].choice1;}
                                else if (sortedclass[studentchoice[sh].choice2 - 1][period] == 0){
                                    if (sortedclass[studentchoice[sh].choice3 - 1][period] >= 1){
                                        sortedclass[studentchoice[sh].choice3 - 1][period]--;
                                        studentchoice[sh].class1 = studentchoice[sh].choice3;
                                        studentchoice[sh].choice3 = studentchoice[sh].choice1;}
                                    else if (sortedclass[studentchoice[sh].choice3 - 1][period] == 0){
                                       if (sortedclass[studentchoice[sh].choice4 - 1][period] >= 1){
                                            sortedclass[studentchoice[sh].choice4 - 1][period]--;
                                            studentchoice[sh].class1 = studentchoice[sh].choice4;
                                            studentchoice[sh].choice4 = studentchoice[sh].choice1;}
                                       else{}}}}}
                        if( period == 1){
                        if (sortedclass[studentchoice[sh].choice2 - 1][period] >= 1){
                            sortedclass[studentchoice[sh].choice2 - 1][period]--;
                            studentchoice[sh].class2 = studentchoice[sh].choice2;}
                        else if (sortedclass[studentchoice[sh].choice2 - 1][period] == 0){
                                if (sortedclass[studentchoice[sh].choice3 - 1][period] >= 1){
                                    sortedclass[studentchoice[sh].choice3 - 1][period]--;
                                    studentchoice[sh].class2 = studentchoice[sh].choice3;
                                    studentchoice[sh].choice3 = studentchoice[sh].choice2;}
                                else if (sortedclass[studentchoice[sh].choice3 - 1][period] == 0){
                                    if (studentchoice[sh].choice4 == 7){
                                        studentchoice[sh].class2 = studentchoice[sh].choice4;
                                        studentchoice[sh].choice4 = studentchoice[sh].choice3;
                                        studentchoice[sh].choice3 = studentchoice[sh].choice2;
                                        studentchoice[sh].choice2 = 7;
                                        sortedclass[6][period]--;}
                                    else if(studentchoice[sh].choice4 != 7){
                                        if (sortedclass[studentchoice[sh].choice4 - 1][period] >= 1){
                                            sortedclass[studentchoice[sh].choice4 - 1][period]--;
                                            studentchoice[sh].class2 = studentchoice[sh].choice4;
                                            studentchoice[sh].choice4 = studentchoice[sh].choice2;}
                                        else if(sortedclass[studentchoice[sh].choice4 - 1][period] ==0){
                                            studentchoice[sh].choice2 = 7;}}}}}
                        if( period == 2){
                        if (sortedclass[studentchoice[sh].choice3 - 1][period] >= 1){
                            sortedclass[studentchoice[sh].choice3 - 1][period]--;
                            studentchoice[sh].class3 = studentchoice[sh].choice3;}
                        else if (sortedclass[studentchoice[sh].choice3 - 1][period] == 0){
                            if (studentchoice[sh].choice4 == 7){
                                studentchoice[sh].class3 = studentchoice[sh].choice4;
                                studentchoice[sh].choice4 = studentchoice[sh].choice3;
                                studentchoice[sh].choice3 = 7;
                                sortedclass[6][period]--;}
                            else if(studentchoice[sh].choice4 != 7){
                                if (sortedclass[studentchoice[sh].choice4 - 1][period] >= 1){
                                    sortedclass[studentchoice[sh].choice4 - 1][period]--;
                                    studentchoice[sh].class3 = studentchoice[sh].choice4;
                                    studentchoice[sh].choice4 = studentchoice[sh].choice3;}
                                else if(sortedclass[studentchoice[sh].choice4 - 1][period] ==0){
                                    sortedclass[6][period]--;
                                    studentchoice[sh].class3 = studentchoice[sh].choice4;
                                    studentchoice[sh].choice3 = 7;}}}}
                        if( period == 3){
                            if(studentchoice[sh].choice4 != 7){
                                if (sortedclass[studentchoice[sh].choice4 - 1][period] >= 1){
                                    sortedclass[studentchoice[sh].choice4 - 1][period]--;
                                    studentchoice[sh].class4 = studentchoice[sh].choice4;}
                                else if(sortedclass[studentchoice[sh].choice4 - 1][period] ==0){
                                    sortedclass[6][period]--;
                                    studentchoice[sh].class4 = studentchoice[sh].choice4;
                                    studentchoice[sh].choice4 = 7;}}
                            else if(studentchoice[sh].choice4 == 7){
                                sortedclass[6][period]--;
                                studentchoice[sh].class4 = studentchoice[sh].choice4;}}}
                    if (studentchoice[sh].choice1 == 0 || studentchoice[sh].choice2 == 0 || studentchoice[sh].choice3 == 0 || studentchoice[sh].choice4 == 0){
                        noclassstudents[fail] = sh;
                        fail = fail + 1;
                        period = 4;}}}
                for(int clean = 0; clean <= 999;clean++){
                    for(int check = 2; check <= heck; check++){
                        if (studentchoice[check].class1 != 0 && studentchoice[check].class2 != 0 && studentchoice[check].class3 != 0 && studentchoice[check].class4 != 0){
                            if (studentchoice[check].class1 == studentchoice[check].class2 || studentchoice[check].class1 == studentchoice[check].class3 || studentchoice[check].class1 == studentchoice[check].class4 || studentchoice[check].class2 == studentchoice[check].class3 ||studentchoice[check].class2 == studentchoice[check].class4|| studentchoice[check].class3 == studentchoice[check].class4){
                                studentchoice[check].class1 = 0;
                                studentchoice[check].class2 = 0;
                                studentchoice[check].class3 = 0;
                                studentchoice[check].class4 = 0;}}}
                    for(int andrew = 2; andrew <= heck; andrew++){
                        if (studentchoice[andrew].class1 == 0 || studentchoice[andrew].class2 == 0 || studentchoice[andrew].class3 == 0 || studentchoice[andrew].class4 == 0){
                            noclassstudents[fail] = andrew;
                            fail = fail +1;}}
                    if (fail == 0){
                        clean = 1000;}
                    if (fail != 0){{
                            int shhhs;
                        if (fail >= 1){ //sorting failed students
                            int class1,class2,class3,class4;
                            for (int d = 0; d <= fail; d ++){
                                int po1[7][2] = {sortedclass [0][0],1,sortedclass [1][0],2,sortedclass [2][0],3,sortedclass [3][0],4,sortedclass [4][0],5,sortedclass [5][0],6,sortedclass [6][0],7};
                                int po2[7][2] = {sortedclass [0][1],1,sortedclass [1][1],2,sortedclass [2][1],3,sortedclass [3][1],4,sortedclass [4][1],5,sortedclass [5][1],6,sortedclass [6][1],7};
                                int po3[7][2] = {sortedclass [0][2],1,sortedclass [1][2],2,sortedclass [2][2],3,sortedclass [3][2],4,sortedclass [4][2],5,sortedclass [5][2],6,sortedclass [6][2],7};
                                int po4[7][2] = {sortedclass [0][3],1,sortedclass [1][3],2,sortedclass [2][3],3,sortedclass [3][3],4,sortedclass [4][3],5,sortedclass [5][3],6,sortedclass [6][3],7};
                                for (int g = 0; g <= 99; g++){ //first class
                                    if(po1[0][0] < po1[1][0]){
                                        shhhs = po1[0][0];
                                        po1[0][0] = po1[1][0];
                                        po1[1][0] = shhhs; //class size
                                        shhhs = po1[0][1];
                                        po1[0][1] = po1[1][1];
                                        po1[1][1] = shhhs;} // actual place
                                    else if(po1[1][0] < po1[2][0]){
                                        shhhs = po1[1][0];
                                        po1[1][0] = po1[2][0];
                                        po1[2][0] = shhhs; //class size
                                        shhhs = po1[1][1];
                                        po1[1][1] = po1[2][1];
                                        po1[2][1] = shhhs;} // actual place
                                    else if(po1[2][0] < po1[3][0]){
                                        shhhs = po1[2][0];
                                        po1[2][0] = po1[3][0];
                                        po1[3][0] = shhhs; //class size
                                        shhhs = po1[2][1];
                                        po1[2][1] = po1[3][1];
                                        po1[3][1] = shhhs;} // actual place
                                    else if(po1[3][0] < po1[4][0]){
                                        shhhs = po1[3][0];
                                        po1[3][0] = po1[4][0];
                                        po1[4][0] = shhhs; //class size
                                        shhhs = po1[3][1];
                                        po1[3][1] = po1[4][1];
                                        po1[4][1] = shhhs;} // actual place
                                    else if(po1[4][0] < po1[5][0]){
                                        shhhs = po1[4][0];
                                        po1[4][0] = po1[5][0];
                                        po1[5][0] = shhhs; //class size
                                        shhhs = po1[4][1];
                                        po1[4][1] = po1[5][1];
                                        po1[5][1] = shhhs;} // actual place
                                    else{g = 100;}}
                                for (int g = 0; g <= 99; g++){ //first class
                                    if(po2[0][0] < po2[1][0]){
                                        shhhs = po2[0][0];
                                        po2[0][0] = po2[1][0];
                                        po2[1][0] = shhhs; //class size
                                        shhhs = po2[0][1];
                                        po2[0][1] = po2[1][1];
                                        po2[1][1] = shhhs;} // actual place
                                    else if(po2[1][0] < po2[2][0]){
                                        shhhs = po2[1][0];
                                        po2[1][0] = po2[2][0];
                                        po2[2][0] = shhhs; //class size
                                        shhhs = po2[1][1];
                                        po2[1][1] = po2[2][1];
                                        po2[2][1] = shhhs;} // actual place
                                    else if(po2[2][0] < po2[3][0]){
                                        shhhs = po2[2][0];
                                        po2[2][0] = po2[3][0];
                                        po2[3][0] = shhhs; //class size
                                        shhhs = po2[2][1];
                                        po2[2][1] = po2[3][1];
                                        po2[3][1] = shhhs; } // actual place
                                    else if(po2[3][0] < po2[4][0]){
                                        shhhs = po2[3][0];
                                        po2[3][0] = po2[4][0];
                                        po2[4][0] = shhhs; //class size
                                        shhhs = po2[3][1];
                                        po2[3][1] = po2[4][1];
                                        po2[4][1] = shhhs;} // actual place
                                    else if(po2[4][0] < po2[5][0]){
                                        shhhs = po2[4][0];
                                        po2[4][0] = po2[5][0];
                                        po2[5][0] = shhhs; //class size
                                        shhhs = po2[4][1];
                                        po2[4][1] = po2[5][1];
                                        po2[5][1] = shhhs;} // actual place
                                    else{g = 100;}}
                                for (int g = 0; g <= 99; g++){ //first class
                                    if(po3[0][0] < po3[1][0]){
                                        shhhs = po3[0][0];
                                        po3[0][0] = po3[1][0];
                                        po3[1][0] = shhhs; //class size
                                        shhhs = po3[0][1];
                                        po3[0][1] = po3[1][1];
                                        po3[1][1] = shhhs;} // actual place
                                    else if(po3[1][0] < po3[2][0]){
                                        shhhs = po3[1][0];
                                        po3[1][0] = po3[2][0];
                                        po3[2][0] = shhhs; //class size
                                        shhhs = po3[1][1];
                                        po3[1][1] = po3[2][1];
                                        po3[2][1] = shhhs; } // actual place
                                    else if(po3[2][0] < po3[3][0]){
                                        shhhs = po3[2][0];
                                        po3[2][0] = po3[3][0];
                                        po3[3][0] = shhhs; //class size
                                        shhhs = po3[2][1];
                                        po3[2][1] = po3[3][1];
                                        po3[3][1] = shhhs; }// actual place
                                    else if(po3[3][0] < po3[4][0]){
                                        shhhs = po3[3][0];
                                        po3[3][0] = po3[4][0];
                                        po3[4][0] = shhhs; //class size
                                        shhhs = po3[3][1];
                                        po3[3][1] = po3[4][1];
                                        po3[4][1] = shhhs;} // actual place
                                    else if(po3[4][0] < po3[5][0]){
                                        shhhs = po3[4][0];
                                        po3[4][0] = po3[5][0];
                                        po3[5][0] = shhhs; //class size
                                        shhhs = po3[4][1];
                                        po3[4][1] = po3[5][1];
                                        po3[5][1] = shhhs;} // actual place
                                    else{g = 100;}}
                                for (int g = 0; g <= 99; g++){ //first class
                                    if(po4[0][0] < po4[1][0]){
                                        shhhs = po4[0][0];
                                        po4[0][0] = po4[1][0];
                                        po4[1][0] = shhhs; //class size
                                        shhhs = po4[0][1];
                                        po4[0][1] = po4[1][1];
                                        po4[1][1] = shhhs;} // actual place
                                    else if(po4[1][0] < po4[2][0]){
                                        shhhs = po4[1][0];
                                        po4[1][0] = po4[2][0];
                                        po4[2][0] = shhhs; //class size
                                        shhhs = po4[1][1];
                                        po4[1][1] = po4[2][1];
                                        po4[2][1] = shhhs; } // actual place
                                    else if(po4[2][0] < po4[3][0]){
                                        shhhs = po4[2][0];
                                        po4[2][0] = po4[3][0];
                                        po4[3][0] = shhhs; //class size
                                        shhhs = po4[2][1];
                                        po4[2][1] = po4[3][1];
                                        po4[3][1] = shhhs;} // actual place
                                    else if(po4[3][0] < po4[4][0]){
                                        shhhs = po4[3][0];
                                        po4[3][0] = po4[4][0];
                                        po4[4][0] = shhhs; //class size
                                        shhhs = po4[3][1];
                                        po4[3][1] = po4[4][1];
                                        po4[4][1] = shhhs;} // actual place
                                    else if(po4[4][0] < po4[5][0]){
                                        shhhs = po4[4][0];
                                        po4[4][0] = po4[5][0];
                                        po4[5][0] = shhhs; //class size
                                        shhhs = po4[4][1];
                                        po4[4][1] = po4[5][1];
                                        po4[5][1] = shhhs;} // actual place
                                    else{g = 100;}}
                                if (god== 1){
                                    class1 = 7;
                                    class2 = po2[0][1];
                                    class3 = po3[0][1];
                                    class4 = po4[0][1];
                                    if( class3 == class2){
                                        class3 = po3[1][1];}
                                    if( class4 == class2||class4 == class3){
                                        class4 = po4[1][1];
                                        if( class4 == class2||class4 == class3){
                                            class4 = po4[2][1];}}}
                                if (god== 2){
                                    class2 = 7;
                                    class1 = po1[0][1];
                                    class3 = po3[0][1];
                                    class4 = po4[0][1];
                                    if( class3 == class1){
                                        class3 = po3[1][1];}
                                    if( class4== class1||class4 == class3){
                                        class4 = po4[1][1];
                                        if( class4 == class1||class4 == class3){
                                            class4 = po4[2][1];}}}
                                if (god == 3){
                                    class3 = 7;
                                    class2 = po2[0][1];
                                    class1 = po1[0][1];
                                    class4 = po4[0][1];
                                    if( class2 == class1){
                                        class2 = po2[1][1];}
                                    if( class4 == class1||class4 == class2){
                                        class4 = po4[1][1];
                                        if( class4 == class1||class4 == class2){
                                            class4 = po4[2][1];}}}
                                if (god== 4){
                            class4 = 7;
                            class2 = po2[0][1];
                            class3 = po3[0][1];
                            class1 = po1[0][1];
                            if( class2 == class1){
                                class2 = po2[1][1];}
                            if( class3 == class2||class3 == class1){
                                class3 = po3[1][1];
                                if( class3 == class2||class3 == class1){
                                    class3 = po3[2][1];}}}
                            if (god== 5){
                                class1 = 7;
                                class2 = po2 [0][1];
                                class3 = po3 [0][1];
                                class4 = po4 [0][1];
                                if (class3 == class4){
                                    class3 = po3[1][1];}
                                if(class2 == class3 || class2 == class4 ){
                                    class2 = po2[1][1];
                                    if(class2 == class3 || class2 == class4 ){
                                        class2 = po2[2][1];}}}
                            if (god== 6){
                                class1 = po1 [0][1];
                                class2 = 7;
                                class3 = po3 [0][1];
                                class4 = po4 [0][1];
                                if (class3 == class4){
                                    class3 = po3[1][1];}
                                if(class1 == class3 || class1 == class4 ){
                                    class1 = po1[1][1];
                                    if(class1 == class3 || class1 == class4 ){
                                        class1 = po1[2][1];}}}
                            if (god== 7){
                                class1 = po1 [0][1];
                                class2 = po2 [0][1];
                                class3 = 7;
                                class4 = po4 [0][1];
                                if (class2 == class4){
                                    class2 = po2[1][1];}
                                if(class1 == class2 || class1 == class1 ){
                                    class1 = po1[1][1];
                                    if(class1 == class2 || class1 == class1){
                                        class1 = po1[2][1];}}}
                            if (god== 8){
                                class1 = po1 [0][1];
                                class2 = po2 [0][1];
                                class3 = po3 [0][1];
                                class4 = 7;
                                if (class2 == class3){
                                    class2 = po2[1][1];}
                                if(class1 == class2 || class1 == class3 ){
                                    class1 = po1[1][1];
                                    if(class1 == class2 || class1 == class3 ){
                                        class1 = po1[2][1];}}
                             god= 0;}
                           // if ( sortedclass[class1-1][0] >= 1 && sortedclass[class2-1][1] >= 1 && sortedclass[class3-1][2] >= 1 && sortedclass[class4-1][3] >= 1)
                                studentchoice[noclassstudents[d]].class1 = class1;
                                studentchoice[noclassstudents[d]].class2 = class2;
                                studentchoice[noclassstudents[d]].class3 = class3;
                                studentchoice[noclassstudents[d]].class4 = class4;
                                sortedclass[class1-1][0]--;
                                sortedclass[class2-1][1]--;
                                sortedclass[class3-1][2]--;
                                sortedclass[class4-1][3]--;
                          god = god + 1;}}}}
                        int duplicates[9999];
                        int andrew = 0;
                        for (int nick = 2; nick <= heck; nick++){
                            if(studentchoice[nick].class1 == 0 ||studentchoice[nick].class2 == 0 ||studentchoice[nick].class3 == 0 ||studentchoice[nick].class4 == 0 ){
                                duplicates[andrew] = nick;
                                andrew = andrew + 1;}}
                        int jack;
                        int kyle = 0;
                        for(int duke= 0; duke <= andrew;duke++){
                            int class1,class2,class3,class4;
                            kyle = kyle + 1;
                            int po1[7][2] = {sortedclass [0][0],1,sortedclass [1][0],2,sortedclass [2][0],3,sortedclass [3][0],4,sortedclass [4][0],5,sortedclass [5][0],6,sortedclass [6][0],7};
                            int po2[7][2] = {sortedclass [0][1],1,sortedclass [1][1],2,sortedclass [2][1],3,sortedclass [3][1],4,sortedclass [4][1],5,sortedclass [5][1],6,sortedclass [6][1],7};
                            int po3[7][2] = {sortedclass [0][2],1,sortedclass [1][2],2,sortedclass [2][2],3,sortedclass [3][2],4,sortedclass [4][2],5,sortedclass [5][2],6,sortedclass [6][2],7};
                            int po4[7][2] = {sortedclass [0][3],1,sortedclass [1][3],2,sortedclass [2][3],3,sortedclass [3][3],4,sortedclass [4][3],5,sortedclass [5][3],6,sortedclass [6][3],7};
                                for (int g = 0; g <= 99; g++){ //first class
                                    if(po1[0][0] < po1[1][0]){
                                        jack = po1[0][0];
                                        po1[0][0] = po1[1][0];
                                        po1[1][0] = jack; //class size
                                        jack = po1[0][1];
                                        po1[0][1] = po1[1][1];
                                        po1[1][1] = jack;} // actual place
                                    else if(po1[1][0] < po1[2][0]){
                                        jack = po1[1][0];
                                        po1[1][0] = po1[2][0];
                                        po1[2][0] = jack; //class size
                                        jack = po1[1][1];
                                        po1[1][1] = po1[2][1];
                                        po1[2][1] = jack;} // actual place
                                    else if(po1[2][0] < po1[3][0]){
                                        jack = po1[2][0];
                                        po1[2][0] = po1[3][0];
                                        po1[3][0] = jack; //class size
                                        jack = po1[2][1];
                                        po1[2][1] = po1[3][1];
                                        po1[3][1] = jack;} // actual place
                                    else if(po1[3][0] < po1[4][0]){
                                        jack = po1[3][0];
                                        po1[3][0] = po1[4][0];
                                        po1[4][0] = jack; //class size
                                        jack = po1[3][1];
                                        po1[3][1] = po1[4][1];
                                        po1[4][1] = jack;} // actual place
                                    else if(po1[4][0] < po1[5][0]){
                                        jack = po1[4][0];
                                        po1[4][0] = po1[5][0];
                                        po1[5][0] = jack; //class size
                                        jack = po1[4][1];
                                        po1[4][1] = po1[5][1];
                                        po1[5][1] = jack;} // actual place
                                    else{g = 100;}}
                                for (int g = 0; g <= 99; g++){ //first class
                                    if(po2[0][0] < po2[1][0]){
                                        jack = po2[0][0];
                                        po2[0][0] = po2[1][0];
                                        po2[1][0] = jack; //class size
                                        jack = po2[0][1];
                                        po2[0][1] = po2[1][1];
                                        po2[1][1] = jack;} // actual place
                                    else if(po2[1][0] < po2[2][0]){
                                        jack = po2[1][0];
                                        po2[1][0] = po2[2][0];
                                        po2[2][0] = jack; //class size
                                        jack = po2[1][1];
                                        po2[1][1] = po2[2][1];
                                        po2[2][1] = jack;} // actual place
                                    else if(po2[2][0] < po2[3][0]){
                                        jack = po2[2][0];
                                        po2[2][0] = po2[3][0];
                                        po2[3][0] = jack; //class size
                                        jack = po2[2][1];
                                        po2[2][1] = po2[3][1];
                                        po2[3][1] = jack; } // actual place
                                    else if(po2[3][0] < po2[4][0]){
                                        jack = po2[3][0];
                                        po2[3][0] = po2[4][0];
                                        po2[4][0] = jack; //class size
                                        jack = po2[3][1];
                                        po2[3][1] = po2[4][1];
                                        po2[4][1] = jack;} // actual place
                                    else if(po2[4][0] < po2[5][0]){
                                        jack = po2[4][0];
                                        po2[4][0] = po2[5][0];
                                        po2[5][0] = jack; //class size
                                        jack = po2[4][1];
                                        po2[4][1] = po2[5][1];
                                        po2[5][1] = jack;} // actual place
                                    else{g = 100;}}
                                for (int g = 0; g <= 99; g++){ //first class
                                    if(po3[0][0] < po3[1][0]){
                                        jack = po3[0][0];
                                        po3[0][0] = po3[1][0];
                                        po3[1][0] = jack; //class size
                                        jack = po3[0][1];
                                        po3[0][1] = po3[1][1];
                                        po3[1][1] = jack;} // actual place
                                    else if(po3[1][0] < po3[2][0]){
                                        jack = po3[1][0];
                                        po3[1][0] = po3[2][0];
                                        po3[2][0] = jack; //class size
                                        jack = po3[1][1];
                                        po3[1][1] = po3[2][1];
                                        po3[2][1] = jack; } // actual place
                                    else if(po3[2][0] < po3[3][0]){
                                        jack = po3[2][0];
                                        po3[2][0] = po3[3][0];
                                        po3[3][0] = jack; //class size
                                        jack = po3[2][1];
                                        po3[2][1] = po3[3][1];
                                        po3[3][1] = jack; }// actual place
                                    else if(po3[3][0] < po3[4][0]){
                                        jack = po3[3][0];
                                        po3[3][0] = po3[4][0];
                                        po3[4][0] = jack; //class size
                                        jack = po3[3][1];
                                        po3[3][1] = po3[4][1];
                                        po3[4][1] = jack;} // actual place
                                    else if(po3[4][0] < po3[5][0]){
                                        jack = po3[4][0];
                                        po3[4][0] = po3[5][0];
                                        po3[5][0] = jack; //class size
                                        jack = po3[4][1];
                                        po3[4][1] = po3[5][1];
                                        po3[5][1] = jack;} // actual place
                                    else{g = 100;}}
                                for (int g = 0; g <= 99; g++){ //first class
                                    if(po4[0][0] < po4[1][0]){
                                        jack = po4[0][0];
                                        po4[0][0] = po4[1][0];
                                        po4[1][0] = jack; //class size
                                        jack = po4[0][1];
                                        po4[0][1] = po4[1][1];
                                        po4[1][1] = jack;} // actual place
                                    else if(po4[1][0] < po4[2][0]){
                                        jack = po4[1][0];
                                        po4[1][0] = po4[2][0];
                                        po4[2][0] = jack; //class size
                                        jack = po4[1][1];
                                        po4[1][1] = po4[2][1];
                                        po4[2][1] = jack; } // actual place
                                    else if(po4[2][0] < po4[3][0]){
                                        jack = po4[2][0];
                                        po4[2][0] = po4[3][0];
                                        po4[3][0] = jack; //class size
                                        jack = po4[2][1];
                                        po4[2][1] = po4[3][1];
                                        po4[3][1] = jack;} // actual place
                                    else if(po4[3][0] < po4[4][0]){
                                        jack = po4[3][0];
                                        po4[3][0] = po4[4][0];
                                        po4[4][0] = jack; //class size
                                        jack = po4[3][1];
                                        po4[3][1] = po4[4][1];
                                        po4[4][1] = jack;} // actual place
                                    else if(po4[4][0] < po4[5][0]){
                                        jack = po4[4][0];
                                        po4[4][0] = po4[5][0];
                                        po4[5][0] = jack; //class size
                                        jack = po4[4][1];
                                        po4[4][1] = po4[5][1];
                                        po4[5][1] = jack;} // actual place
                                    else{g = 100;}}
                                    if (kyle == 1){
                                    class1 = 7;
                                    class2 = po2[0][1];
                                    class3 = po3[0][1];
                                    class4 = po4[0][1];
                                    if( class3 == class2){
                                        class3 = po3[1][1];}
                                    if( class4 == class2||class4 == class3){
                                        class4 = po4[1][1];
                                        if( class4 == class2||class4 == class3){
                                            class4 = po4[2][1];}}}
                                if (kyle == 2){
                                    class2 = 7;
                                    class1 = po1[0][1];
                                    class3 = po3[0][1];
                                    class4 = po4[0][1];
                                    if( class3 == class1){
                                        class3 = po3[1][1];}
                                    if( class4== class1||class4 == class3){
                                        class4 = po4[1][1];
                                        if( class4 == class1||class4 == class3){
                                            class4 = po4[2][1];}}}
                                if (kyle == 3){
                                    class3 = 7;
                                    class2 = po2[0][1];
                                    class1 = po1[0][1];
                                    class4 = po4[0][1];
                                    if( class2 == class1){
                                        class2 = po2[1][1];}
                                    if( class4 == class1||class4 == class2){
                                        class4 = po4[1][1];
                                        if( class4 == class1||class4 == class2){
                                            class4 = po4[2][1];}}}
                                if (kyle == 4){
                            class4 = 7;
                            class2 = po2[0][1];
                            class3 = po3[0][1];
                            class1 = po1[0][1];
                            if( class2 == class1){
                                class2 = po2[1][1];}
                            if( class3 == class2||class3 == class1){
                                class3 = po3[1][1];
                                if( class3 == class2||class3 == class1){
                                    class3 = po3[2][1];}}}
if(class1 != 0&& class2 != 0&& class3 != 0&& class4 != 0){
 if ( sortedclass[class1-1][0] >= 1 && sortedclass[class2-1][1] >= 1 && sortedclass[class3-1][2] >= 1 && sortedclass[class4-1][3] >= 1){
    studentchoice[noclassstudents[duke]].class1 = class1;
    studentchoice[noclassstudents[duke]].class2 = class2;
    studentchoice[noclassstudents[duke]].class3 = class3;
    studentchoice[noclassstudents[duke]].class4 = class4;
    sortedclass[class1-1][0]--;
    sortedclass[class2-1][1]--;
    sortedclass[class3-1][2]--;
    sortedclass[class4-1][3]--;}
else {}}
else{
    duplicates[andrew] = duplicates[duke];
    andrew = andrew +1;}}
                    fail = 0;
                    /*if(clean >= 999){
                        int tomany[]= {0,0,0,0,0,0,0};
                        for(int keegan = 2; keegan <= heck; keegan++){
                            tomany[studentchoice[keegan].class1 -1]++;
                            tomany[studentchoice[keegan].class2 -1]++;
                            tomany[studentchoice[keegan].class3 -1]++;
                            tomany[studentchoice[keegan].class4 -1]++;
                            printf("%d ",keegan - 1);
                            if (studentchoice[keegan].class1 == 1 || studentchoice[keegan].class2 == 1 || studentchoice[keegan].class3 == 1 || studentchoice[keegan].class4 == 1){
                                SetColor(4);}
                            printf("%d ",tomany[0]);
                            SetColor(7);
                            if (studentchoice[keegan].class1 == 2 || studentchoice[keegan].class2 == 2 || studentchoice[keegan].class3 == 2 || studentchoice[keegan].class4 == 2){
                                SetColor(4);}
                            printf("%d ",tomany[1]);
                            SetColor(7);
                            if (studentchoice[keegan].class1 == 3 || studentchoice[keegan].class2 == 3 || studentchoice[keegan].class3 == 3 || studentchoice[keegan].class4 == 3){
                                SetColor(4);}
                            printf("%d ",tomany[2]);
                            SetColor(7);
                            if (studentchoice[keegan].class1 == 4 || studentchoice[keegan].class2 == 4 || studentchoice[keegan].class3 == 4 || studentchoice[keegan].class4 == 4){
                                SetColor(4);}
                            printf("%d ",tomany[3]);
                            SetColor(7);
                            if (studentchoice[keegan].class1 == 5 || studentchoice[keegan].class2 == 5 || studentchoice[keegan].class3 == 5 || studentchoice[keegan].class4 == 5){
                                SetColor(4);}
                            printf("%d ",tomany[4]);
                            SetColor(7);
                            if (studentchoice[keegan].class1 == 6 || studentchoice[keegan].class2 == 6 || studentchoice[keegan].class3 == 6 || studentchoice[keegan].class4 == 6){
                                SetColor(4);}
                            printf("%d ",tomany[5]);
                            SetColor(7);
                            if (studentchoice[keegan].class1 == 7 || studentchoice[keegan].class2 == 7 || studentchoice[keegan].class3 == 7 || studentchoice[keegan].class4 == 7){
                                SetColor(4);}
                            printf("%d\n\n",tomany[6]);
                            SetColor(7);}}*/}}
            studentchecker =1;
            FILE * DoomGuy;
            DoomGuy = fopen("DoomGuy.csv","w+");
            for(int spltr = 2; spltr <= heck; spltr++){
                studentchecker++;
                fprintf(DoomGuy,"%s, %s",student[studentchecker].NameFirst,student[studentchecker].NameLast);
                if(studentchoice[studentchecker].class1 == 1){
                fprintf(DoomGuy,",Design and Technology");}
                if(studentchoice[studentchecker].class1 == 2){
                fprintf(DoomGuy,",Art");}
                if(studentchoice[studentchecker].class1 == 3){
                fprintf(DoomGuy,",Music/Vocals");}
                if(studentchoice[studentchecker].class1 == 4){
                fprintf(DoomGuy,",Drama");}
                if(studentchoice[studentchecker].class1 == 5){
                fprintf(DoomGuy,",Computer Applications");}
                if(studentchoice[studentchecker].class1 == 6){
                fprintf(DoomGuy,",Family Studies");}
                if(studentchoice[studentchecker].class1 == 7){
                fprintf(DoomGuy,",Guidance");}
                if(studentchoice[studentchecker].class2 == 1){
                fprintf(DoomGuy,",Design and Technology");}
                if(studentchoice[studentchecker].class2 == 2){
                fprintf(DoomGuy,",Art");}
                if(studentchoice[studentchecker].class2 == 3){
                fprintf(DoomGuy,",Music/Vocals");}
                if(studentchoice[studentchecker].class2 == 4){
                fprintf(DoomGuy,",Drama");}
                if(studentchoice[studentchecker].class2 == 5){
                fprintf(DoomGuy,",Computer Applications");}
                if(studentchoice[studentchecker].class2 == 6){
                fprintf(DoomGuy,",Family Studies");}
                if(studentchoice[studentchecker].class2 == 7){
                fprintf(DoomGuy,",Guidance");}
                if(studentchoice[studentchecker].class3 == 1){
                fprintf(DoomGuy,",Design and Technology");}
                if(studentchoice[studentchecker].class3 == 2){
                fprintf(DoomGuy,",Art");}
                if(studentchoice[studentchecker].class3 == 3){
                fprintf(DoomGuy,",Music/Vocals");}
                if(studentchoice[studentchecker].class3 == 4){
                fprintf(DoomGuy,",Drama");}
                if(studentchoice[studentchecker].class3 == 5){
                fprintf(DoomGuy,",Computer Applications");}
                if(studentchoice[studentchecker].class3 == 6){
                fprintf(DoomGuy,",Family Studies");}
                if(studentchoice[studentchecker].class3 == 7){
                fprintf(DoomGuy,",Guidance");}
                if(studentchoice[studentchecker].class4 == 1){
                fprintf(DoomGuy,",Design and Technology");}
                if(studentchoice[studentchecker].class4 == 2){
                fprintf(DoomGuy,",Art");}
                if(studentchoice[studentchecker].class4 == 3){
                fprintf(DoomGuy,",Music/Vocals");}
                if(studentchoice[studentchecker].class4 == 4){
                fprintf(DoomGuy,",Drama");}
                if(studentchoice[studentchecker].class4 == 5){
                fprintf(DoomGuy,",Computer Applications");}
                if(studentchoice[studentchecker].class4 == 6){
                fprintf(DoomGuy,",Family Studies");}
                if(studentchoice[studentchecker].class4 == 7){
                fprintf(DoomGuy,",Guidance");}
                fprintf(DoomGuy,", %s, %s\n",student[studentchecker].School,student[studentchecker].Teacher);} // print to csv file
            fclose(DoomGuy);
            fclose(class2);
            fclose(other);
            fclose(computer);
            fclose(drama);
            fclose(music);
            fclose(tech);
            printf("the sorting program has finished sorting: %d students.\n\n\n\n",heck);
            printf("this program was created by:\nKeegan Andrus, Duke Gand, Nick Honrath,\nKyle Leamen, Jack Ivy, Andrew Krynski\n\n"); //put your names in boys
            return 0;}}
