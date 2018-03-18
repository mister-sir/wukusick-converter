//Version 2 adds a menu, some history and other trivia, and, most importantly, the ability to convert from Wukusicks to other units
//Software by Brian Ulrich
#include <iostream>
using namespace std;

void toWukusicks();
void fromWukusicks();

#define height_in_meters 1.905 //Luke Wukusick's current height in meters

int choice;

int main(){
	cout << "\n" << "Welcome to the Wukusick Converter!\nThe handy converter to the world's most \"useful\" system of measurement." << "\n\n"; //Salutations

	/*Menu*/
	while(1){
		cout << "\nMenu (choose 0 to quit):\n   1. Convert to Wukusicks\n   2. Convert from Wukusicks\n   3. See how the conversion works\n   4. Read about the history of the Wukusick\n----------------------> ";
		cin >> choice;
		cout << "\n";

		switch(choice){
		case 0:
			return 0;
		case 1:
			toWukusicks();
			break;
		case 2:
			fromWukusicks();
			break;
		case 3:
			cout << "\nConverting Wukusicks to Meters\n================================\nOne unit of Wukusick, so to speak, is equal to 1.008 meters.\nThis is equal to the atomic mass of a hydrogen atom. However,\nthe zero-point of the Wukusick system is at the CURRENT\nheight of Luke Wukusick (set to 6' 2\" in this program)\n\nSo, to convert Wukusicks to meters, divide by 1.008\nand add Luke's current height in meters (currently 1.905).\n\n";
			break;
		case 4:
			cout << "\nThe History of the Wukusick\n=============================\nThe Wukusick was invented by Luke Wukusick sometime during\n2013. It was created to be a very \"useful\" (pointless)\nsystem of measurement, poking fun at the standard\nCelsius and Farenheit temperature scales. (Which both\nhave semi-arbitrary zero points)\n\n";
			break;
		default:
			cout << "That's not a valid choice.\n\n";
			break;
		}
	}
	/*End of Menu*/
}

void fromWukusicks(){
	double wukusicks;
	double output;
	int choice;

	cout << "How many Wukusicks?: ";
	cin >> wukusicks;
	cout << "\n";

	/*Convert to meters*/
	output = wukusicks / 1.008; //Convert a wukusick length to a meter...
	output = output + height_in_meters; //Add Luke's height in meters

	cout << "Type the number of the unit to convert to:\n   1. Feet\n   2. Meters\n   3. Inches\n   4. Feet and Inches\n----------------------> ";
	cin >> choice;
	cout << "\n";

	switch(choice){
	case 1:
		output = output * 3.28083; //Convert value computed above to feet
		cout << "\n" << "And the final answer is " << output << " feet" << "\n\n"; //Output answer
		break;
	case 2:
		cout << "\n" << "And the final answer is " << output << " meters"<< "\n\n"; //This uses the value already computed above
		break;
	case 3:
		output = output * 39.36996; //Convert value computed above to inches
		cout << "\n" << "And the final answer is " << output << " inches" << "\n\n"; //Output answer
		break;
	case 4:
		output = output * 39.36996; //Convert value computed above to inches
		cout << "And the final answer is " << ((int)output / 12) << " feet and " << ((int)output % 12) << " inches" << "\n\n"; //Note: this will probably round to the nearest inch, unlike option 3
		break;
	default:
		cout << "That's not a valid choice.\n\n";
		return; //This will return to the main menu...
	}
}

void toWukusicks(){
	double meters;
	double inches;
	double feet;
	double output;

	cout << "All units will be summed and converted to Wukusicks..." << "\n"; //Instructions
	/*Input collection*/
	cout << "Meters: ";
	cin >> meters; //Get meters input
	cout << "Feet: ";
	cin >> feet; //Get feet input
	cout << "Inches: ";
	cin >> inches; //Get inches input

	/*Conversion*/
	double work;
	work = meters + (feet / 3.28083) + (inches / 39.36996); //convert everything to meters and sum
	work = work - height_in_meters; //Subtract Luke's height in meters
	output = work * 1.008; //Multiply by 1.008 (atomic mass of a hydrogen atom...)
	cout << "\n" << "And the final answer in Wukusicks is: " << output;
	cout << "\n\n";
}
