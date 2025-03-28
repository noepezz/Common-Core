/*Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$*/
#include <unistd.h>
#include <stdbool.h>
bool check(char *s1, char c, int pos){
	int i = 0;
	while (i < pos){
		if (s1[i] == c)
			return true;
		i++;
	}
	return false;
}

void inter(char *s1, char *s2){
	int i = 0;
	int j;
	
	while (s1[i] != '\0'){
		j = 0;
		while (s2[j] != '\0'){
			if (s2[j] == s1[i]){
				if (check(s1, s1[i], i)==false){
					write(1, &s1[i], 1);
					break ;
					}
			}
			j++;
			}
		i++;
		}
}

int main (int ac, char **av){
	
	if (ac == 3){
		inter(av[1], av[2]);
	}
	write(1, "\n", 1);
	return 0;
}
