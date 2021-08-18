#pragma once
#include "Showroom.h"

class Dealership {
public:
    Dealership();
    Dealership(string name, unsigned int capacity);
    void AddShowroom(Showroom s);
    float GetAveragePrice();
    void ShowInventory();
private:
    vector <Showroom> showroom;
    string name = "";
    unsigned int numberOfShowrooms = 0;
    unsigned int capacity = 10;
    float average = 0.0;
    unsigned int count = 0;
    float totalPrice = 0.0;
};
