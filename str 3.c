#include <stdio.h>

void to_uppercase(char *str) {
    int i = 0;
    while (str[i]) {
        str[i] = toupper((unsigned char)str[i]);
        i++;
    }
}

int main() {
    char str[] = "Hello, World!";
    to_uppercase(str);
    printf("Uppercase: %s\n", str);
    return 0;
}
