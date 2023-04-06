 #include <stdio.h>

 void f(int *p);
 void g(int k);

 int main(void)
 {
     int a = 10;
     printf("&a = %p\n", &a);
     f(&a);
     g(a);
     
     return 0;
 }

 void f(int *p)
 {
     printf("p = %p\n", p);
     printf("*p = %d\n", *p);
     *p = 20;
 }
 
 void g(int k)
 {
     printf("k = %d\n", k);
 }