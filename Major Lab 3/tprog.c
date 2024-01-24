#include <stdio.h>
#include <ctype.h>

void flipChars(char x[]) {
    int i;
    for (i=0; x[i]!='\0'; i++) {
        
        if (isalpha(x[i])) {
            if (x[i]=='a' || x[i]=='e' ||x[i]=='i' ||x[i]=='o' ||x[i]=='u') {
                x[i] = toupper(x[i]);
            }
            else if (x[i]=='A' || x[i]=='E' ||x[i]=='I' ||x[i]=='O' ||x[i]=='U') {
                x[i] = tolower(x[i]);
            }
            else {
                char next = toupper((char)(x[i]+1));
                if (x[i] == 'z') {
                    x[i] = 'b';
                }
                else if (x[i] == 'Z') {
                    x[i] = 'B';
                }
                else if (next == 'E' || next == 'I' || next == 'O' || next == 'U') {
                    x[i] = (char)(x[i]+2);
                }
                else {
                    x[i] = (char)(x[i]+1);
                }
            }
        }
        else if (isdigit(x[i])) {
            if (x[i] == '0') {
                x[i] = '9';
            }
            else if (x[i] == '1') {
                x[i] = '8';
            }
            else if (x[i] == '2') {
                x[i] = '7';
            }
            else if (x[i] == '3') {
                x[i] = '6';
            }
            else if (x[i] == '4') {
                x[i] = '5';
            }
            else if (x[i] == '5') {
                x[i] = '4';
            }
            else if (x[i] == '6') {
                x[i] = '3';
            }
            else if (x[i] == '7') {
                x[i] = '2';
            }
            else if (x[i] == '8') {
                x[i] = '1';
            }
            else {
                x[i] = '0';
            }
        }
        else {
            x[i] = '!';
        }
    }
}

void main() {
    printf("Please enter a text string: ");
    char buf[100];
    scanf("%s",buf);
    printf("You entered the string \'%s\'\n",buf);
    flipChars(buf);
    printf("String after flip operation: \'%s\'\n",buf);
}
