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
    */
   #define _CRT_SECURE_NO_WARNINGS
   #include <stdio.h>

    int main(void){
        int a, b, result;

        
        printf("������ �Է��ϼ���: ");
        scanf("%d", &a);

        printf("������ �Է��ϼ���: ");
        scanf("%d", &b);

        result = a / b ;
        printf("����� : %d / %d = %d", a, b, result);
    }
   
   


        
            
        
        
        
           