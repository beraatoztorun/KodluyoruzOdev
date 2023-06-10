#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int i, j;
    char temp;

    // Kelimenin başını ve sonunu takas etmek için iki indeks kullanılır
    i = 0;
    j = strlen(str) - 1;

    // İki indeks birbirine yaklaşana kadar takas işlemi yapılır
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[100];

    printf("Please enter a text: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    reverseString(str);

    printf("Reversed Text: %s\n", str);

    return 0;
}
