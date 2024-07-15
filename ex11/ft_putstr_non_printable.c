#include <unistd.h>

int is_printable(char c) {
    return (c >= 32 && c <= 126);
}

void hex_conv(char str) {
    char n;
    char prefix = '\\';

    write(1, &prefix, 1);

    char temp = (str >> 4) & 0xF; // >>4 te mueve a la derecha a la posición 4 de los bits 
    //para convertir a hexadecimal y luego realiza la operación AND con la máscara 0000000011111111
    if (temp < 10) {
        n = '0' + temp;//convierte a char
    } else {
        n = 'a' + temp - 10;
    }
    write(1, &n, 1);

    temp = str & 0xF; 
    if (temp < 10) {
        n = '0' + temp;
    } else {
        n = 'a' + temp - 10;
    }
    write(1, &n, 1);
}

void ft_putstr_non_printable(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (!is_printable(str[i])) {
            hex_conv(str[i]);//llama a la función para conversión
        } else {
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main() {
    char str[] = "Hello\nWorld\tbo\v!";
    ft_putstr_non_printable(str);
    write(1, "\n", 1);
    return 0;
}
