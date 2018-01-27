
// File Name: Ticket.hpp
// Author: James Meli
// Student ID: a738m747
// Assignment Number: 2

//Importing all neccessary libraries to be used
#include <string>
#ifndef ticket_hpp
#define ticket_hpp
using namespace std;

class Ticket {
private:
   //Declaring all member variabled for the class
   string ticketNumber;
   float grossWeight;
   float tareWeight;
   float moistureLevel;
   float foreignMaterial;
   float netWeight;
   float grossBushels;
   float moistureDockage;
   float foreignMaterialDockage;
   float netBushels;

   const float TEST_WEIGHT_PER_BUSHEL = 60;
   const float IDEAL_MOISTURE_LEVEL = 12;

 public:
   //Default constructor
    Ticket();

   //Custom constructor
    Ticket(string number, float grossWeight, float tareWeight, float moistureLevel, float foreignMaterial);

   //Accessor Functions
   string getTicketNumber();
   float getGrossWeight();
   float getTareWeight();
   float getMoistureLevel();
   float getForeignMaterial();

   //Member Functions
   float calNetWeight();
   float calGrosBushels();
   float calMoistureDockage();
   float calNetBushels();
   float calForeignMaterialDockage();
};
#endif
