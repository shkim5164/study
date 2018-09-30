char * strup(char *s){
    char * p;
    p = (char *)malloc(strlen(s)+1);
    if(p != NULL)
        strcpy(p,s);
        return p;
}

#include <stdio.h>

void main(){
    FILE * fp = fopen("input.txt", "r");
    char buffer[100];
    while (fscanf(fp, "%s", buffer) != EOP)
        printf("%s", buffer);
    fclose(fp);
}