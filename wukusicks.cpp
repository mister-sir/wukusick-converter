#include <iostream>
#include "..\function libraries\user_interaction.h" //Contains function YesNo()... custom made by Brian Ulrich
using namespace std;

double meters;
double inches;
double feet;
double output;

int main(){
	cout << endl << "Welcome to the Wukusick Converter!\nThe handy converter to the world's most \"useful\" system of measurement." << endl << endl; //Salutations
	cout << "All input will be summed and converted to Wukusicks..." << endl;

while(1){
	/*Input collection*/
	cout << "Meters: ";
	cin >> meters; //Get meters input
	cout << "Feet: ";
	cin >> feet; //Get feet input
	cout << "Inches: ";
	cin >> inches; //Get inches input

	/*Conversion*/
	double work;
	work = meters + (feet*0.3048) + (inches*0.0254); //convert everything to meters and sum
	work = work - 1.905; //Subtract Luke's height in meters
	output = work * 1.008; //Multiply by 1.008 (atomic mass of a hydrogen atom...)
	cout << endl << "And the final answer in Wukusicks is: " << output;
	cout << "\n\n";
	
	cout << "Continue? ";
	if(!YesNo()) return 0;
}
}
