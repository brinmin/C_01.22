#include <stdio.h>
// 정수 : char(1byte), short(2byte), int(4byte), long(W:4, m:8), long long(8byte)
// 실수 : float, double, long double

int main()
{
    //정수형
    char n; //2^8개의 서로 다른 데이터 표현(저장)
    short num;  //2^16개의 서로 다른 데이터 표현(저장)
    int score;   //2^32개의 서로 다른 데이터 표현(저장)
    long money;   //2^64개의 서로 다른 데이터 표현(저장)
    long long big_number;       //2^64개의 서로 다른 데이터 표현(저장)

    // sizeof 연산자(operator) : 타입 또는 변수의 크기를 바이트 단위로 알려준다

    printf("n의 크기 : %d\n", sizeof(n));
    printf("num의 크기 : %d\n", sizeof(short));
    printf("score의 크기 : %d\n", sizeof(int));
    printf("money의 크기 : %d\n", sizeof(long));
    printf("big_number의 크기 : %d\n", sizeof(long long));
  
    printf("double의 크기 : %d\n", sizeof(double));


    n = 127;
    printf("n의 값: %d\n", n);

    n = 128;       //char 형식으로는 128 저장 불가
    printf("n의 값: %d\n", n);

    // 형식 문자(Formatted String)
    // %d : 값을 정수형으로 표현
    // %u : 값을 양의 정수형으로 표현
    // %f : 값을 실수형으로 표현
    // %x, %X : 값을 16진수로 표현
    // %o : 값을 8진수로 표현
    // %e : 값을 지수형으로 표현
    // %c : 값을 문자로 표현

    n = 100; 
    printf("n의 값: %x\n", n);
    printf("n의 값: %o\n", n);
    printf("n을 문자로 표현: %c\n", n);

    double d = 100.0;
    printf("d의 값: %e\n", d);
    printf("d의 값: %f\n", d);

    n = 65;
    printf("n을 문자로 표현: %c\n", n);

    n = 'A';       // n=65;
    printf("n을 문자로 표현: %c\n", n);

    // 10                                                                
    printf("숫자의 출력:%5d\n", 10);      //정수를 출력할때 자릿수 5칸을 확보한 후 오른쪽 정렬하여 출력
    printf("숫자의 출력:%-5d\n", 10);      //정수를 출력할때 자릿수 5칸을 확보한 후 왼쪽 정렬하여 출력
    
    //180.78
    printf("실수의 출력:%6.2f", 180.78);  // 소수점 포함 6자리 확보 후 소수점 이하를 2자리까지만 표현

    //1213124333.12124
    printf("실수의 출력:%.2f", 1213124333.12124); // 정수부를 그대로 출력하고 소수점 이하를 2자리까지만 표현(표현 시 소수점 반올림)

    // 기본 " %d는 int(4바이트)크기에 기본적으로 맞춰져있음
    n = 10;
    big_number = 123456789;
    score = 12345;
    printf( "%hhd\n",n );            // char형 출력
    printf("%d\n", big_number);
    printf("%d\n", score);

    num = 123;
    printf("%hd\n", num);       //short형 출력
    
    money = 352;
    printf(" %ld\n", money);  //long형 출력

    big_number = 12;

    printf("%lld\n", big_number); //long long형 출력

    unsigned char age; // 0~255 표현가능
    age = 129;




    printf("%hhu\n", age);
        
    unsigned long lsize = 1489417;
    printf("%lu\n", lsize);
    printf("%llu\n", sizeof(long long));


    /*
    %d와 %u의 세분화
    %hhd(u)
    %hd(u)
    %d(u)
    %ld(u)
    %lld(u)
   
    
    */














































































    return 0;
}
    // operating system
    // 운영체제 - windows, mac, linux
    // Unix : 조상
    // linux : Unix 오픈 소스 버전 > CentOS, RED-Hat, Debian, Ubuntu ...
    // MacOS, iOS
    // Android

    // windows
    // Hardware : CPU, RAM, DISK
    // 저장장치 : 
    // 폴더(디렉토리)링
    // 파일이 위치한 곳 : 절대/상대경로, path 







