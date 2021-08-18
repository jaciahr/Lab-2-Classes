//From Part 2
/*
#include "Showroom.h"

      Showroom::Showroom(){
         name = "Unnamed Showroom";
         capacity = 0;
      }

      Showroom::Showroom(string name, unsigned int capacity){
         this->name = name;
         this->capacity = capacity;
      }

      vector <Vehicle> Showroom::GetVehicleList() {
         return vehicles;
      }

      void Showroom::AddVehicle(Vehicle v){
         if (numberOfVehicles == capacity){
            cout << "Showroom is full! Cannot add " + v.GetYearMakeModel() << endl;
         }
         else {
            vehicles.push_back(v);
            numberOfVehicles++;
         }
      }

      void Showroom::ShowInventory(){
         if (vehicles.size() == 0){
            cout << name << " is empty!" << endl;
         }
         else{
            cout << "Vehicles in " << name << endl;
            for (unsigned long int i = 0; i < vehicles.size(); i++){
               vehicles.at(i).Display();
            }
         }
      }

      float Showroom::GetInventoryValue(){
         for (unsigned long int i = 0; i < vehicles.size(); i++){
            totalPrice += vehicles.at(i).GetPrice();
         }
         return totalPrice;
      }
*/
#include <iostream>
#include "Showroom.h"

Showroom::Showroom() {
    name = "Unnamed Showroom";
    capacity = 0;
}

Showroom::Showroom(string name, unsigned int capacity) {
    this->name = name;
    this->capacity = capacity;
}

vector <Vehicle> Showroom::GetVehicleList() {
    return vehicles;
}

void Showroom::AddVehicle(Vehicle v) {
    if (numberOfVehicles == capacity) {
        cout << "Showroom is full! Cannot add " + v.GetYearMakeModel() << endl;
    }
    else {
        vehicles.push_back(v);
        numberOfVehicles++;
    }
}

void Showroom::ShowInventory() {
    if (vehicles.size() == 0) {
        cout << name << " is empty!" << endl;
    }
    else {
        cout << "Vehicles in " << name << endl;
        for (unsigned long int i = 0; i < vehicles.size(); i++) {
            vehicles.at(i).Display();
        }
    }
}

float Showroom::GetInventoryValue() {
    for (unsigned long int i = 0; i < vehicles.size(); i++) {
        totalPrice += vehicles.at(i).GetPrice();
    }
    return totalPrice;
}