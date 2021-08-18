//From Part 2
/*
#include "Vehicle.h"

class Showroom {
   public:
      vector <Vehicle> GetVehicleList();
      void AddVehicle(Vehicle v);
      void ShowInventory();
      float GetInventoryValue();
      unsigned int numberOfVehicles = 0;
      Showroom(string name, unsigned int capacity);
      Showroom();
   private:
      string name = "";
      vector <Vehicle> vehicles;
      int totalPrice = 0;
      unsigned int capacity = 20;
};

*/

#pragma once
#include "Vehicle.h"

class Showroom {
public:
    vector <Vehicle> GetVehicleList();
    void AddVehicle(Vehicle v);
    void ShowInventory();
    float GetInventoryValue();
    unsigned int numberOfVehicles = 0;
    Showroom(string name, unsigned int capacity);
    Showroom();
private:
    string name = "";
    vector <Vehicle> vehicles;
    int totalPrice = 0;
    unsigned int capacity = 20;
};
