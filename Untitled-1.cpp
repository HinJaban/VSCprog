#include <iostream>
using namespace std;

struct Stack1 {
	int top; 
	int* data; /* динамический массив*/
	int size;
};
void InitStack(Stack1& st, int capacity) {
	st.data = new int[capacity];
	st.size = capacity; /*новая строчка кода*/
	st.top = -1; /*-1 => в стеке ничего нет*/
}
void push(Stack1& st, int value) {
	if (st.size - 1 > st.top)   /* старый код*/
	/*if (sizeof(st.data) / sizeof(int) - 1>st.top) /* новый код*/
		st.data[++st.top] = value; /* ++st -> сначала увеличиваем вершину*/
	else
		cout << "Stack overflow" << endl;
}
int pop(Stack1& st) {
	return st.data[st.top--]; /* Перед тем как вернуть , мы top уменьшаем на единицу, если бы было --top, то значение переменной уменьшилось на единицу лишь после возвращения функции main */
}
void nullStack(Stack1& st) {
	st.top = -1;
}
bool empty(Stack1& st) {
	return st.top == -1;
}
void main() {
	Stack1 st;
	InitStack(st, 20);
	push(st, 5);
	push(st, 55);
	push(st, 555);
	push(st, 58555);
	push(st, 553555);
	push(st, 557555);
	push(st, 5556555);
	push(st, 5558755);
	push(st, 5556955);
	push(st, 555955);
	push(st, 5545555);
	push(st, 558555);
	push(st, 555655);
	
	int a;
	while (!empty(st)) {
		a = pop(st);
		cout << a << " ";
	}
}