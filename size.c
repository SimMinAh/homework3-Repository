#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- [simmina] [2022041070] -----]\n");
int **x;
printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력 
printf("sizeof(*x) = %lu\n", sizeof(*x));//*x의 크기 출력
printf("sizeof(**x) = %lu\n", sizeof(**x));//**x의 크기 출력
} //int 형이기 때문에 모두 4bytes가 출력된다
