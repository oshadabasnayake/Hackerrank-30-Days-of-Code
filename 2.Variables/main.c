#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i = 4;
    double d = 4.0;
    char str1[] = "HackerRank ";

    int i2;
    double d2;
    char str2[100];

     printf("Enter 12 \n");
     scanf("%d",&i2);

     printf("Enter 4.0 \n");
     scanf("%0.f",&d2);

     printf("Enter is the best place to learn and practice coding! \n");
     scanf("%[^\n]s",&str2);

     printf("%d",i+i2);
     printf("%.f",d+d2);
     printf("%s %s",str1,str2);



    return 0;
}
