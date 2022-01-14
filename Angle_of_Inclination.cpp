#include <iostream>
#include<math.h>
using namespace std;
#define PI 3.14159265


int main()
{
	int x1,x2,y1,y2;
	cout<<"x1-";
	cin>>x1;
	cout<<"y1-";
	cin>>y1;
	cout<<"x2-";
	cin>>x2;
	cout<<"y2-";
	cin>>y2;
	float slope=(x2-x1)/(y2-y1);
	float theta=atan(slope);
	float degree=(theta*180)/PI;
	cout<<"Angle of inclination- "<<degree<<" Degrees";
	

	return 0;
}