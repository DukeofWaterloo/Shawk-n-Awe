#include <stdio.h>
#include <stdlib.h>
/// So what's needed is to read information from a structure and print it out in a text
/// Make a sample structure then read from it and sent it to a text structure
int main()
{
    char str[1000];
    FILE *fptr;

    fptr = fopen("/home/odup/Documents/FileIO/file.txt","r+");

    printf("Hello FileIO World!\n");

    ///Safety Code so things don't go BOOM
    if (fptr == NULL) {
        printf("You goofed UP");
        exit(1);

    }
    ///So basically this is input
    printf("Enter a sentence:\n");
    fgets(str,sizeof(str),stdin);

    ///So basically this is a IO write
    for (int i=0;i<6;i++) {
    fprintf(fptr,"%s",str);
    }


    fscanf(fptr,"%[^\n]",str);
    printf("\nSo bascially, \n%s", str);

    fclose(fptr);
    return 0;
}
