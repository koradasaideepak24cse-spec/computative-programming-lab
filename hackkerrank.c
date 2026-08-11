#include <stdio.h>
#include <string.h>
int main() {
    char s[100005];
    char target[] = "hackerrank";
    int j = 0;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == target[j]) {
            j++; }
        if (target[j] == '\0') {
            break; } }
    if (j == strlen(target))
        printf("YES");
    else
        printf("NO");
    return 0; }
