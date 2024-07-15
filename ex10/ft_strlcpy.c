
#include <stdio.h>


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    i=0;
    while (dest[i]!='\0')
    {
        i++;
    }
    j=0;
    while (src[j]!='\0'&& j<size)
    {
        dest[i+j]=src[j];
        j++;
    }
      dest[i+j]='\0';
      i=0;
    while (src[i])
    {
        i++;
    }
    return (i);   
}

int main()
{
    char src[10]="ABC%ERT";
    char dest[10]="cd";

    unsigned int nb=8;

    printf("%d\n",ft_strlcpy(dest,src,nb));
    return (0);

}