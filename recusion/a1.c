#include<stdio.h>
int newfun(int n)
{
    printf("unwinding phase:%d\n",n);
    if (n<3)
    {
        newfun(++n);
    }
    printf("winding phase:%d\n",n);
}
int main()
{
    newfun(1);
}

/*output :-
unwinding phase:1
unwinding phase:2
unwinding phase:3
winding phase:3  
winding phase:3  
winding phase:2  
*/
