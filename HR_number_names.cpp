#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char name(int n)
{
    if (n == 1) {
        char nm[10] = "one";
    } else if (n == 2) {
        char nm[10] = "two";
    } else if (n == 3) {
        char nm[10] = "three";
    } else if (n == 4) {
        char nm[10] = "four";
    } else if (n == 5) {
        char nm[10] = "five";
    } else if (n == 6) {
        char nm[10] = "six";
    } else if (n == 7) {
        char nm[10] = "seven";
    } else if (n == 8) {
        char nm[10] = "eight";
    } else if (n == 9) {
        char nm[10] = "nine";
    }

    return nm;
}

int main() 
{
    int a, b;
    int i,j;
    scanf("%d\n%d", &a, &b);
  	for(i=a;i<=9;i++){
          printf("%s\n",name(i))

      }
    for(j=10;j<=b;j++){
        if(j%2==0){
            printf("even")
        }
        else{
            printf("odd")
        }
    }

    return 0;
}
