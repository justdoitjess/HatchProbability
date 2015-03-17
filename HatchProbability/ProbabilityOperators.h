#include "Probability.h"


//Probability of A AND B
Probability operator &(Probability &A, Probability &B)
{
   double temp = A.GetProb() * B.GetProb();
   return Probability(temp);
};

//Probability of A OR B
Probability operator |(Probability &A, Probability &B)
{
   double temp = A.GetProb() + B.GetProb();
   return Probability(temp);
};

//Probability of A OR B but NOT BOTH
Probability operator ^(Probability &A, Probability &B)
{
   double temp = A.GetProb() + B.GetProb() - (A&B).GetProb();
   return Probability(temp);
};

//Probability of A but NOT B
Probability operator -(Probability &A, Probability &B)
{
   double temp = A.GetProb() - (A&B).GetProb();
   return Probability(temp);
};

//Probability of NOT A
Probability operator ~(Probability &A)
{
   double temp = 1 - A.GetProb();
   return Probability(temp);
};