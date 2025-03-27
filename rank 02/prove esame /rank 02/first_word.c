#include <unistd.h>

char ft_putchar(char c){
   return (write (1, &c, 1));
}

void first_word(char *str)
{
    int i = 0;
    while (str[i] == ' ')
        i++;

    while (str[i] && str[i] != ' ')
    {
        ft_putchar(str[i]);
      i++;
    }
    ft_putchar('\n');
}

int main (int argc, char **argv){
    if (argc == 2)
        first_word(argv[1]);
    else
        ft_putchar('\n');
    return (0);
}