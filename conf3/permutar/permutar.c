#include<stdio.h>

void permutar(int* pa, int* pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(){
    int a, b;

    scanf("%d%d", &a, &b);
    
    permutar(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}