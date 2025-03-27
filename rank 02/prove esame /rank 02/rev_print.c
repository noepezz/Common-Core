/*Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$*/
#include <unistd.h>
#include <stdlib.h>
void ft_putstr(char *str){
    int i = 0;
    while (str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
}

int ft_strlen(char *str){
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}
void reverse(char *str){
    int len = ft_strlen(str);
    char temp[len + 1];
    int i = 0;

    while (len > 0){
        len--;
        temp[i] = str[len];
        i++;
    }
    temp[i] = '\0';
    ft_putstr(temp);
}
int main (int ac, char **av){
    
    if (ac == 2){
        reverse(av[1]);
    }
    write(1, "\n", 2);
    return 0;
}