#include "Probability.h"
#include <iostream>


Probability::Probability(double number): prob(number)
{
   if (0 > number | 1 < number)
   {
      prob = 0;
      std::cout << "\nProbability set to 0 because number not in range\n";
   }

}

Probability::~Probability()
{
}

void Probability::SetProb(double number)
{
   prob = number;
}

double Probability::GetProb()
{
   return prob;
}


