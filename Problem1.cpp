#include <iostream>
#include <string>
using namespace std;

int main ( ) {
  //declare the variables
	double const METRIC_TON = 35273.92;
	double ounce,boxes;
	double weight;
	double numOfBoxex;

	//Prompt and read the input from the keyboard
	cin >> ounce;

	//Calculate the weight in metric tons and display it
	weight = ounce/METRIC_TON;
	cout << "The weight of the cereal, in metric tons: " << weight << endl;

	//Calculate the the number of boxes needed to yield one
	//metric ton of cereal and display it
	numOfBoxex = METRIC_TON/ounce;
	cout << "The number of boxes of cereal that will hold a ton: " << numOfBoxex <<endl;

	return 0;
}
