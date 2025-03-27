int ft_atoi(char *nb){
    int i = 0;
    int sign = 1;
    int n = 0; 
    while (nb[i] >= 9 && nb[i] <= 13 || nb[i] == 32)
        i++;
    if (nb[i] == "-"){
        sign = sign * (-1);
        i++;
    }
    else if (nb[i] == "+")
        i++;
    while (nb >= '0' && nb <= '9' && nb != '\0'){
        n = n *10 +(nb[i] - '0');
        i++;
    }
    return sign * n;
}