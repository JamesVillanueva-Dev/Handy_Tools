/**
 * Calculates nth factorial
 * 
 * @param n which nth factorial will be calculated
 * 
 * @return the value of the nth factorial
 */
int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}