//This program converts fahrenheit to celcius
#include<iostream>
#include<string>
using namespace std;

int main(){
	double f;
	cout<<"Enter the value of fahrenheit: "<< endl;
	cin>> f;
	cout<<"The value of fahrenheit that you entered is: "<<(f - 32) / 1.8<<" *celcius";
}
