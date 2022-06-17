#include<stdio.h>

int main(){
int a=5,b=6,c,d,e,f,g,h;
printf("a=%d and b=%d\n", a, b);
c=a++ + ++b;
printf("a=%d and b=%d\n",a,b);
d=++a + ++b;
printf("a=%d and b=%d\n", a, b);
e=a++ + b++;
printf("a=%d and b=%d\n", a, b);
f=a++ + ++b;
printf("a=%d and b=%d\n", a, b);
g=a-- + ++b;
printf("a=%d and b=%d\n", a, b);
h=++a + ++a;
printf("a=%d and b=%d\n", a, b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d\n",f);
printf("%d\n",g);
printf("%d\n",h);

return 0;
}