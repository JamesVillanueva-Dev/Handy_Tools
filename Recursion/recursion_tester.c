#include <stdio.h>
#include "fibonacci/fibonacci.h"

//compile with gcc .\recursion_tester.c .\fibonacci\\fibonacci.c -o recursion_tester

int main(){
    int n = 20;

    printf("The nth fibonacci number where n is %d is %d", n, nfib(n));

    return 0;
}