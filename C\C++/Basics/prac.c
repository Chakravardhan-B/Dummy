#include<stdio.h>
int chakri=10;
struct Person{
    char name[50];
    short age;
    int score;
};
union marks{
    int s;
    float gpa;
    float per;
    char grade;
}student;
enum fruits{mango=0/2,apple,banana};
void fun(int);
// enum favfruits{guava,banana,strawberry}k;
void fun2(){
    printf("fun2\n");
}
void fun1(void(*fp)()){
    printf("fun1\n");
    (*fp)();
    fun2();
}
int main(){
    // printf("Hello");
    // float x=100000.24;
    // int y=10;
    // int *i=&y;
    // printf("FOrmat sepcifiers\n");
    // printf("%n",i);
    // printf("\n%s","%%");
    // printf("\n%o",y);
    // printf("\n%x",y);
    // printf("\n%p",i);
    // printf("\n%p",&y);
    // printf("\x76");
    // char str[]="Hello world";
    // printf("%30s\n",str);
    // printf("%-30s\n",str);
    // printf("%30.5s\n",str);
    // float x=10.3426892;
    // long double y=10.3522353434;
    // printf("%10.4lf\n",x);
    // printf("%f\n",x);
    // printf("%lf\n",x);
    // printf("%Lf\n",y);
    // unsigned auto short a=-1;
    // printf("%u\n",a);
    // struct Person p1;
    // // p1.name="Chakri";
    // p1.age=20;
    // p1.score=10.0;
    // printf("%d\n",p1.age);
    // student.gpa=69.91;
    // // student.grade='A';
    // student.s=69;
    // student.grade='A';
    // printf("%d\n",student.s);
    // printf("%c\n",student.grade);
    // printf("%f\n",student.gpa);
    // enum fruits f;
    // f=mango;
    // printf("%d",f);
    // {
    //     enum favfruits{mango,custard}k;
    //     k=0;
    // printf("%d",k);
    // }
    // float f=(float)9/4;
    // printf("%f",f);
    // float a=10+5.5;
    // printf("%f",a);
    // int a=50,b=51,c=5;
    // printf("%d",(a==(--b)) && (b/c==10));
    // a=(35,45,89);
    // printf("\n%d",a);
    // a=(b=45,c=90);
    // printf("\n%d\n%d\n%d",a,b,c);
    // printf("Hello\n");
    // printf("Hello");
    // a=b=5;
    // printf("%d%d",a,b);
    // int x=4,y=5;
    // x+=y<<=1;
    // printf("%d,%d\n",x,y);
    // x=6,y=5;
    // a=4,b=2,c=3;
    // int result=a+b*c<<2&8-b;
    // printf("\n%d\n",result);
    // a=5,b=10;
    // printf("\n%d\n",a>b?a:b>0?b:-1);
    // int d;
    // a=6,b=3,c=4,d=2;
    // printf("%d",a+++--b*c&d|a--||b++&&--c*d++);
    // printf("\n%d %d %d %d\n",a,b,c,d);
    // const int xy;
    
    // printf("%d",xy);
    // // xy=100;
    // int x=525;
    // void* p=&x;
    // printf("%i",*(char*)p);
    // int a=3;
    // int *p=&a;
    // *p=5;
    // printf("%d,%d\n",a,*p);

    // const int a1=3;
    // const int* p1=&a1;
    // const int b=10;
    // p1=&b;
    // printf("%d,%d\n",a1,*p1);

    // const int a2=10;
    // // int* p2=&a2;
    // // *p2=20;
    // // printf("%d,%d",a2,*p2);
    // printf("\n%ld\n",sizeof(void));
    // char a='a',b='b',c='c',d='d';
    // char* p[4];
    // p[0]=&a,p[1]=&b,p[2]=&c,p[3]=&d;
    // printf("%c\n",a);
    // printf("%c\n",*p[0]);
    // printf("%c\n",*(*p+1));
    // int v[]={1,2,3,4,5};
    // int *p1=v;
    // int *p2=&v[0];
    // int *p3=v+4;
    // printf("%d",*(p3+(p1-p2)-2));
    // printf("%lu",sizeof(v));
    // int a[][4]={{1,2,987},{1,2,9}};
    // char s[]={'a','b','c'};
    // char s1[]="abc";
    // // printf("%d",(int*)s);
    // printf("\n%lu %lu\n",sizeof(s),sizeof(s1));
    // char c[]="GATE2011";
    // char *p=c;
    // printf("%s",p+p[3]-p[1]);
    // fun(190);
    fun1(fun2);
    return 1;
}
void fun(const int x){
    printf("Value of x is %d\n",x);
    // x=200;
    return ;
}