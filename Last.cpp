#include <iostream>
#include<stdlib.h>

using namespace std;

// Base Class
class Vehicle
{
private:
    static int totalVehicles;
    int totalCount;
    
    public:
    void display(){

    }
    string vehicleID, manufacturer, model, year;
    Vehicle(string vehicleID, string manufacturer, string model, string year)
    {
        this->vehicleID = vehicleID;
        this->manufacturer = manufacturer;
        this->model = model;
        this->year = year;

        Vehicle::totalVehicles++;
    }

    void setTotalCount()
    {
        totalCount = Vehicle::totalVehicles;
    }

    int getTotalCount()
    {
        return totalCount;
    }

    ~Vehicle()
    {
    }
};

int Vehicle::totalVehicles = 0;

class Car : public Vehicle
{
public:
    string fuelType;

    Car(string vehicleID, string manufacturer, string model, string year, string fuelType) : Vehicle(vehicleID, manufacturer, model, year)
    {
        this->fuelType = fuelType;
    }
};

class ElectricCar : public Car
{
public:
    string batteryCapacity;

    ElectricCar(string vehicleID, string manufacturer, string model, string year, string fuelType, string batteryCapacity) : Car(vehicleID, manufacturer, model, year, fuelType)
    {
        this->batteryCapacity = batteryCapacity;
    }

    void display(){

    }
};

class Aircraft : public Car
{
public:
    string flightRange;
    Aircraft(string vehicleID, string manufacturer, string model, string year, string fuelType, string flightRange) : Car(vehicleID, manufacturer, model, year, fuelType)
    {
        this->flightRange = flightRange;
    }
    
    void display(){
        
    }
};

class FlyingCar : public Car, public Aircraft
{
    void display(){
        
    }
};

class SportsCar : public ElectricCar
{
public:
    string topSpeed;
    SportsCar(string vehicleID, string manufacturer, string model, string year, string fuelType, string batteryCapacity, string topSpeed) : ElectricCar(vehicleID, manufacturer, model, year, fuelType, batteryCapacity)
    {
        this->topSpeed = topSpeed;
    }
    
    void display(){
        
    }
};
class Sedan : public Car
{
public:
    Sedan(string vehicleID, string manufacturer, string model, string year, string fuelType, string batteryCapacity) : Car(vehicleID, manufacturer, model, year, fuelType)
    {
    }
    
    void display(){
        
    }
};
class SUV : public Car
{
public:
    SUV(string vehicleID, string manufacturer, string model, string year, string fuelType, string batteryCapacity) : Car(vehicleID, manufacturer, model, year, fuelType)
    {
    }
    
    void display(){
        
    }
};

class VehicleRegistry
{
public:
    Vehicle* v[100];

    void adding()
    {
        //
    }
    void displaying()
    {
        v[0]->setTotalCount();
        for (int i = 0; i < v[0]->getTotalCount(); i++)
        {
            v[i]->display();
        }
        
    }
    void searching()
    {
        //
    }
};

int main()
{
    VehicleRegistry data;
    int choice;
    while (true)
    {
        cout << "1. Add a vehicle (of a different type)" << endl;
        cout << "2. View all vehicles" << endl;
        cout << "3. Search by Id" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice :";
        cin >> choice;

        switch (choice)
        {
        case 1: data.adding();
            break;
        case 2: data.displaying();
            break;
        case 3: data.searching();
            break;
        case 4: exit(0);
        default:
            break;
        }
    }

    return 0;
}