 #include <stdio.h>

 void f(int *p);

 int main(void)
 {
     int a = 10;
     printf("&a = %p\n", &a);
     f(&a);
     
     return 0;
 }

 void f(int *p)
 {
     printf("p = %p\n", p);
 }