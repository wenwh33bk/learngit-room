#include    <math.h>
#include    <stdio.h>

int fun(char  *fname )
{  FILE  *fp;      int  i,n;      float  x;
   if((fp=fopen(fname, "w"))==NULL)  return  0;
   for(i=1;i<=10;i++)
/**********found**********/
     fprintf(___1___,"%d %f\n",i,sqrt((double)i));
   printf("\nSucceed!£¡\n");
/**********found**********/
   ___2___;
   printf("\nThe data in file :\n");
/**********found**********/
   if((fp=fopen(___3___,"r"))==NULL)
      return  0;
   fscanf(fp,"%d%f",&n,&x);
   while(!feof(fp))
    {  printf("%d %f\n",n,x);   fscanf(fp,"%d%f",&n,&x);  }
   fclose(fp);
   return  1;
}
main()
{  char  fname[]="myfile3.txt";
   fun(fname);
}

