#include<stdio.h>
int my_atoi(char *);
double my_atof(char *);
int main()
{
    char s1[20];
    printf("Enter a string:\n");
    scanf("%s",s1);
    printf("Integer = %d\n",my_atoi(s1));
    printf("Float = %.6f\n",my_atof(s1));
    return 0;
}
int my_atoi(char *s)
{
    int n=0;
    int sign=1;
    if(*s=='-')
    {
        sign=-1;
        s++;
        if(*s<'0'||*s>'9')
        return 0;
    }
    if(*s<'0'||*s>'9')
        return 0;
    while(*s>='0' && *s<='9')
    {
        n=n*10+(*s-48);
        s++;
    }
    return n*sign;
}
double my_atof(char *s)
{
    double n=0;
    double d=0.1;
    int sign=1;
    if(*s=='-')
    {
        sign = -1;
        s++;
        if(*s<'0'||*s>'9')
        return 0;
    }
    if(*s<'0'||*s>'9')
        return 0;
    while(*s>='0' && *s<='9')
    {
        n=n*10+(*s-48);
        s++;
    }
    if(*s =='.')
    {    
        s++;
        while(*s>='0' && *s<='9')
        {
            n=n+(*s-48)*d;
            d=d/10;
            s++;
        }
    }
    return n*sign;
}