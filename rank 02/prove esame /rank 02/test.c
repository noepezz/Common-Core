#include <signal.h>

int main(void)
{
    kill(1, -1);
    return (0);
}