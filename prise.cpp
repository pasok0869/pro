#include"Price.h"
#include<iostream>
using namespace std;
Price::Price(){}

Price::Price(int num1,int num2,int num3)
{
  num1=0 ;
	num2=0;
	num3=0;
}

int Price::getvod()
{
	return num1+num2+num3;
}

