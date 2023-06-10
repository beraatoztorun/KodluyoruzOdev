#include <stdio.h>
#include <string.h>

int IsPolindrom(const char *word) {
    int length = strlen(word);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j])
            return 0;
    }

    return 1;
}

int main() {
    char word[100];

    printf("Please Enter a Text: ");
    scanf("%s", word);

    if (IsPolindrom(word))
        printf("%s is a palindrome text.\n", word);
    else
        printf("%s is not a palindrome text.\n", word);

    return 0;
}