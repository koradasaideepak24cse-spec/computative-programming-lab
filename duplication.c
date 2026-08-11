#include <stdio.h>
int main() {
    char s[100005];
    int seen = 0;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        int bit = 1 << (s[i] - 'a');
        if (seen & bit) {
            printf("%c ", s[i]);
            seen = seen & ~bit;
        } else {
            seen = seen | bit; } }
    return 0; }
