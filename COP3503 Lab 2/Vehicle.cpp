//From Part 1
/*
#include <iostream>
#include <string>
using namespace std;

#include "Vehicle.h"

      Vehicle::Vehicle(){
         this->make = "COP3503";
         this->model = "Rust Bucket";
         this->year = 1900;
         this->price = 0.00;
         this->mileage = 0;
      }

      Vehicle::Vehicle(string make, string model, int year, float price, int mileage){
         this->make = make;
         this->model = model;
         this->year = year;
         this->price = price;
         this->mileage = mileage;
      }

      void Vehicle::Display(){
         cout << year << " " << make << " " << model << " $" << price << " " << mileage << endl;
      }

      string Vehicle::GetYearMakeModel(){
         string yearMakeModel = to_string(year) + " " + make + " " + model;
         return yearMakeModel;
      }

      float Vehicle::GetPrice(){
         return price;
      }*/

//From Part 2
/*
#pragma once
#include <string>
#include <vector>
using namespace std;

class Vehicle {
   public:
      Vehicle();
      Vehicle(string make, string model, int year, float price, int mileage);
      void Display();
      string GetYearMakeModel();
      float GetPrice();
   private:
      string make = "";
      string model = "";
      unsigned int year = 0;
      float price = 0.0;
      unsigned int mileage = 0;
};

*/

#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle() {
    this->make = "COP3503";
    this->model = "Rust Bucket";
    this->year = 1900;
    this->price = 0.00;
    this->mileage = 0;
}

Vehicle::Vehicle(string make, string model, int year, float price, int mileage) {
    this->make = make;
    this->model = model;
    this->year = year;
    this->price = price;
    this->mileage = mileage;
}

void Vehicle::Display() {
    cout << year << " " << make << " " << model << " $" << price << " " << mileage << endl;
}

string Vehicle::GetYearMakeModel() {
    string yearMakeModel = to_string(year) + " " + make + " " + model;
    return yearMakeModel;
}

float Vehicle::GetPrice() {
    return price;
}