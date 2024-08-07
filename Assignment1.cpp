#include <iostream>
using namespace std;

class complex
{
	float x;
	float y;
public:
	complex(){
		x=0;
		y=0;
	 }
	complex(float real, float imag){
		x=real; y=imag;
		}
	complex operator+(complex);
	complex operator*(complex);
	void display(void);
};

complex complex :: operator+(complex c)
{
	complex temp;
	temp.x=x+c.x;
	temp.y=y+c.y;
	return(temp);
}

complex complex :: operator*(complex c2)
{
	complex temp2;
	temp2.x=x*c2.x - y*c2.y;
	temp2.y=x*c2.y + y*c2.x;
	return (temp2);
}
void complex :: display(void)
{
	cout<<x<<" + j"<< y <<"\n";
}

int main()
{
	float a,b,c,d;
	cout<<"Enter real part of 1st Complex Number: ";
	cin>>a;
	cout<<"Enter imag part of 1st Complex Number: ";
	cin>>b;
	cout<<"Enter real part of 2nd Complex Number: ";
	cin>>c;
	cout<<"Enter imag part of 2nd Complex Number: ";
	cin>>d;
	complex C1,C2,C3,C4;
	C1=complex(a,b);
	C2=complex(c,d);
	C3=C1+C2;
	C4=C1*C2;

	cout<<"C1= ";C1.display();
	cout<<"C2= ";C2.display();
	cout<<"C3= ";C3.display();
	cout<<"C4= ";C4.display();

	return 0;
}
