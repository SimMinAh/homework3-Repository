#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
    printf("[----- [simmina] [2022041070] -----]\n");
struct student pst;
printf("size of student = %ld\n", sizeof(struct student)); //student의 크기 출력 ->패딩으로 인해 13+4+2보다 큰 값 출력
printf("size of int = %ld\n", sizeof(int));//int형의 크기 출력
printf("size of short = %ld\n", sizeof(short));//short형의 크기 출력
return 0;
}