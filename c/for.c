// 반복�?
// for, while, do while
/*
#include <stdio.h>
    void main()
  
    {
        int i;
        for (int i = 1; i <= 10; i++)
        {
            printf("%d hello world\n", i);
        }
    }


//while (조건)
{
int i = 1;
while (i <= 10)
{
if (i > 5) 
    printf("stop!!"); 
    printf("%d Hello world\n", i++);
}

}


#include <stdio.h>
    void main(){
        int i;
        // 1. 루프?�� 초기�?
        // 2. 종결 컨디?��
        // 3. ?��?��?�� ?��?��
        // 4. ?��?��?�� ?��?�� ?��?��?�� ?��건�?? 

        for(i=10; i>0; i--){
            printf("hello world %d\n", i);
        }
    }
    

#include <stdio.h>
    void main(){
        int i;

        i = 0;
        while (i<10)
        {
            printf("hello world %d\n", i);
            i++;
        }
        
    }
    

#include <stdio.h>
    void main(){
        int i;

        i = 0;  
        do{
            printf("hello world %d\n", i);
            i++;
        }while (i<10);
    }
    
   #define _CRT_SECURE_NO_WARNINGS
   #include <stdio.h>
    void main(){

        char a;
        int b, c, d, result;
    
        printf("���� ���� (+ �Ǵ� *) ==> ");
        scanf("%s", &a);

        printf("ù ��° �� ==> \n");
        scanf("%d", &b);
        printf("�� ��° �� ==> \n");
        scanf("%d", &c);
        printf("�� ��° �� ==> \n");
        scanf("%d", &d);

        if(a == '+'){
            result = b + c + d;
            printf("%d + %d + %d = %d\n", b, c, d, result);
        }
        if(a == '*'){
            result = b * c * d;
            printf("%d * %d * %d = %d", b, c, d, result);
        }
    }
  
#include <stdio.h>

void main(){
    

    float a = 2.0f, b=3.0f, c=4.0f;
    float result;

    result = a + b + c;
    printf("%5.2f + %5.2f = %5.2f", a, b, result);
    result = a - b - c;
    printf("%5.2f - %5.2f = %5.2f", a, b, result);
}
*/
#include <stdio.h>

int main(void)
{
    int krw = 0; 
    double exchange_rate = 0; 
    double usd = 0;

    printf("KRW? "); 
    scanf("%d", &krw); 

    printf("원/달러 환율? "); 
    scanf("%lf", &exchange_rate);

    usd = krw * exchange_rate;

    printf("KRW %d = USD %.1f\n", krw, usd); 

    return 0;
}
        
            
        
        
        
           