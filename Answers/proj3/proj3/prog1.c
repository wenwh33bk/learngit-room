#include <stdio.h>
void  fun( char *a )
{
  int i=0;
  char *p=a;
  while(*p&&*p=='*')
  {
	  a[i]=*p;
	  i++;
	  p++;
  }
  while(*p)
  {
	  if(*p!='*')
	  {a[i]=*p;i++;}
	  p++;
  }
  a[i]='\0';
}

main()
{  char  s[81];void NONO ();
   printf("Enter a string:\n");gets(s);
   fun( s );
   printf("The string after deleted:\n");puts(s);
   NONO();
}
void NONO ()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
  FILE *in, *out ;
  int i ; char s[81] ;
  in = fopen("in.dat","r") ;
  out = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(in, "%s", s) ;
    fun(s) ;
    fprintf(out, "%s\n", s) ;    
  }
  fclose(in) ;
  fclose(out) ;
}

