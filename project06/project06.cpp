#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{

    // 조건식???
    // 비교연산자 또는 논리연산자가 사용된 식
    // 0 : 거짓, 1 : 참

    /*
    if (조건식1) {
        조건식1이 참일때 실행될 명령문(들)
    } 
    elde if (조건식2) {
        조건식2이 참일때 실행될 명령문(들)
    } 
    elde if (조건식3) {
        조건식3이 참일때 실행될 명령문(들)
    } 
    elde if (조건식n) {
        조건식n이 참일때 실행될 명령문(들)
    } 
    elde {
        위 모든 조건식들이 거짓일떄 실행될 명령문
    }
    */
    //int num;
    //printf("정수를 입력하세요 >>> ");
    //scanf("%d", &num);


    //if (num%2) {
    //    printf("홀수");
    //}
    //else {
    //    printf("짝수");
    //}

    //int n1, n2;
    //// 두개를 입력받아서 더 큰수를 출력하세요
    //printf("정수 2개를 입력하세요 >>> ");
    //scanf("%d %d", &n1, &n2);


    //if (n1 > n2) {
    //    printf("%d", n1);
    //}
    //else if (n1 < n2){
    //    printf("%d", n2);
    //}
    //else {
    //    printf("두 수가 같습니다");
    //}

    ////  상수와 변수의 값이 같은지 비교할떄는 상수를 앞에 배치하여 
    //// 논리적인 에러를 발생시킬 수 있는 근거를 제거한다
    //if (n1 == 2) {
    //}
    //// x와 y 둘다 양수이면 1사분면 
    //// x가 음수 y가 양수이면 2사분면
    //// x와 y 둘다 음수이면 3사분면
    //// x가 양수 y가 음수이면 4사분면

    //// x, y좌표를 입력하여 해당 점이 몇 사분면에 있는지 
    //// 판단할 수 있는 코드를 입력하세요
    //// x,y가 0인 상황은 없음
    //int x, y, res;
    //printf("정수 2개를 입력하세요 >>> ");
    //scanf("%d %d", &x, &y);
    //if ( x > 0 && y > 0) res = 1;
    //else if ( x < 0 && y > 0) res = 2;
    //else if ( x < 0 && y < 0) res = 3;
    //else res = 4;
    //printf("%d사분면\n", res);

    // 초(second)를 입력받습니다.
    // 입력받은 초를 계산하여 다음과 같이 출력하세요
    // 초(second)를 입력하세요 >>> 3650
    // 3650초는 1 시간 0 분 50초 입니다.

    int seconds = 3650; //scanf ()대신
    int mm = seconds / 60;  //분 계산(임시)
    int ss = seconds % 60;  //초 계산
    int hh = mm / 60;       // 시간 계산
    mm %= 60;               // 최종 계산된 분


   
    printf("%d초는 %d시간 %d분 %d초입니다.\n", seconds, hh, mm, ss);

    

    return 0();
}

