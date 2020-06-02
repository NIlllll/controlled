
 #include <stdio.h>

int  main() { 
  char firstArray[3];
firstArray[0] = 'a'; 
firstArray[1] = 'b';
firstArray[2] = 'c'; 

char secondArray[3]; 
secondArray[0] = 'x'; 
secondArray[1] = 'y';
secondArray[2] = 'z';

char *arraypointer1; 
char * arraypointer2; 
arraypointer1 =  firstArray; 
arraypointer2 = secondArray; 
   for(int  i = 0 ; i< 3; i++) {
  printf("%d th item of firstArray is %c\n ", i, *(arraypointer1 + i)   );
  printf("%d th item of secondArray is %c\n", i, *(arraypointer2 + i)); 
 } 
 
char *parray[2]; 
parray[0] = firstArray; 
parray[1] = secondArray; 
for(int  i = 0 ; i< 2; i++) {
	for (int j = 0 ; j<3; j++) { 
 
printf("%d th element of firstarray is %d\n", j,((parray[i][j])) ); 

 }   } 


for (int i = 0; i< 2; i++) { 
printf("%d the array  has these values %d\n",i ,*parray[i]); 

} 



return 0 ; 
 
 } 
