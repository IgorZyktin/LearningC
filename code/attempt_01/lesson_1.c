#include <stdio.h>

// this is comment
void func(void)
{
    printf("I'm func\n");
}

/*
This is also a comment
*/ 

int main(void)
{
    printf("calling function");
    printf(" ");
    printf("named func\n");
    func();

    printf("and few more times\n");
    func();
    func();
}


