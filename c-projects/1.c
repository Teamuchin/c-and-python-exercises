#include <stdint.h>
#include <stdio.h>

int main(){
    int s1;
    int s2;
    scanf("%d", &s1);
    scanf("%d", &s2);
    int t = s1+s2;
    printf("%d ile %d toplamı %d değerine eşit\n",s1,s2,t);
    if (s1<s2){
        puts("sayı2 sayı1 den büyük");

    }else if(s1>s2){
        puts("sayı1 sayı2 den büyük");
    }

}
