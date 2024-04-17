int ft_toupper(int c)
{
    if(c >= 65 && c <= 90)
    {
        c += 32;
        return(c);
    }
    return(c);
}
#include <stdio.h>

int main(void)
{
    char c;

    c = ft_toupper('L');
    printf("%c", c);
    return(0);
}