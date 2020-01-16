#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int structuretofile()
{
FILE * shven;
shven = fopen("students2.txt", "r+");
FILE * stud;
stud = fopen("students.txt", "w+");

int end=3;
for (int loop = 1; loop <= end; loop++ )
{

}
fclose(shven);
fclose(stud);

}

