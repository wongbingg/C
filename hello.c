// hello.c
// 저장 후 실행해야 변경사항이 반영됨

#include <stdio.h>
#include <string.h>

// MARK: - 함수 (main 함수보다 위에 선언해야 한다.)

int sum(int a, int b);
int factorial(int n);


int main(void)
{
// MARK: - 변수 선언방법

    // int result;
    // int num1, num2;

// MARK: - scanf, printf 활용법

    // printf("첫번째 정수를 입력하세요 : ");
    // scanf("%d", &num1);
    // printf("%d + %d = %d", num1, num2, result);

// MARK: - while 반복문 

    // int num = 0;

    // while (num < 5)
    // {
    //     printf("Hello, world!\n");
    //     num++;
    // }

// MARK: - do-while 반복문 

    // int pw = 1234;
    // int inputpw = 0;

    // do
    // {
    //     printf("비밀번호를 입력하세요. :");
    //     scanf("%d", &inputpw);
    // } while (pw != inputpw);

    // printf("확인되었습니다.\n");

// MARK: - for 문

    // int hap = 0;
    // int num = 1;
    // int i;

    // for (i = 0; i < 100; i++)
    // {
    //     // num *= 2; 
    //     hap += i;

    //     if (hap >= 100)
    //         break;
    // }

    // printf("%d", hap);

// MARK: - 함수 사용

    // int x = 3, y = 4;
    // int result;
    // result = sum(x,y);
    // printf("result는 %d 입니다.\n", result);

    
// MARK: - 재귀함수

    // printf("3! = %d\n", factorial(3));

// MARK: - 배열

    // int arr[4] = {10, 20, 30, 40};
    // printf("%d",arr[0]);

    // int arr[3][4] = {
    //     {10, 20, 30, 40},
    //     {30, 40, 50, 40},
    //     {50, 60, 70, 40}
    // };
    // printf("%d",arr[0][0]);

// MARK: - char 배열 (string.h에 포함된 함수)

    // char str1[20];
    // char str2[20];

    // strcpy(str1, "sejong"); // strcpy(저장될 배열명, 저장할 문자열)
    // strcpy(str2, "saging");

    // printf("문자열 길이: %lu\n", strlen(str2)); // 문자열 길이 구하기
    // printf("%d", strcmp(str1, str2)); // 두 문자열의 같음을 확인
    // printf("%s", strrev); // 문자열 뒤집기 인데 왜 함수가 안뜨지..?

// MARK: - 메모리 주소 확인

    // int num = 10;
    // printf("%p\n", &num);

// MARK: - 포인터

    // int num; // 일반 변수 선언
    // int *pnum; // 포인터 선언

    // pnum = &num; // 포인터에 num 주소 대입
    // *pnum = 10; // 포인터로 변수 num에 10 // *pnum에 접근 -> 저장된 주소에 접근 -> num으로 접근 -> num 에 10 대입

    // printf("변수명으로 num 값 출력 : %d\n", num);
    // printf("포인터로 num 값 출력 : %d\n", *pnum);

// MARK: - 이중 포인터

    // int * ptr;
    // int ** dptr;
    // int num = 10;

    // ptr = &num;

    // dptr = &ptr;

    // printf("%d/n", **dptr);

// MARK: - 포인터와 const

    // int num = 10;
    // const int* p = &num;

    // // *p = 20; // const로 포인터를 선언하면 포인터를 통해 값이 변경되는 것을 허용하지 않는다. 
    // num = 20;

    // printf("변수 num: %d\n", *p);

    // return 0;

// MARK: - 포인터와 배열 

    // int arr[3] = {1, 2, 3};

    // printf("배열의 이름 : %p\n", arr);

    // printf("첫 번째 요소 : %p\n", &arr[0]); // 4byte 차지. 주소 한칸당 1byte
    // printf("두 번째 요소 : %p\n", &arr[1]);
    // printf("세 번째 요소 : %p\n", &arr[2]);

// MARK: - 포인터 연산 

    // char * ptr1 = 0; // 1byte
    // int * ptr2 = 0; // 4byte
    // double * ptr3 = 0; // 8byte

    // printf("%d번지, %d번지, %d번지\n", ptr1, ptr2, ptr3);

    // ptr1++;
    // ptr2++;
    // ptr3++;

    // printf("%d번지, %d번지, %d번지\n", ptr1, ptr2, ptr3);    

// MARK: - arr[i] == *(arr+i) 라는 결론 도출 가능

    // int arr[5] = { 1, 2, 3, 4, 5 };

    // int * ptr = arr;

    // printf("%d %d %d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3), *(ptr + 4));
    // printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

// MARK: - 포인터 배열 

    // int num1 = 1, num2 = 2, num3 = 3;
    // int * arr[3] = { &num1, &num2, &num3 };

    // printf("주소값 : %p %p %p\n", arr[0], arr[1], arr[2]);
    // printf("값 : %d %d %d\n", *arr[0], *arr[1], *arr[2]);

    // return 0;

    
}


// MARK: - 함수 정의부 
    // 반환타입이 int 인 경우, 반환타입or매개변수가 없는 경우 void로 대체.
int sum(int a, int b)
{
    int hap;
    hap = a + b;
    return hap;
}
    // 재귀함수
int factorial(int n)
{
    if (n == 0)
        return 1;
    
    return n * factorial(n-1);
}