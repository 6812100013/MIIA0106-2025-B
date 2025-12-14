#include <iostream>
#include <string>
using namespace std;

double circleArea(double radius)
{
	return 3.14*radius * radius;

}


double rectArea(double width,double height)
{

	double result= width * height;
	return result;


}



int main()
{
	double radius; // declare radius variable
	double result;

	cout << "Enter the radius :";
	cin >> radius;



	//result = 3.14 * radius * radius;
	//cout << "The area of the circle is :" << result << endl;
	
	result = circleArea (radius) ;
	cout << "The area of the circle is :" << result << endl;




	//width,height
	double width, height;
	cout << "Enter width :";
	cin >> width;//read width

	cout << "Enter height :";
	cin >> height;

	result = rectArea(width, height);
	cout << "The Area of The rectangle is:" << result << endl;






	return 1;
}