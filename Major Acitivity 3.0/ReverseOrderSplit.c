#include <stdio.h>
#include <string.h>
int main(){
    char string[100];
    char *strings[10][10];
    printf("Enter any string: ");
    scanf("%[^\n]s",string);
    char *tokens = strtok(string," ");
    int x = 0;
    while (tokens != NULL)
    {
        
        strings[x][0] = tokens;
        tokens = strtok(NULL," ");
        x++;
    }
    --x;
    printf("Reverse ordered words\n");
    while(x>=0)
    {
         printf("%s ",strings[x][0]);
         x--;
    }
}