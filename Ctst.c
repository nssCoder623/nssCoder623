#include <stdio.h>
#include <stdlib.h>

int main() {
			
	int a[10],n,i;
	int even=0,odd=0; 			/*int a[10],n,i,even=odd==0;   
									me even & odd define nhi hoga*/
	printf("Enter no. of Elements: ");
	scanf("%d", &n);
	
	printf("Enter %d Elements: ", n);
	
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
		
		for(i=0; i<n; i++)
		{ 
			if(a[i]%2==0)
			even++;
			
		else
			odd++;
		}
			printf("We have %d even elements & %d odd elements.", even, odd);
			
		
		return 0;
	}
