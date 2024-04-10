// 반복문
// for, while, do while

#include <stdio.h>
    void main()
    /*
    {
        int i;
        for (int i = 1; i <= 10; i++)
        {
            printf("%d hello world\n", i);
        }
    }
*/

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