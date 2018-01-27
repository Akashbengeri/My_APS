#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void staircase(int n) {
    // Complete this function
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<i+1;k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    int n; 
    scanf("%i", &n);
    staircase(n);
    return 0;
}
