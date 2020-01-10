#include <stdio.h>
#include <stdlib.h>

#define MAXCHAR 1000
int main()
{
    FILE*fp;
    char str[MAXCHAR];
    char* filename = "c:\\Users\\EngAdmin\\Downloads\\Shawk-n-Awe-master\\Shawk-n-Awe-master\\ExcelStuff\\Experience a Day 2019 CSV Converted.txt";
    int n = 0;
    int dontstop = 0;

    fp = fopen(filename, "r");
    if(fp==NULL){
        printf("Could not open file %s",filename);
        return 1;
    }

while (!feof (fp)) {
        if (fgets(str, sizeof (str), fp)) {
while(str != '/n'){
    printf("Bruh: %c",str[n]);
    n++;
}
          printf("next str= %s\n", str);


        }
      }

///printf("%d\n",str);
fclose(fp);
return 0;
}
    ///Bigger While Loop




/*
while (!feof (fp)) {
        if (fgets(line, sizeof (line), fp) {
          printf("next line= %s\n", line);
          parse(line, input_records[nrecs]);
          nrecs++;
        }
      }
*/

    //


