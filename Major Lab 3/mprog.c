#include <stdio.h>

int isDecreasingSeq(char x[]) {
    int result;
    int i;
    for (i=0; x[i+1]!='\0'; i++) {
        if (x[i] <= x[i+1]) {
            return 0;
        }
    }
    return 1;
}

void main() {
    printf("Please input a sequence: ");
    char buf[100];
    scanf("%s",buf);
    int value;
    value = isDecreasingSeq(buf);
    if (value) {
        printf("The sequence \"%s\" is a decreasing sequence.\n",buf);
    }
    else {
        printf("The sequence \"%s\" is not a decreasing sequence.\n",buf);
    }
}
