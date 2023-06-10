#include <stdio.h>
#include <string.h>

void ReverseText(char* text) {
    int length = strlen(text);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = text[i];
        text[i] = text[j];
        text[j] = temp;
    }
}

int main() {
    char text[100];

    printf("Enter Text: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    ReverseText(text);

    printf("Reversed Text: %s\n", text);

    return 0;
}
