// ë°˜ë³µë¬?
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


//while (ì¡°ê±´)
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
        // 1. ë£¨í”„?˜ ì´ˆê¸°ê°?
        // 2. ì¢…ê²° ì»¨ë””?…˜
        // 3. ?‚´?š©?„ ?‹¤?–‰
        // 4. ?´?›„?— ?–´?–¤ ?—°?‚°?„ ?• ê±´ì?? 

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
    
        printf("¿¬»ê ¼±ÅÃ (+ ¶Ç´Â *) ==> ");
        scanf("%s", &a);

        printf("Ã¹ ¹øÂ° °ª ==> \n");
        scanf("%d", &b);
        printf("µÎ ¹øÂ° °ª ==> \n");
        scanf("%d", &c);
        printf("¼¼ ¹øÂ° °ª ==> \n");
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
   */
#include <stdio.h>

void main(){
    

    float a = 2.0f, b=3.0f, c=4.0f;
    float result;

    result = a + b + c;
    printf("%5.2f + %5.2f = %5.2f", a, b, result);
    result = a - b - c;
    printf("%5.2f - %5.2f = %5.2f", a, b, result);
}
        
            
        
        
        
           