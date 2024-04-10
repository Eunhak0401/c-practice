// 반복문
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
        // 1. 루프의 초기값
        // 2. 종결 컨디션
        // 3. 내용을 실행
        // 4. 이후에 어떤 연산을 할건지 

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
*/
#include <stdio.h>
    void main(){
        int i;

        i = 0;  
        do{
            printf("hello world %d\n", i);
            i++;
        }while (i<10);
    }
        
            
        
        
        
           