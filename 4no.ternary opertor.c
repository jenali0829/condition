#include<stdio.h>
main(){
	
	int a,b,c,d;
	
	printf("Enter value A:");
	scanf("%d",&a);
	
	printf("Enter value B:");
	scanf("%d",&b);
	
	printf("Enter value C:");
	scanf("%d",&c);
	
	printf("Enter value D:");
	scanf("%d",&d);
	
	a>b
	?
	a>c
	?
	a>d
	?
		printf("A is max")
		:
				printf("D is max")
				:
					c>d
					?
						printf("C is max")
						:
								printf("D is max")
								:
					b>c
					?
					b>d
					?
						printf("B is max")
						:
								printf("D is max")
								:
									c>d
									?
										printf("C is max")
										:
												printf("D is max");
						
}
