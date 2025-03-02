#include<stdio.h>
// #include "file.h"
// #include "prac.c"
#pragma pack(1)
extern int chakri;
int f(int n){
    static int r=0;
    if(n<=0) return 1;
    if(n>3){
        r=n;
        return  f(n-2)+2;
    }
    return f(n-1)+r;
}
struct stu{
    char a;
    int h;
    char b;
}var;
struct emp{
    char a;
    int b1;
    double c;
    char d;
    double e;
}var1;
void func(int a){
    printf("%d",a);
}
int main(){
    // printf("%d",chakri);
    // fun();
    // printf("%d",f(4));
    // printf("%lu",sizeof(var1));
    // char *str;
    // printf("%s",gets(str));
    // printf("%s",str);
    // char *s="hello";
    int x=5;
    func(x--);
    printf("%d",x);
}
