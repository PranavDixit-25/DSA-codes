#include <stdio.h>
void toLowercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
}
int main() {
    char str[] = "HELLO";
    toLowercase(str);
    printf("Lowercase string: %s\n", str);
    return 0;
}