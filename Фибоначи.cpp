#include iostream
int fib(int n)
{
    if(n  3)
        return 1;
    return fib(n - 2) + fib(n - 1);
} 
int main()
{
    int n = 0;
    stdcout  Enter find numbern ;
    stdcin   n;
    stdcout  Result   fib(n)   is the   n  th Fibonacci Number.n;
    return 0;
}