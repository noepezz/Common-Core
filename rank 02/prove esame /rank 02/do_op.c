/*Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$*/

int is_num(char *str){
    while (*str != '\0'){
        if (*str >= 0 && *str <= 9)
            return 0;
    }
    return 1;
}

int is_sign(char c){
    if (c == "/" || c == "*" || c == "-" || c == "+" || c == "%")
        return 0;
    else 
        return 1; 
}

void do_op(char *nb1, char op, char *nb2){
    int *result = 0;
    int n1 = atoi(nb1);
    int n2 = atoi(nb2);

    if (is_num(n1) == 1 || is_sign(op) == 1 || is_num(n2) == 1)
        return ;
    if (op == "/")
        result += (n1/n2);
    if (op == "*")
        result += (n1*n2);
    if (op == "-")
        result += (n1-n2);
    if (op == "+")
        result += (n1+n2);
    if (op == "%")
        result += (n1%n2);
    printf ("%s", result);
}
int main (int ac, char **av){
    int i = 0;
    if(ac == 4 && *av[i] == '\0')
}