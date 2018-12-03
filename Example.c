#include<stdio.h>
#include<string.h>

typedef struct _TEMP
{
    char name[20];
    int len;
}Temp_Type;

void func(Temp_Type x)
{
    printf("In func : sizeof(x) = %d;\n", sizeof(x));
    printf("In func : &x = %p;\n", &x);
    printf("In func : &(x.name) = %p;\n", &(x.name));
    
    strcpy(x.name, "abcdefg");
    printf("In func : a.name = %s;\n",x.name);
    
}

void func1(Temp_Type *y)
{
    printf("In func1 : sizeof(y) = %d;\n", sizeof(y));
    printf("In func1 : y = %p;\n", y);
    printf("In func1 : &y = %p;\n", &y);
    strcpy(y->name, "Hello world");
    printf("In func1 :%s;\n", y->name);
    
}

int main(void)
{
    Temp_Type a;
    a.len = 10;
    strcpy(a.name, "Hello world");
    printf("In main : sizeof(a) = %d;\n", sizeof(a));
    printf("In main : &a = %p;\n", &a);
    printf("In main : &(a.name)= %p;\n",&(a.name));
    printf("In main : a.name = %s;\n", a.name);
    func(a);
    printf("In main : a.name = %s,\n",a.name);
    func1(&a);
    printf("In main : a.name = %s,\n",a.name);
    
    return 0;
}
