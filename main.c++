/*
 * main.c++
 *
 *  Created on: Dec 29, 2023
 *      Author: Ali Reda
 */


#include <iostream>
using namespace std;

float sum(float x, float y)
{
	return x+y;
}

int main() {

	int x;
	cin>>x;

	bool is_even1=(x%2)==0;
	cout<<is_even1;

	double y=(double)x/2.0;
	y=y-(x/2);
	bool is_even3= (y==0);
	cout<<is_even3;

	bool is_even2=(x%10)==2 || (x%10)==0|| (x%10)==4|| (x%10)==6|| (x%10)==8;
	cout<<is_even2;
	return 0;
}
