#include <stdio.h>
void read_log(char fname[]);
void add_log(char line[], char fname[]);

int main(){
    char line[255];
    char fname[] = "log.txt";
   printf("add log :  ");
   scanf("%s", line);
   add_log(line ,fname );
//    read_log(fname);

    return 0;
}

void read_log(char fname[]){
    char line[255];
    FILE * fpointer = fopen(fname, "r");
    fgets(line, 255,fpointer);
    printf("%s", line);
    fclose(fpointer);
}
void add_log(char line[], char fname[]){

    FILE * fpointer = fopen(fname,"a");
        fprintf(fpointer,"\n");
        fprintf(fpointer, line);
    fclose(fpointer);
}

