#include <stdio.h>
#include <string.h>
void  fun(char *p ,char *q, char *c)
{
/************found************/
  int k = 0;
/************found************/
    while( *p||*q )
    {  if( *p<*q )  c[k]=*q;
       else         c[k]=*p;
       if(*p) p++;
       if(*q) q++;  
       k++; 
    }
}
main()
{   char  a[10]="aBCDeFgH", b[10]="ABcd", c[80]={'\0'};
    fun(a,b,c);
    printf("The string a:  ");  puts(a);
    printf("The string b:  ");  puts(b);
    printf("The result  :  ");  puts(c);
}


