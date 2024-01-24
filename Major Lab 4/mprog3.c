#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void init_arr(int x[], int len) {
    srand(time(NULL)); // Seed the random number generator with the current time
    int i;
    for (i = 0; i < len; i++) {
        x[i] = rand() % 100; // Generate random numbers between 0 and 99
    } 
}

void rot_left_arr(int x[], int len) {
    int i;
    int first = x[0];
    // Shift everything to the left
    for (i=0; i<len-1; i++) {
        x[i] = x[i+1];
    }
    // First element becomes the last
    x[len-1] = first;
}

void rot_right_arr(int x[], int len) {
    int i;
    int last = x[len-1];
    // Shift everything to the right
    for (i=len-1; i>0; i--) {
        x[i] = x[i-1];
    }
    // Last element becomes the first
    x[0] = last;
}

void rot_arr(int x[], int len, int r) {
    int i;
    // Rotate right
    if (r>0) {
        for (i=0; i<r; i++) {
            rot_right_arr(x,len);
        }
    }
    // Rotate left
    else if (r<0) {
        for (i=0; i<(r*-1); i++) {
            rot_left_arr(x,len);
        }
    }
    // Don't rotate
    else {
        return;
    }
}

void show_arr(int x[], int len) {
    int i;
    for (i=0; x[i] != '\0'; i++) {
        printf("%d ",x[i]);
    }
    printf("\n");
}

void main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("incorrect number of command line arguments\n");
        printf("usage: mprog3 <size> <rotation>\n");
    }
    else {
        int x[20];
        int len = atoi(argv[1]);
        if (len < 2 || len > 20) {
            printf("incorrect length %d\n",len);
        }
        else {
            int r = atoi(argv[2]);
            // Display message depending on rotation    
            if (r>0) {
                printf("creating array of size %d, rotating it right by %d positions\n",len,r);
            }
            else if (r<0) {
                printf("creating array of size %d, rotating it left by %d positions\n",len,(r*-1));
            }
            else {
                printf("creating array of size %d, no rotation\n",len);
            }
            init_arr(x, len);
            show_arr(x, len);
            rot_arr(x, len, r);
            show_arr(x, len);
        }
    }
}

