

void InitStack(SeqStack *S);
int IsEmpty(SeqStack *S);
int IsFull(SeqStack *S);
int Push(SeqStack *S, StackElementType x);
int Pop(SeqStack *S, StackElementType *x);
int GetTop(SeqStack *S,StackElementType *x);

void InitStack(SeqStack *S)
{   // 将S初始化为一个空栈

}

int IsEmpty(SeqStack *S)
{   // 判断栈S是否为空栈，是返回TRUE，否则返回FALSE 

}

int IsFull(SeqStack *S)
{   // 判断栈S是否已满，是返回TRUE，否则返回FALSE 

}

int Push(SeqStack *S, StackElementType x)
{   // 将数据元素x进栈S，若栈S已满，返回FALSE，否则返回TRUE

}

int Pop(SeqStack *S, StackElementType *x)
{   // 将栈S的栈顶元素出栈，通过x返回
    // 若栈S为空，返回FALSE，否则返回TRUE

}

int GetTop(SeqStack *S,StackElementType *x)
{   // 取栈S的栈顶元素，通过x返回
    // 若栈S为空，返回FALSE，否则返回TRUE

}

