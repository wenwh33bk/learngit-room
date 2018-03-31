#include  <stdio.h>
#include  <string.h>
#define   N   5
#define   M   10
int fun(char  (*ss)[M], int  k)
{ int  i,j=0,len;
/**********found**********/
  for(i=0; i< N ; i++)
  {  len=strlen(ss[i]);
/**********found**********/
     if(len<= k)
/**********found**********/
        strcpy(ss[j++],ss[i]);
  }
  return  j;
}
main()
{ char  x[N][M]={"Beijing","Shanghai","Tianjing","Nanjing","Wuhan"};
  int  i,f;
  printf("\nThe original string\n\n");
  for(i=0;i<N;i++)puts(x[i]);  printf("\n");
  f=fun(x,7);
  printf("The string witch length is less than or equal to 7 :\n");
  for(i=0; i<f; i++)  puts(x[i]);printf("\n");
}

