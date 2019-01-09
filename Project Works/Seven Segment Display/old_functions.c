void ShowLine(int line, int input){
	switch(line){
//		if( line ==)
		case 0:
		case 3:
		case 6:
			if(input == 1){
				printf("%d%d%d%d%d%d", line,line,line,line,line,line);
				// printf("%s", h_char);
			}else{
//				printf("%d%d%d%d%d%d", 0,0,0,0,0,0);
				 printf("%s", h_fill);
			}
			printf("\n");
			break ;
		case 1:
		case 4:
			if(input == 1){
				printf("%d%d",line,line);
				// printf("%s", v_char);
			}else{
				printf("%d%d",0,0);
				// printf("%s", v_fill);
			}
			printf("%s", inner_spacing);
			break ;
		case 2:
		case 5:	
				if(input == 1){
					printf("%d%d",line,line);
					// printf("%s", v_char);
				}else{
					printf("%d%d",0,0);
					// printf("%s", v_fill);
				}
				printf("%s", inner_spacing);
				printf("\n");
				break ;			
	}
}


void ShowChar(int map[7]){
	int i;
	for( i = 0; i< 7; i++){
//		switch(i){
//			case 0:
//			case 3:
//			case 6:
//				if( map[i] == 1){
////					printf("%d", i);
//					 printf("%s", h_char);
////					printf("%d", 0);
//				}else{
////					printf("%d", i);
//					printf("%s", h_fill);
////					printf("%d", 0);
//				}
////				printf("\n");
//				break ;
//			case 1:
//			case 4:	
//			case 2:
//			case 5:	
//				if( map[i] == 1){
////					printf("%d", i);
//					printf("%s", v_char);
////					printf("%d", 0);
//				}else{
////					printf("%d", i);
//					printf("%s", v_fill);
////					printf("%d", 0);
//				}
//				if(i == 1 || i == 4){
//					 printf("%s", letter_spacing);
//				}
//				break ;				
//		}
//		switch( i ){
//			case 0:
//			case 2:
//			case 3:
//			case 5:
//			case 6:
//				printf("\n");
//				break;
//		}
	ShowLine(i, map[i]);
	}

}

main(){
////	printf("__\n|  |\n__\n|  |\n__");
//	ShowChar(map[0]);
//	printf("\n\n\n\n");
//	ShowChar(map[1]);
//	printf("\n\n\n\n");
//	ShowChar(map[2]);
	int i;
	for( i = 0; i< 4; i++){
		printf("\n\n Map of: %d\n\n",i );
	ShowChar(map[i]);
//	printf("\n\n\n\n");		
	}	
}


