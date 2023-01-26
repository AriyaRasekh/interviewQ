#include <stdio.h>

int findSquares(int n, int m, int square_dim[]) {

    int counter = 0;

    while (n != m) {

        if (n > m) {
            square_dim[counter] = m;
            n = n - m;
        }

        else if (m > n) {
            square_dim[counter] = n;
            m = m - n;
        }

        counter++;
    }

    // at this point, n is equal to m
    square_dim[counter] = n;
    counter++;

    return counter;
}
int main() {
    int n=6, m=6;       // N and M dimensions (assumed to be positive integers)

    int MAX_NUM_ANSWER = 1000;
    int square_dim[MAX_NUM_ANSWER];

    int counter = findSquares(n, m, square_dim);        // calling function
    for( int i=0; i<counter; i++){
        printf("%dx%d", square_dim[i], square_dim[i]);
        if (i!=counter-1)       // to eliminate last comma
            printf(", ");
    }


    return 0;
}

