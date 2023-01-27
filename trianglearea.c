#include<stdio.h>

#include<math.h>

int main()
{
    float a , b, c,s,mul,ans;

    scanf("%f,%f,%f",&a,&b,&c);

    s = (a+b+c)/2;

    mul = s*(s-a)*(s-b)*(s-c);

    ans = sqrt(mul);

    printf("area of triangle is %f",ans);
}

