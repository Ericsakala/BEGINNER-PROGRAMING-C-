#include <stdio.h>
#include <stdbool.h>//for using boolean variables
#include <math.h>//for the mathematical operations
				//it works the same as the cmath in c++
			 // log().ceil(),sin(),cos(),pow(),sqrt().etc

int main(){
// we use similar datatypes as in c++ but in c there is no string
//to print out to the screen we use printf(some arguments)
//we also terminate the the line with the smicolon
   //foormat specifier//
   //to use format specifier inside print statement we use $%then dtatype
    
	//costants in c are decraired and work the same ass in c++
	//arithmentic operators
	//in case you are dividing integers but provide with decimals we can cast double before the divisor
	//e.g 
//	int x=8;
//	int y=9;
//int z=x/(double or float)y; casting
//printf("%d",z);
		//user input
		//to get input from the user we use scanf("formart specifier");
		//e.g int a; scanf("%d",&a); the we pass variable as the the reference to a scaf function
//		 // for the array of character that can include a space 
		 //we use fgets(name,size,stdlin)
//if stements
//same syntax as c++
//you can also combine it with the else statement just like in c++
//also the the else if;

//trying to make a simple calculator in c
//float num1,num2,answer;
//char sign;
//printf("THIS PROGRAMME PERFORM THE SIMPLE CALCULATIONS\n");
//printf("Enter the first number \n");
//scanf("%f",&num1);
//printf("Enter the symbol (*,+,- or /)\n");
//scanf("%s",&sign);
//printf("Enter the second number \n");
//scanf("%f",&num2);
//if(sign=='+'){
//	answer=num1+num2;
//	
//}else if(sign=='-'){
//	answer=num1-num2;
//}
//else if(sign == '/'){
//	answer=num1/num2;
//}
//else if(sign =='*'){
//	answer=num1*num2;
//}else{
//	printf("invalid sign\n");
//}
//
//printf("The answer is %f ",answer);
//typedef is the ke word that is used to name the group of data
//e.g struct{int sid; char name[12];}user;


int arr[]={1,3,-6,7,5};
int i=0;
for(int i=0;i<6;i++){
	for(int j=i+1;j<6;j++){
		if(arr[i]>arr[j]){
			int temp =arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	
}
int b =0;

}