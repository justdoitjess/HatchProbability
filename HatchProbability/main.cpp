#include "ProbabilityOperators.h"
#include <iostream>

int main ()
{
   //create A and B
   Probability A(0.25);
   Probability B(0.5);
   std::cout << "Probability A is: " << A.GetProb();
   std::cout << "\n";
   std::cout << "Probability B is: " << B.GetProb();
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