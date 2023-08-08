#include <stdio.h>

int main(){
    int n1=0;
    int n2=0;
    printf("\n Qual foi a sua primeira nota?");
    scanf("%d",&n1);
    printf("\n Qual foi a sua segunda nota?");
    scanf("%d",&n2);
    printf("\n n1 e n2 são iguais? %d",n1==n2);
    printf("\n n1 é maior que n2? %d",n1>n2);
    printf("\n n1 é menor ou igual a n2? %d",n1<=n2);
    return 0;
}