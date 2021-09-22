/** lab16.c
 *     name:
 *  section:
 *  purpose: main function for lab16
 */

#include <stdio.h>

#include "lab16functs.h"

int main() {

    int numSquare[][4] = {{ 2, 16, 13,  3},
                          {11,  5,  8, 10},
                          { 7,  9, 12,  6},
                          {14,  4,  1, 15}};

    print4SquareInt(numSquare);

    if(isMagic4Square(numSquare)) {
      printf("this square is magic\n");
    } else {
      printf("this square is not magic\n");
    }

}