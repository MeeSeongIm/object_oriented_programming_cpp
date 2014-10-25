
#include "stdafx.h"
#include <iostream>
using namespace std;

class supplies {
public: 
	float price_per_item, quantity;    
	float cost();
};

float supplies::cost(){
	return (price_per_item * quantity);
}

void main(){
	supplies pens, notebooks, markers;
	cout << "Pens. Price per item: " << flush;
	cin >> pens.price_per_item; 

	cout << "Quantity of pens: " << flush; 
	cin >> pens.quantity; 

	cout << "Notebooks. Price per item: " << flush;
	cin >> notebooks.price_per_item; 

	cout << "Quantity of notebooks: " << flush;
	cin >> notebooks.quantity;

	cout << "Markers. Price per item: " << flush;
	cin >> markers.price_per_item;

	cout << "Quantity of markers: " << flush;
	cin >> markers.quantity;

	cout << "The cost for pens is $" << pens.cost();
	cout << "The cost for notebooks is $" << notebooks.cost();
	cout << "The cost for markers is $" << markers.cost();
}



