#include <stdio.h>
#include "fibonacci/fibonacci.h"
#include "factorial/factorial.h"

//compile with gcc .\recursion_tester.c .\fibonacci\\fibonacci.c -o recursion_tester

int main(){
    int n = 15;

    printf("The nth fibonacci number where n is %d is %ld\n", n, nfib(n));
    printf("The nth factorial where n is %d is %lld\n", n, fact(n));
    return 0;
}