#include<stdio.h>

void fun(int a){
	printf("value of a is %d\n",a);
}

int main(){
	//void (*fun_ptr) (int) = fun;
	void (*fun_ptr) (int);
	fun_ptr = &fun;
	
	//fun_ptr(10);
	(*fun_ptr)(10);
	return 0;
}
