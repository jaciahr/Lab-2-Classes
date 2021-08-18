//From Part 1
/*
#include <string>
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
