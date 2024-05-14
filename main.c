/*int main(void)
{
    char info[] = "Hola";
    size_t n = 2;
    ft_bzero(info ,n);
    printf("%s", info);
    return(0);



    int c;

    c = ft_isalpha('A');
    printf("\n\n%d\n\n\n",c);
    return(0);



    int c;

    c = ft_isascii('a');
    printf("\n\n%d\n\n\n",c);
    return(0);



    char c;

    c = ft_toupper('L');
    printf("%c", c);
    return(0);



    char destino[] = "Muy bienP";
    char source[] = "Hola que tal";
    size_t n = 10;
    printf("%s", ft_memcpy(destino, source, n));
    return(0);



    char destino[] = "Muy bienP";
    char source[] = "Hola asl";
    size_t len = 5;
    printf("%s", memmove(destino, source, len));
    return(0);



    char info[4] = "hola";
    int c = 'j';
    size_t len = 5;
    printf("%s", ft_memset(info, c, len));
    return(0);



    char c[] = "funciona";


    printf ("%zu", ft_strlen (c));
    return (0);

    char *ft_strrchr (const char *s, int c)
{
    unsigned char ch;
    int i;

    ch = c;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    if (ch == 0)
    {
        return (&((char *)s)[i]);
    }
    while(i > 0)
    {
        if(s[i] == ch)
        {
            return ((char *)&s[i]);
        }
        i--;
    }
    return(NULL);
}
#include "libft.h"

    void *ft_memchr(const void *s, int c, size_t n)
    {
        char p;
        const char *x;
        size_t i;

        x = (const char*)s;
        p = ( char)c;
        i = 0;
        while (i < n)
        {
            if(x[i] == ( char)p)
            {
                return (&((void *)x)[i]);
            }
            i++;
        }
        if(n == 0)
        {
            return(NULL);
        }
        return (NULL);
    }


int main(void)
{
    const char p[]= "funciona";
    char p2[] = "";
    printf("%s", ft_strdup(p));
    return (0);
}

int main(void)
{
    char str[] = "Hola";
    char str2[] = "Paco";
    printf("%s", ft_strjoin(str, str2));
    return(0);
}
static size_t ft_count(const char *s, char c)
{
    size_t count;
    size_t i;
    
    i = 0;
    if ((s[0] != c) && (s[0] != '\0'))
    {
        count = 1;
    }
    while (s[i] != '\0')
    {
        if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != '\0'))
            count++;
    i++;
    }
    return(count);
}

int main (void)
{
    char c = '_';
    printf("%zu", ft_count("fuckin_split_y_su_padre", c));
    
    return(0);
}

/* #include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *new;

    new = malloc(sizeof(struct s_list));
    if (!new)
    {
        free(new);
        return(NULL);
    }
    return(new);
} */
}*/
 
