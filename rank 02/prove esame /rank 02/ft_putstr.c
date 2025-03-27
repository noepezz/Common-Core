
/*Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);*/
#include <unistd.h>
void ft_putstr(char *str){
    int len = 0;

    while (str[len] != '\0'){
        write(1, &str[len], 1);
        len++;
    }
}

int main (){
    char *str = "ciao";
    ft_putstr(str);
    return 0; 
}
