/*Program name: se016lib.c
  Student: 57160016 Thammarat kerdlumjiak
  Section: 01 */
#include"se016prj.h"
#define PI 3.1415926535897932384626433832795

int main(int argc,char*argv[])
{
	float a,b,c;
	float r1,r2;
	char sym;
	int menu,rmenu,smenu;


//----------------------------------------main menu calculator----------------------------------------------//
do{
	printf("\n======\n");
	printf("Menu\n");
	printf("======\n");
	printf("1.Regular Calculator\n");
	printf("2.Scientific Calculator\n");
	printf("3.Acountant Calculator\n");
	printf("4.Read Help and Notice\n");
	printf("0.Exit\n");
	menu = input("Select Menu: ");//input main menu
	system("clear");

//-----------------------------------------regular calculator----------------------------------------------//
if(menu==1){

do{
	printf("\n======================\n");
	printf("Regular Calculator Menu\n");
	printf("=======================\n");
	printf("1.PLUS\n");
	printf("2.MINUS\n");
	printf("3.MULTIPLY\n");
	printf("4.DIVIDE\n");
	printf("0.BACK\n");
	rmenu = input("Select Menu: ");//input regular  menu
	system("clear");


//STATEMENT
	if(rmenu==1){
		a=input("Enter value 1 st: ");
		b=input("Enter value 2 nd: ");
		c=plus(a,b);
		printf("\n");
		print("sum of","plus",a,b,c);
	}//plus a+b

	if(rmenu==2){
		a=input("Enter value 1 st: ");
		b=input("Enter value 2 nd: ");
		c=minus(a,b);
		printf("\n");
		print("result of","minus",a,b,c);
	}//minus a-b

	if(rmenu==3){
		a=input("Enter value 1 st: ");
		b=input("Enter value 2 nd: ");
		c=mult(a,b);
		printf("\n");
		print("result of","x",a,b,c);
	}//multiply a*b

	if(rmenu==4){
		a=input("Enter value 1 st: ");
		b=input("Enter value 2 nd: ");
		c=divind(a,b);
		printf("\n");
		print("result","/",a,b,c);
	}//divind a/b

}while(rmenu!=0);
}//END REGULAR

//------------------------------------------scientific calculator---------------------------------------------//
if(menu==2){

	do{
		printf("\n===========================\n");
		printf("Scientific Calculator Menu\n");
		printf("===========================\n");
		printf("1.Power function (x^y)\n");
		printf("2.Factorial Series (x!)\n");
		printf("3.Fibonacci Series \n");
		printf("4.Sine (Sin x)\n");
		printf("5.Cosine (cos x)\n");
		printf("6.Tangent (Tan x)\n");
		printf("7.Cosec (cosec x)\n");
		printf("8.Sec (sec x)\n");
		printf("9.Cot (cot x)\n");
		printf("0.Back\n");
		smenu = input("Select Menu: ");//input scientific  menu
		system("clear");

	if(smenu==1){
		a=input("Enter base(x): ");
		b=input("Enter power(y): ");
		c=power(a,b);
		printf("\n");
		print("result of","^",a,b,c);
	}//power a^b

	if(smenu==2){
		a=input("Enter numbers of term: ");
		c=factorial(a);
		printf("\n");
		spprint("Factorial of","!",a,c);
	}//Factorial x!

	if(smenu==3){
		a=input("Enter numbers of term: ");
		c=fib(a);
		printf("\n");
		spprint("Fibonacci of"," ",a,c);
	}//Fibonacci n term

	if(smenu==4){
		a=input("Enter your value: ");
		c=sine(a);
		printf("\n");
		spprintf("Sine of"," ",a,c);
	}//Sine x

	if(smenu==5){
		a=input("Enter your value: ");
		c=cosine(a);
		printf("\n");
		spprintf("Cosine of"," ",a,c);
	}//cos x

	if(smenu==6){
		a=input("Enter your value: ");
		r1=sine(a);
		r2=cosine(a);
		c=r1/r2;
		printf("\n");
		spprintf("Tangent of"," ",a,c);
	}//tan x

	if(smenu==7){
		a=input("Enter your value: ");
		c=sine(a);
		printf("\n");
		spprintf("Cosec of"," ",a,1/c);
	}//cosec x

	if(smenu==5){
		a=input("Enter your value: ");
		c=cosine(a);
		printf("\n");
		spprintf("Sec of"," ",a,1/c);
	}//sec x

	if(smenu==8){
		a=input("Enter your value: ");
		r1=sine(a);
		r2=cosine(a);
		c=r1/r2;
		printf("\n");
		spprintf("Cot of"," ",a,1/c);
	}//cot x

}while(smenu!=0);
}//END SCIENTIFIC

//---------------------------------------Accountat Calculator-----------------------------------------------------//
if(menu==3){

	warp:

		system("clear");
		printf("\n===========================\n");
		printf("Accountant Calculator Menu\n");
		printf("===========================\n");
		printf("Please set value first\n");
		printf("\n");
		//Head text

	int n,i,j,amenu;
	float rest,max,min,x_bar=0,sum=0;
	float med,mod,count;
	int temp;

		n=input("Enter number of term: ");
		 //Numbers of N

	float set[n];
	int numtemp[n];

	 for(i=0;i<n;i++){
		set[i]=inputAry("Enter value terms",i);
	} //Get value to array

	 for(i=0;i<n;i++){
	 	 for(j=0;j<=i;j++){
     			 if(set[j]>set[i]){
				rest=set[j];
				set[j]=set[i];
				set[i]=rest;
 			 }
  		}
  	}//Numbers Sort

//============EQUALTION===============//
//====================================>

//Max&Min
min = set[0];
max = set[n-1];
//====================================>

//X-bars
for(i=0;i<n;i++){
	sum+=set[i];
}//sum value
x_bar=(sum/n);
//average value to x-bar
//====================================>

//Med
if((n%2)!=0){
	med=set[((n+1)/2)-1];
}//Set value of med
else{
	med=(set[((n+1)/2)]+set[((n+1)/2)-1])/2;
}//Set value when med%2 is not 0

//====================================>

//Mode
for(i=0;i<n;i++){
	numtemp[i]=0;
}
for(i=0;i<n;i++){
	temp=set[i];
	for(j=i;j<n;j++){
		if(set[j]==temp){
			numtemp[i]++;
		}
	}
}//Check in ary lower to highter for count same numbers

temp=numtemp[0];
for(i=1;i<n;i++){
	if(numtemp[i]>temp){
		temp = numtemp[i];
	}
}//Check while highter ary position is more than lower && set highter value to temp

if(i==999){//Always False If

warp1://Warp form menu
j=0;

for(i=0;i<n;i++){
	if(numtemp[i]==temp){
		j++;
	}
}//Count j for check Mod value

if(j==1){
	for(i=0;i<n;i++){
		if(numtemp[i]==temp){
			printf("%.4f\n",set[i]);
		}
	}
}//True Mod is set[i]:

else{
	printf("Not have mode value\n");	
}//Else Mod > 1 value:

}

//====================================>
//Accountant cal Menu
	 do{
		printf("\n===========================\n");
		printf("Accountant Calculator Menu\n");
		printf("===========================\n");
		printf("1.Show max\n");
		printf("2.Show min\n");
		printf("3.Show x-bar\n");
		printf("4.Show range\n");
		printf("5.Show Med\n");
		printf("6.Show Mode\n");
		printf("7.Show value(sort)\n");
		printf("8.Set new value\n");
		printf("0.Back\n");
		amenu = input("Select Menu: ");//input acountant  menu
		system("clear");
//====================================>

		if(amenu==1){
			printf("\n");
			Aryprint("Max is",max);
		}

		if(amenu==2){
			printf("\n");
			Aryprint("Min is",min);
		}

		if(amenu==3){
			printf("\n");
			Aryprint("X-bar is",x_bar);
		}

		if(amenu==4){
			printf("\n");
			Aryprint("Range is",max-min);
		}

		if(amenu==5){
			printf("\n");
			Aryprint("Med is",med);
		}

		if(amenu==6){
			printf("\n");
			printf("Mode is: ");
			goto warp1;
		}

		if(amenu==7){
			printf("\n");
			printf("Set of number is(sort): ");
			for(i=0;i<n;i++){
			printf("%.3f ",set[i]);
			}
		}

		if(amenu==8){
			goto warp;
		}

		}while(amenu!=0);
	}

	if(menu==4){
		char text;

			help = fopen("User_helping.txt","r");
		
			while((text=fgetc(help))!=EOF){
				fprintf(stdout,"%c",text);
			}

			fclose(help);
	}
}while(menu!=0);

return 0;
}

