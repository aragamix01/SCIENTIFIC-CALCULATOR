/*Program name: se016prj.h
  Student: 57160016 Thammarat kerdlumjiak
  Section: 01 */
#include<stdio.h>
#include<string.h>
#define PI 3.1415926535897932384626433832795

FILE*help;


/*==============Function+Declaration=================*/
float input(char*inname);
float inputAry(char*inname,int num);
float plus(float adder,float addin);
float minus(float miner,float minin);
float mult(float multer,float multin);
float divind(float divider,float dividin);
int factorial(int term);
int fib(int term);
float power(float base,int pow);
float sine(float radius);
float cosine(float radius);
int spprint(char*screen,char*sym,int ini,int res);
float spprintf(char*screen,char*sym,float ini,float res);
float print(char*screen,char*sym,float ini,float upt,float res);
float Aryprint(char*screen,float ans);

