#include <stdio.h>



void scanner();
void nextToken();
void genTree();
void interpretor();


// 自动机定义
typedef struct AutomatonType
{
    
};



int main(int count, char** args){
    printf("hello");
    printf("%s", args[1]);
    char a;
    FILE* f = fopen(args[1], "r");
    while (int c = fgetc(f) )
    {
        if(c == EOF) break;
        fputc(c, stdout);
    }
    
    return 0;
}

void scanner(){}
void nextToken(){}
void genTree()
{
}

void interpretor()
{
}
