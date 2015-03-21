#include "Probability.h"
#include <iostream>

//Default constructor
Probability::Probability() : prob(0)
{
}

//Explicit Constructor
Probability::Probability(double number)
{
   SetProb(number);
}

//Overload of assignment operator
Probability Probability::operator=(double number)
{
   this->SetProb(number);
   return *this;
}


Probability::~Probability()
{
}

void Probability::SetProb(double number)
{
   if (0 > number | 1 < number)
   {
      prob = 0;
      std::cout << "\nProbability set to 0 because number not in range\n";
   }
   else
   {
      prob = number;
   }
}

double Probability::GetProb()
{
   return prob;
}

