#include <stdio.h>
#include "calc_sum.h"
#include <pthread.h>

void* threadFunc(void *arguments)
{
int sum;
int *array_of_the_integers;
array_of_the_integers = arguments;

sum = calc_sum(array_of_the_integers[0], array_of_the_integers[1]);
printf("%d\n", sum);
return NULL;
}

int main()
{
int a, b, sum;
int nums[2];
pthread_t novThread;
fscanf(stdin, "%d %d", &nums[0], &nums[1]);
pthread_create(&novThread, NULL, threadFunc, nums);
pthread_join(novThread, NULL);
//printf("%d\n", sum);
return 0;
}
