#include <stdio.h>
#include <stdlib.h>

#include "Stack_Sq.cpp"

int BracketMatch(char *str);

int main()
{   char str[100];

    printf("Please input a string:");  gets(str);
    switch( BracketMatch(str) )
    {   case 0:
        case 1:
        case 2:
        case 3:
    }
    getchar();  getchar();
    return 0;
}

int Match(char ch1,char ch2)
{   // 判断左括号ch1和右ch2是否匹配，匹配返回TRUE，否则返回FALSE

}

int BracketMatch(char *str)
{   // str[]中为输入的字符串，利用堆栈技术来检查该字符串中的括号是否匹配
    SeqStack S;  int i;  char ch;

    InitStack(&S);
    for (i=0; str[i]!='\0'; i++)   // 对字符串中的字符逐一扫描
    {   switch(str[i])
        {   case '(':
            case '[':
            case '{': Push(&S,str[i]);  break;
            case ')':
            case ']':
            case '}': if ( IsEmpty(&S) )  return 2;
                      GetTop(&S,&ch);
                      if ( Match(ch,str[i]) )  // 用Match判断两个括号是否匹配
                          Pop(&S,&ch);         // 已匹配的左括号出栈
                      else  return 3;
        }
    }
    return ( IsEmpty(&S)? 0 : 1 ); 
}
