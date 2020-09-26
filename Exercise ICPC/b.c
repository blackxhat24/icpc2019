#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long double a,b,c;
	long long d;
	
	cin>>a>>b>>c;
	a = ceil(a / c);
	b = ceil(b / c);

	
	d = a*b;
	cout<<d;
}
