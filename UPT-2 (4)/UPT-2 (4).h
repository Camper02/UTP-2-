#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <windows.h>


using namespace std;


class Device
{
private:
    string name;
    string type;
public:
    Device(const string& t, const string& n) : name(n), type(t) {}
    virtual void poll()
    {
        cout << name << endl;
    }
};


class Electricity_Meter : public Device
{
public:
    Electricity_Meter(const string& type, const string& name) : Device(type, name) {}
};


class Heating_Control_Block : public Device
{
public:
    Heating_Control_Block(const string& type, const string& name) : Device(type, name) {}
};


class Discrete_Input_Block : public Device
{
public:
    Discrete_Input_Block(const string& type, const string& name) : Device(type, name) {}
};

