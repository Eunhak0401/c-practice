#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
    void main(){
        int a, b, c, Straight;

        printf("한 변의 삼각형 길이를 입력하시오:");
        scanf("%d", &a);

        printf("한 변의 삼각형 길이를 입력하시오");
        scanf("%d", &b); 

        printf("한 변의 삼각형 길이를 입력하시오");
        scanf("%d", &c); 

        if (c < a + b)
        printf("yes");

        else
        printf("no");


    }
