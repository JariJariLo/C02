#include <stdio.h>
int is_alpha(char c)
{
	return ((c>='A'&&c<='Z')||(c>='a'&&c<='z'));

}
int lowercase(char c)
{
    return ((c>='a'&&c<='z'));
	
}

int uppercase(char c)
{
    return ((c>='A'&&c<='Z'));
	
}
char *ft_strcapitalize(char *str) {
    int i = 0;
    int coso = 1; 

    while (str[i] != '\0') {
        if (is_alpha(str[i])) {
            if (coso) {
                if (lowercase(str[i])) {
                    str[i] = uppercase(str[i]);
                }
                coso = 0;
            } else {
                 if (uppercase(str[i])) {
                    str[i] = lowercase(str[i]);
                }
            }
        } else {
            coso = 1; 
        }
        i++;
    }
    return str;
}

int main() {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}
