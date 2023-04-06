#include <stdio.h>
struct student1 {
char lastName;
int studentId;
char grade;
};
typedef struct {
char lastName;
int studentId;
char grade;
} student2;
int main() {
    printf("[----- [simmina] [2022041070] -----]\n");
struct student1 st1 = {'A', 100, 'A'};
printf("st1.lastName = %c\n", st1.lastName); //st1.lastName 출력
printf("st1.studentId = %d\n", st1.studentId); //st1.studentId 출력
printf("st1.grade = %c\n", st1.grade);//st1.grade 출력
student2 st2 = {'B', 200, 'B'};
printf("\nst2.lastName = %c\n", st2.lastName); //st2.lastName 출력
printf("st2.studentId = %d\n", st2.studentId); //st2.studentId 출력
printf("st2.grade = %c\n", st2.grade); //st2.grade 출력
student2 st3;
st3 = st2; //st3에 st2 초기화
printf("\nst3.lastName = %c\n", st3.lastName); //st3.lastName 출력
printf("st3.studentId = %d\n", st3.studentId); //st3.studentId 출력
printf("st3.grade = %c\n", st3.grade);//st3.grade 출력
/* equality test */
if(st3.lastName == st2.lastName&&st3.studentId==st2.studentId&&st3.grade==st2.grade)
//구조체 내의 성분들을 하나씩 비교해 주어야 함
printf("equal\n");
else
printf("not equal\n");
return 0;
}
