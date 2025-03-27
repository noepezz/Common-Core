#include <unistd.h>
void search_and_replace(char *str,  char toRepl, char replace){
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] == toRepl){
            str[i] = replace;
        }
        write(1, &str[i], 1);
        i++;
    }
} 
int main(int ac, char **av){
    if (ac == 4){
        //int i = 0;
        search_and_replace(av[1], av[2][0], av[3][0]);
    }
    write(1, "\n", 1);
    return 0;
}