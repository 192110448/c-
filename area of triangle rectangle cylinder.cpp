#include<iostream>
using namespace std;
class circle
{
	protected:
		float radius;
	public:
		void enter_r(void)
		{
			cout<<"\n\t Enter the radius: ";
			cin>>radius;
		}
		void display_ca(void)
		{
			cout<<"\t The area of circle is: "<<((22/7)*radius*radius);
		}
};
class rectangle
{
	protected:
		float length,breadth;
	public:
		void enter_lb(void)
		{
			cout<<"\t Enter the length: ";
			cin>>length;
			cout<<"\t Enter the breadth: ";
			cin>>breadth;
		}
		void display_ar(void)
		{
			cout<<"\t The area of rectangle is: "<<(length*breadth);
		}
};
class cylinder
{
	protected:
		float radius1,length1;
	public:
	    void enter_r1(void)
		{
			cout<<"\t The radius of the cylinder is: ";
			cin>>radius1;
		}
		void enter_l1(void)
		{
			cout<<"\t The length of cylinder is: ";
			cin>>length1;
		}
		void display_vol(void)
		{
			cout<<"\t The volume of cylinder is: "<<((22/7)*radius1*radius1*length1);
		}
};
int main()
{
	circle c;
	cout<<"\n Getting the radius of the circle\n";
	c.enter_r();
	c.display_ca();
	rectangle r;
	cout<<"\n\n Getting the length and breadth of the rectangle\n\n";
	r.enter_lb();
	r.display_ar();
	cylinder cy;
	cout<<"\n\n Getting the height and radius of the cylinder\n\n";
	cy.enter_r1();
	cy.enter_l1();
	cy.display_vol();
return 0; 
}
