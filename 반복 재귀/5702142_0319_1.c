#include <stdio.h>
#include <time.h>

double factorial_iter(int n)
{
    double result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double factorial_rec(int n)
{
    if (n == 0) return 1.0;
    else return n * factorial_rec(n-1);
}

int main()
{
    clock_t start, end;
    double time_iter, time_rec;

    start = clock();
    double result_iter = factorial_iter(20);
    end = clock();
    time_iter = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    double result_rec = factorial_rec(20);
    end = clock();
    time_rec = (double)(end - start) / CLOCKS_PER_SEC;

    printf("% f,% f \n", result_iter, time_iter);
    printf("% f,% f \n", result_rec, time_rec);

    return 0;
}