#include <stdio.h>
#include <stdlib.h>
int main() {
int a, b, c;
printf("Digite o a e o b:\n");

scanf("%d\n%d",&a,&b);

c=a;
a=b;
b=c;
printf("Agora, a variável é a:%d \t e b:%d.\n", a, b);

return 0;

}
