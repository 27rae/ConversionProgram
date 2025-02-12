#include <iostream>
#include <fstream>
using namespace std;

double input, output;
int num;
// LENGTH
void kmMiles () {
    double km, miles;
    bool validInput = false;
    ofstream outFile("Conversions.txt", ios::app);
    
    if (!outFile) { 
        cout << "Error opening file!" << endl;
        return;
    }
    while (!validInput){
    cout << "1. Miles to Kilometers" << endl << "2. Kilometers to Miles: ";
	cin >> num;
	
	if (num == 1){ // 1 is km to miles. 2 is miles to km
		cout << "Input Kilometers: ";
		cin >> km;
		miles = km * 0.621371;
		outFile << "Kilometers: " << km << "\t" << "Miles: " << miles << endl;
		cout << "================================================" << endl;
		cout << "Kilometers: " << km << "\t" << "Miles: " << miles << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
   } else if (num == 2){
		cout << "Input Miles: ";
		cin >> miles;
		km = miles / 0.621371;
		outFile << "Miles: " << miles << "\t" << "Kilometers: " << km << endl;
		cout << "================================================" << endl;
		cout << "Miles: " << miles << "\t" << "Kilometers: " << km << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else {
		cout << "Invalid input. Please enter 1 or 2:" <<endl;
	}
}
	outFile.close();
}
void metersFeet() {
    double meters, feet;
    bool validInput = false;
    ofstream outFile("Conversions.txt", ios::app);
    
    if (!outFile) { 
        cout << "Error opening file!" << endl;
        return;
    }
    
    while (!validInput){
    cout << "1. Meters to Feet"	<< endl << "2. Feet to Meters: ";
    cin >> num;
    
    if (num == 1){
    	cout << "Input Meters: ";
    	cin >> meters;
    	feet = meters * 3.28084;
    	outFile << "Meters: " << meters << "\t" << "Feet: " << feet << endl;
    	cout << "================================================" << endl;
		cout << "Meters: " << meters << "\t" << "Feet: " << feet << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else if (num == 2){
		cout << "Input Feet: ";
		cin >> feet;
		meters = feet * 0.3048;
		outFile << "Feet: " << feet << "\t" << "Meters: " << meters << endl;
		cout << "================================================" << endl;
		cout << "Feet: " << feet << "\t" << "Meters: " << meters << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else {
		cout << "Invalid input. Please enter 1 or 2:" << endl;
	}
	}
	outFile.close();
}
void cmInches(){
    double cm, inches;
    bool validInput = false;
    ofstream outFile("Conversions.txt", ios::app);
    
    if (!outFile) { 
        cout << "Error opening file!" << endl;
        return;
    }
    
    while (!validInput){
    cout << "1. Centimeters to Inches" << endl << "2. Inches to Centimeters: ";
    cin >> num;
    
    if (num == 1){
    	cout << "Input Centimeters: ";
    	cin >> cm;
    	inches = cm * 0.393701;
    	outFile << "Centimeters: " << cm << "\t" << "Inches: " << inches << endl;
    	cout << "================================================" << endl;
		cout << "Centimeters: " << cm << "\t" << "Inches: " << inches << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else if (num == 2){
		cout << "Input Inches: ";
		cin >> inches;
		cm = inches * 2.54;
		outFile << "Inches: " << inches << "\t" << "Centimeters: " << cm << endl;
		cout << "================================================" << endl;
		cout << "Inches: " << inches << "\t" << "Centimeters: " << cm << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else {
		cout << "Invalid input. Please enter 1 or 2:" << endl;
	}
	}
	outFile.close();
}
// MASS
void kgPounds(){
    double kg, pounds;
    bool validInput = false;
    ofstream outFile("Conversions.txt", ios::app);
    
    if (!outFile) { 
        cout << "Error opening file!" << endl;
        return;
    }
    while (!validInput){
    cout << "1. Kilograms to Pounds" << endl << "2. Pounds to Kilograms: ";
    cin >> num;
    
    if (num == 1){
    	cout << "Input Kilograms: ";
    	cin >> kg;
    	pounds = kg * 2.20462;
    	outFile << "Kilograms: " << kg << "\t" << "Pounds: " << pounds << endl;
    	cout << "================================================" << endl;
		cout << "Kilograms: " << kg << "\t" << "Pounds: " << pounds << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else if (num == 2){
		cout << "Input Pounds: ";
		cin >> pounds;
		kg = pounds / 2.20462;
		outFile << "Pounds: " << pounds << "\t" << "Kilograms: " << kg << endl;
		cout << "================================================" << endl;
		cout << "Pounds: " << pounds << "\t" << "Kilograms: " << kg << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else {
		cout << "Invalid input. Please enter 1 or 2:" << endl;
	}
	}
	outFile.close();
}
void gramsOunces(){
    double grams, ounces;
    bool validInput = false;
    ofstream outFile("Conversions.txt", ios::app);
    
    if (!outFile) { 
        cout << "Error opening file!" << endl;
        return;
    } 
    while (!validInput){
    cout << "1. Grams to Ounces" << endl << "2. Ounces to Grams: ";
    cin >> num;
    
    if (num == 1){
    	cout << "Input Grams: ";
    	cin >> grams;
    	ounces = grams * 0.035274;
    	outFile << "Grams: " << grams << "\t" << "Ounces: " << ounces << endl;
    	cout << "================================================" << endl;
		cout << "Grams: " << grams << "\t" << "Ounces: " << ounces << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else if (num == 2){
		cout << "Input Ounces: ";
		cin >> ounces;
		grams = ounces / 0.035274;
		outFile << "Ounces: " << ounces << "\t" << "Grams: " << grams << endl;
		cout << "================================================" << endl;
		cout << "Ounces: " << ounces << "\t" << "Grams: " << grams << endl;
		cout << "================================================" << endl<< endl;
		validInput = true;
	} else {
		cout << "Invalid input. Please enter 1 or 2:" << endl;
	}
	}
	outFile.close();
}
void usMetric(){
    double ustons, mtons;
    bool validInput = false;
    ofstream outFile("Conversions.txt", ios::app);
    
    if (!outFile) { 
        cout << "Error opening file!" << endl;
        return;
    }
    
    while (!validInput){
    cout << "1. Metric Tons to US Tons:" << endl << "2. US Tons to Metric Tons: ";
    cin >> num;
    
    if (num == 1){
    	cout << "Input Metric Tons: ";
    	cin >> mtons;
    	ustons = mtons * 1.10231;
    	outFile << "Metric Tons: " << mtons << "\t" << "US Tons: " << ustons << endl;
    	cout << "================================================" << endl;
		cout << "Metric Tons: " << mtons << "\t" << "US Tons: " << ustons << endl;
		cout << "================================================" << endl<< endl;
		validInput = true;
	} else if (num == 2){
		cout << "Input US Tons: ";
		cin >> ustons;
		mtons = ustons / 1.10231;
		outFile << "US Tons: " << ustons << "\t" << "Metric Tons: " << mtons << endl;
		cout << "================================================" << endl;
		cout << "US Tons: " << ustons << "\t" << "Metric Tons: " << mtons << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else {
		cout << "Invalid input. Please enter 1 or 2:" << endl;
	}
	}
	outFile.close();
}
// VOLUME
void litersG(){
    double liters, gallons;
    bool validInput = false;
    ofstream outFile("Conversions.txt", ios::app);
    
    if (!outFile) { 
        cout << "Error opening file!" << endl;
        return;
    }
    
    while (!validInput){
    cout << "1. Liters to Gallons:" << endl << "2. Gallons to Liters: ";
    cin >> num;
    
    if (num == 1){
    	cout << "Input Liters: ";
    	cin >> liters;
    	gallons = liters * 0.264172;
    	outFile << "Liters: " << liters << "\t" << "Gallons: " << gallons << endl;
    	cout << "================================================" << endl;
		cout << "Liters: " << liters << "\t" << "Gallons: " << gallons << endl;
		cout << "================================================" << endl<< endl;
		validInput = true;
	} else if (num == 2){
		cout << "Input Gallons: ";
		cin >> gallons;
		liters = gallons / 0.264172;
		outFile << "Gallons: " << gallons << "\t" << "Liters: " << liters << endl;
		cout << "================================================" << endl;
		cout << "Gallons: " << gallons << "\t" << "Liters: " << liters << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else {
		cout << "Invalid input. Please enter 1 or 2:" << endl;
	}
	}
	outFile.close();
}
void mlOunces(){
    double ml, ounces;
    bool validInput = false;
    ofstream outFile("Conversions.txt", ios::app);
    
    if (!outFile) { 
        cout << "Error opening file!" << endl;
        return;
    }
    while (!validInput){
    cout << "1. Milliliters to Ounces" << endl << "2. Ounces to Milliliters: ";
    cin >> num;
    
    if (num == 1){
    	cout << "Input Milliliters: ";
    	cin >> ml;
    	ounces = ml * 0.035274;
    	outFile << "Milliliters: " << ml << "\t" << "Ounces: " << ounces << endl;
    	cout << "================================================" << endl;
		cout << "Milliliters: " << ml << "\t" << "Ounces: " << ounces << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else if (num == 2){
		cout << "Input Ounces: ";
		cin >> ounces;
		ml = ounces / 0.035274;
		outFile << "Ounces: " << ounces << "\t" << "Milliliters: " << ml << endl;
		cout << "================================================" << endl;
		cout << "Ounces: " << ounces << "\t" << "Milliliters: " << ml << endl;
		cout << "================================================" << endl<< endl;
		validInput = true;
	} else {
		cout << "Invalid input. Please enter 1 or 2:" << endl;
	}
	}
	outFile.close();
}
void cMetersFeet() {
    double cmeters, cfeet;
    bool validInput = false;
    ofstream outFile("Conversions.txt", ios::app);
    
    if (!outFile) { 
        cout << "Error opening file!" << endl;
        return;
    }
    while (!validInput){
    cout << "1. Cubic Meters to Cubic Feet"	<< endl << "2. Cubic Feet to Cubic Meters: ";
    cin >> num;
    
    if (num == 1){
    	cout << "Input Cubic Meters: ";
    	cin >> cmeters;
    	cfeet = cmeters * 35.3147;
    	outFile << "Cubic Meters: " << cmeters << "\t" << "Cubic Feet: " << cfeet << endl;
    	cout << "================================================" << endl;
		cout << "Cubic Meters: " << cmeters << "\t" << "Cubic Feet: " << cfeet << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else if (num == 2){
		cout << "Input Cubic Feet: ";
		cin >> cfeet;
		cmeters = cfeet / 35.3147;
		outFile << "Cubic Feet: " << cfeet << "\t" << "Cubic Meters: " << cmeters << endl;
		cout << "================================================" << endl;
		cout << "Cubic Feet: " << cfeet << "\t" << "Cubic Meters: " << cmeters << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else {
		cout << "Invalid input. Please enter 1 or 2:" << endl;
	}
	}
	outFile.close();
}
// TEMPERATURE
void celciusF() {
    double celcius, fahrenheit;
    bool validInput = false;
    ofstream outFile("Conversions.txt", ios::app);
    
    if (!outFile) { 
        cout << "Error opening file!" << endl;
        return;
    }
    while (!validInput){
    cout << "Select option 1 or 2." << endl;
	cout << "1. Celcius to Fahrenheit"	<< endl << "2. Fahrenheit to Celcius: ";
    cin >> num;
    
    if (num == 1){
    	cout << "Input Celcius: ";
    	cin >> celcius;
    	fahrenheit = (celcius * 1.8) + 32;
    	outFile << "Celcius: " << celcius << "\t" << "Fahrenheit: " << fahrenheit << endl;
    	cout << "================================================" << endl;
		cout << "Celcius: " << celcius << "\t" << "Fahrenheit: " << fahrenheit << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else if (num == 2){
		cout << "Input Fahrenheit: ";
		cin >> fahrenheit;
		celcius = (fahrenheit - 32 ) / 1.8;
		outFile << "Fahrenheit: " << fahrenheit << "\t" << "Celcius: " << celcius << endl;
		cout << "================================================" << endl;
		cout << "Fahrenheit: " << fahrenheit << "\t" << "Celcius: " << celcius << endl;
		cout << "================================================" << endl << endl;
		validInput = true;
	} else {
		cout << "Invalid input. Please enter 1 or 2:" << endl;
	}
	}
	outFile.close();
}
int main (){

int conversions, num;
string length, mass, volume, temperature;
string decision;

cout << "How many Conversions do you want calculated?: ";
cin >> conversions;
cout << endl;

for (int i = 1; i <= conversions; i = i + 1){
	cout << "Do you want to convert length, mass, volume or temperature? (all inputs to be lower case): ";
	cin >> decision;
	cout << endl;
	
	// Length
	if (decision == "length"){
		cout << "Select which you want to convert: " << endl;
		cout << "1. Kilometers & Miles" << endl << "2. Meters & Feet" << endl << "3. Cubic Meters to Cubic Feet" << endl;
		cout << "Type 1, 2, or 3 for your choice: ";
		cin >> num;
		cout << endl;
		
			if (num == 1){
				kmMiles();
			} 
			else if (num == 2){
				metersFeet();
			}
			else if (num == 3){
				cmInches();	
			}
			else {
					cout << "Invalid Input. Try again." << endl;
				i = i - 1;		
			}
	// Mass	
	} else if (decision == "mass"){
		cout << "Select which you want to convert: " << endl;
		cout << "1. Kilograms and Pounds" << endl << "2. Grams and Ounces" << endl << "3. Metric Tons to US Tons" << endl;
		cout << "Type 1, 2 or 3 for which you want to choose: ";
		cin >> num;
		cout << endl;
		
			if (num == 1){
				kgPounds();
			}
			else if (num == 2){
				gramsOunces();
			}
			else if (num == 3){
				usMetric();
			}
			else {
				cout << "Invalid Input. Try again." << endl;
				i = i - 1;		
			}
	// Volume
	} else if (decision == "volume"){
		cout << "Select which you want to convert: " << endl;
		cout << "1. Liters and Gallons" << endl << "2. Mililiters to Ounces" << endl << "3. Metric Tons to US Tons" << endl;
		cout << "Type 1, 2 or 3 for which you want to choose: ";
		cin >> num;
		cout << endl;
		
			if (num == 1){
				litersG();
			}
			else if (num == 2){
				mlOunces();
			}
			else if (num == 3){
				cMetersFeet();
			}
			else {
				cout << "Invalid Input. Try again." << endl;
				i = i - 1;
			}
	// Temp
	} else if (decision == "temperature"){
		celciusF();
	}
	else {
		cout << "Invalid Unit. Please try again." << endl << endl;
		i = i - 1;
	}
}
	return 0;
}