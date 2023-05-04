// WAP in c++ to take length and breath of a rectangle and print its area.

#include<iostream>
using namespace std;
int main(){
	int length,breath,rectangle;
	cout<<"Enter the value of length : ";
	cin>>length;
	cout<<"Enter the value of breath : ";
	cin>>breath;
	rectangle = length * breath;
	cout<<"Area of rectangle : "<<rectangle<<endl;
	
	return 0;
}