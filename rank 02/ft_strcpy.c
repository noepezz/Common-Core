/*Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);*/
#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2){
    int i = 0;

    while(s2[i] != '\0'){
 //       printf ("%d/n", i);
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

int main (){
    char *dest;
    char *src = "ciao";

    ft_strcpy(dest, src);
    printf("%s", dest);
    return 0;
}