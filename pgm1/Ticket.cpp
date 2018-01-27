// File Name: Ticket.cpp
// Author: James Meli
// Student ID: a738m747
// Assignment Number: 2

//Importing all neccessary libraries
#include <string>
#include "Ticket.hpp"
using namespace std;

//Default constructor
 Ticket::Ticket() {
  ticketNumber = "";
  grossWeight = 0;
  tareWeight = 0;
  moistureLevel = 0;
  foreignMaterial = 0;
}

//Custom constructor
 Ticket::Ticket(string number, float grossWeight, float tareWeight, float moistureLevel, float foreignMaterial)
  : ticketNumber(number), grossWeight(grossWeight), tareWeight(tareWeight), moistureLevel(moistureLevel), foreignMaterial(foreignMaterial)
  {}
//Returns the ticket number
string Ticket::getTicketNumber() {
  return ticketNumber;
}
//Returns the gross weight
float Ticket::getGrossWeight() {
  return grossWeight;
}
//Returns the tare weight
float Ticket::getTareWeight() {
  return tareWeight;
}
//Returns the moisture level
float Ticket::getMoistureLevel() {
  return moistureLevel;
}
//Returns the foreign material
float Ticket::getForeignMaterial() {
  return foreignMaterial;
}

//Calculates the net weight
float Ticket::calNetWeight(){
  netWeight = grossWeight - tareWeight;
  return netWeight;
}
//Calculates the gross bushels
float Ticket::calGrosBushels(){
  grossBushels = netWeight / TEST_WEIGHT_PER_BUSHEL;
  return grossBushels;
}
//Calculates the moisture dockage
float Ticket::calMoistureDockage() {
  if(moistureLevel < 12)
    return 0;
  else
    moistureDockage = grossBushels * ((moistureLevel/100) - (IDEAL_MOISTURE_LEVEL/100));
    return moistureDockage;
}
//Calculates the net bushels
float Ticket::calNetBushels() {
  netBushels = grossBushels - moistureDockage - foreignMaterialDockage;
  return netBushels;
}
//Calculates the foreign material dockage
float Ticket::calForeignMaterialDockage() {
  foreignMaterialDockage = grossBushels * (foreignMaterial / 100);
  return foreignMaterialDockage;
}
