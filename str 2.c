#include <stdio.h>

void to_lowercase(char *str) {
    int i = 0;
    while (str[i]) {
        str[i] = tolower((unsigned char)str[i]);
        i++;
    }
}

int main() {
    char str[] = "Hello, World!";
    to_lowercase(str);
    printf("Lowercase: %s\n", str);
    return 0;
}
