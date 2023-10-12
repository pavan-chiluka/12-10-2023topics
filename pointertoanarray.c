#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int *p=arr;
	int (*ptr)[5]=&arr;
	printf("%p %p\n",p,ptr);
	printf("%d %d\n",*p,**ptr);
        printf("%d %p\n",*p,*ptr);
	p++;
	ptr++;
	printf("%p%p\n",p,ptr);
	printf("%d %p\n",*p,*ptr);
}
	
	
