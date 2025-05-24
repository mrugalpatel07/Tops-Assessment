#include <stdio.h>
#include <string.h>

int main() {
    char text[100], text2[100], rev[100], ch;
    int opt, len, count, vowels, consonants, spaces, digits, i, is_pal;
up:

    printf("string opreston\n");

    // menu
    printf("\n===== menu =====\n");
    printf("1. reverse string\n");
    printf("2. concatenate strings\n");
    printf("3. check palindrome\n");
    printf("4. copy string\n");
    printf("5. string length\n");
    printf("6. character frequency\n");
    printf("7. count vowels & consonants\n");
    printf("8. count spaces & digits\n");
    printf("9. exit\n");

    //user input
      printf("choose option: ");
       scanf("%d", &opt);
      getchar(); //

    if (opt >= 1 && opt <= 8) {
        printf("enter string: ");
        fgets(text, sizeof(text), stdin);
        text[strcspn(text, "\n")] = '\0'; // nullch
    }

    switch (opt) {
        case 1: 
        // reverse
            len = strlen(text);
            for (i = 0; i < len; i++) 
            {
                rev[i] = text[len - i - 1]; // chngr ch
            }
            rev[len] = '\0';

            printf("reversed: %s\n", rev);
            break;

        case 2: 
        // concatenate strings
            printf("enter other string: ");

            fgets(text2, sizeof(text2), stdin);
            text2[strcspn(text2, "\n")] = '\0';
            strcat(text, text2); // appenD
            printf("combined: %s\n", text);
            break;

        case 3: 
        // alindrome
            is_pal = 1;

            len = strlen(text);
            for (i = 0; i < len / 2; i++) {
                if (text[i] != text[len - i - 1]) {
                    is_pal = 0;
                    break;
                }
            }
            printf(is_pal ? "palindrome!\n" : "not palindrome.\n");
            break;

        case 4:
         // copy string

            strcpy(text2, text);
            printf("copied: %s\n", text2);
            break;

        case 5: 
        // string length
            printf("length: %d\n", strlen(text));
            break;

        case 6:
         // character frequency
            count = 0;

            printf("enter character: ");
            scanf(" %c", &ch);

            for (i = 0; text[i] != '\0'; i++) 
            {
                if (text[i] == ch) count++;
            }
            printf("'%c' appears %d times\n", ch, count);
            break;

        case 7: 
        //vowels & consonants
            vowels = consonants = 0;
            for (i = 0; text[i] != '\0'; i++) 
            {
                if (strchr("aeiouAEIOU", text[i])) vowels++;
                else if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) consonants++;
            }

            printf("vowels: %d, consonants: %d\n", vowels, consonants);
            break;

        case 8:                                                     
        //  spaces & digits
            spaces = digits = 0;
            for (i = 0; text[i] != '\0'; i++) {
                if (text[i] == ' ') spaces++; 
                if (text[i] >= '0' && text[i] <= '9') digits++;
            }
            printf("spaces: %d, digits: %d\n", spaces, digits);
            break;

        case 9: 
            printf("Exit!\n");
            goto exit;
            break;

        default:
            printf("invalid option.try again.\n");
    }

    goto up;

exit:
    return 0;
}
