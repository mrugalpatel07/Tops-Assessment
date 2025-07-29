// String pogram 

#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], l;
    int choice, i, length, count;

    up:
    printf("\nstring oprestion\n");
    printf("1 - Reverse a string\n");
    printf("2 - Concatenation\n");
    printf("3 - Palindrome\n");
    printf("4 - Copy a string\n");
    printf("5 - Length of the string\n");
    printf("6 - Frequency of character in a string\n");
    printf("7 - Find number of vowels and consonants\n");
    printf("8 - Find number of blank spaces and digits\n");
    printf("9 - Stop\n");

    printf("Type number: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Write string: ");
            scanf("%s", a);
            length = strlen(a);
            printf("Reversed: ");
            for(i = length - 1; i >= 0; i--)
                printf("%c", a[i]);
            printf("\n");
            break;

        case 2:
            printf("Write string 1: ");
            scanf("%s", a);
            printf("Write string 2: ");
            scanf("%s", b);
            strcat(a, b);
            printf("Concatenated: %s\n", a);
            break;

        case 3:
            printf("Write string: ");
            scanf("%s", a);
            length = strlen(a);
            count = 1;
            for(i = 0; i < length; i++) {
                if(a[i] != a[length - 1 - i]) {
                    count = 0;
                    break;
                }
            }
            printf(count ? "It is a Palindrome\n" : "Not a Palindrome\n");
            break;

        case 4:
            printf("Write string: ");
            scanf("%s", a);
            strcpy(b, a);
            printf("Original: %s\nCopy: %s\n", a, b);
            break;

        case 5:
            printf("Write string: ");
            scanf("%s", a);
            printf("Length: %d\n", strlen(a));
            break;

        case 6:
            printf("Write string: ");
            scanf("%s", a);
            printf("Which character: ");
            scanf(" %c", &l);
            count = 0;
            for(i = 0; a[i]; i++)
                if(a[i] == l)
                    count++;
            printf("Frequency of '%c': %d\n", l, count);
            break;

        case 7:
            printf("Write string: ");
            scanf("%s", a);
            int vowels = 0, consonants = 0;
            for(i = 0; a[i]; i++) {
                l = a[i];
                if((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z')) {
                    if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'||
                       l=='A'||l=='E'||l=='I'||l=='O'||l=='U')
                        vowels++;
                    else
                        consonants++;
                }
            }
            printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
            break;

        case 8:
            printf("Write string: ");
            scanf(" %[^\n]", a);
            int spaces = 0, digits = 0;
            for(i = 0; a[i]; i++) {
                if(a[i] == ' ') spaces++;
                if(a[i] >= '0' && a[i] <= '9') digits++;
            }
            printf("Spaces: %d, Digits: %d\n", spaces, digits);
            break;

        case 9:
            return 0;

        default:
            printf("Invalid choice\n");
    }

    printf("repet or next (y/n): ");
    scanf(" %c", &l);
    if(l == 'y' || l == 'Y')
        goto up;

    printf("Done!\n");
    return 0;
}
