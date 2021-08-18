#include <iostream>
#include "Dealership.h"

Dealership::Dealership() {
    name = "Generic Dealership";
    capacity = 0;
}

Dealership::Dealership(string name, unsigned int capacity) {
    this->name = name;
    this->capacity = capacity;
}

void Dealership::AddShowroom(Showroom s) {
    if (numberOfShowrooms == capacity) {
        cout << "Dealership is full, can't add another showroom!" << endl;
    }
    else {
        showroom.push_back(s);
        numberOfShowrooms++;
    }
}

float Dealership::GetAveragePrice() {
    if (showroom.size() == 0) {
        return 0.0;
    }
    else {
        for (unsigned long int i = 0; i < showroom.size(); i++) {
            vector<Vehicle> vehicles = showroom.at(i).GetVehicleList();
            for (unsigned long int j = 0; j < vehicles.size(); j++) {
                totalPrice += vehicles.at(j).GetPrice();
                count++;
            }
        }
        average = totalPrice / count;
        return average;
    }
}

void Dealership::ShowInventory() {
    if (showroom.size() == 0) {
        cout << name << " is empty!" << endl;
    }
    else {
        for (unsigned long int i = 0; i < showroom.size(); i++) {
            showroom.at(i).ShowInventory();
            cout << endl;
        }
    }
    cout << "Average car price: $" << GetAveragePrice();
}

//****This didn't work; can't use display function?****
//for (unsigned long int i = 0; i < vehicles.size(); i++){
         //vehicles.at(i).Display(); 
//for (unsigned long int i = 0; i < showroom.size(); i++){
   //showroom.at(i).Display();
//}
//}
