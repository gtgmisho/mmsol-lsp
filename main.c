#include <stdio.h>
#include "calc_sum.h"

int main()
{
int a, b, sum;
fscanf(stdin, "%d %d", &a, &b);
sum = calc_sum(a, b);
printf("%d\n", sum);
return 0;
}
