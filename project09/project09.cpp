#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//  do ~ while();
//  반복문 안의 명령문들을 적어도 한번은 실행한다.
//  while() 뒤에 반드시 ;(세미콜론)을 붙여준다

int main()
{

    int i = 0;
    char ch, tmp;
    do 
    {
        printf("1. 새파일\n");        // do ~ while 문은 무족건 한번은 실행함
        printf("2. 저장\n");
        printf("3. 열기\n");
        printf("=========\n");
        printf("x.  종료\n");
        
        printf("\n메뉴를 선택해주세요: ");
        scanf("%c", &ch);   //  문자 1로 인식됨
        scanf("%c", &tmp);  //  엔터키 값을 입력버퍼로부터 제거시킴

        switch (ch)
        {
        case'1':
            printf("\n새파일이 선택되었습니다\n");
            break;

        case'2':
            printf("\n저장이 선택되었습니다\n");
            break;

        case'3':
            printf("\n열기가 선택되었습니다\n");
            break;

        case'x':
            break;

        default:
            printf("\n잘못 입력했습니다. 다시 입력해주세요...\n");
            break;
        }
                  


    } while (ch!='x');      //  x가 아닐 경우 돌아가기   ch != 'x'

    printf("프로그램이 종료되었습니다!!!");


    return 0;
}
