#include <stdio.h>

void main(){
	float val, tag, deprec, year, n  ;
	int  choice = 1;
	printf("Depreciation Calculator:");
	while(choice >= 1 && choice <= 4){
		printf("\n\tYou have the following options.\nPress:\n1 for straight-line method\n2 for double-declining-method\n3 for sum-of-the-years'-digits method\n4 to Exit\n"); 
		scanf("%d", &choice);
		printf("\tYou chose ");
		switch(choice){
			case 1:
				printf("straight-line method.");
				break ;
			case 2:
				printf("double-declining-balance method.");
				break ;
			case 3:
				printf("sum-of-the-years' method.");
				break ;
			default :
				printf("to exit.");			
		}
		if(choice >= 1 && choice <= 3){
			printf("\n\tEnter the amount to be depreciated(Rs):\n\t");
			scanf("%f", &tag);
			printf("\n\tEnter the life of item(years):\n\t");
			scanf("%f", &n);
			switch(choice){
				case 1:
					deprec = tag / n ;
					printf("\tDepreciation Rate is: %f \n\t", deprec);
					val = tag ;
					for(year = 1 ; year <= n; year ++){
						val = val - deprec ;
						printf("The Depreciation for year %2.0f is %10.2f.\n\t", year,(tag - val));
					}
					break ;
				case 2:
					deprec =  2 / n ;
					printf("\tDepreciation factor is: %f \n\t", deprec);
					val = tag ;
					for(year = 1 ; year <= n ; year ++){
						tag = val ;
						val = val - deprec * val ;	
						printf("The depreciation for year %.0f is %.2f.\n\t", year, tag - val);
					}
					break;
				default:	
					for(year = n ; year >= 1; year--){
						deprec = year / (n*(n + 1)/2) ;
						val = deprec * tag ;
						printf("\tThe depreciation for year %.0f is Rs. %.2f.\n", ( n - year + 1), val);
					}	
			}		
			printf("\n\tWanna Calculate Again?\n");	
		}else{
			break ;
		}
	}
}
