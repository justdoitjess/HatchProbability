#include "ProbabilityOperators.h"
#include "Probability.h"
#include <iostream>

int main ()
{
   //create A and B
   Probability A(0.25);
   Probability B(0.5);
   Probability C = 1.0;

   std::cout << "Probability A is: " << A.GetProb();
   std::cout << "\n";
   std::cout << "Probability B is: " << B.GetProb();
   std::cout << "\n";
   std::cout << "Probability C is: " << C.GetProb();
   std::cout << "\n";

   //check for A & B
   std::cout << "Probability for A AND B: ";
   //print result
   std::cout << (A&B).GetProb() << "\n";

   //check for A | B
   std::cout << "Probability for A OR B: ";
   //print result
   std::cout << (A|B).GetProb() << "\n";

   //check for A ^ B
   std::cout << "Probability for A OR B but not both: ";
   //print result
   std::cout << (A^B).GetProb() << "\n";

   //check for A - B
   std::cout << "Probability for A NOT B: ";
   //print result
   std::cout << (A-B).GetProb() << "\n";

   //check for ~A
   std::cout << "Probability for not A: ";
   //print result
   std::cout << (~A).GetProb() << "\n";
   
   //check for ~B
   std::cout << "Probability for not B: ";
   //print result
   std::cout << (~B).GetProb() << "\n";

   return 0;
}//end main


//
//Probability A is : 0.25
//Probability B is : 0.5
//Probability C is : 1
//Probability for A AND B : 0.125
//Probability for A OR B : 0.625
//Probability for A OR B but not both : 0.5
//Probability for A NOT B : 0.125
//Probability for not A : 0.75
//Probability for not B : 0.5
//