/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

    void main()
{
    int num;
    printf("정수를 입력하시오");
    scanf("%d", &num);

    printf("입력된 정수: %d\n", num);
    
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
    void main()
{
    int score = 0;
    printf("시험 점수를 입력하시오");
    scanf("%d", &score);

    if(score >= 90 ) {
            printf("당신은 a등급입니다.\n");
        }
        
    else if(score <= 70 && score >= 50) {
        printf(" 당신은 b등급입니다\n.");
        }

    else if(score <= 50 && score >= 0)  {
            printf("당신은 c등급입니다.\n");
    }
}    
