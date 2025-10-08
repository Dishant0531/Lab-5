
    #include <stdio.h>

int main() {
    char str[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z') {

            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {

            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Toggled case: %s\n", str);
    return 0;
}
