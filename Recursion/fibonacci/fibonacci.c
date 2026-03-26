/**
 * Calculates the nth fibonacci number recursively
 * 
 * @param n determines which nth number
 * 
 * @return the nth fibonacci number
 */
int nfib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return nfib(n-1) + nfib(n-2);
}