//comments here
#pragma once

class Probability
{
public:
   Probability();
   Probability(double number);
   ~Probability();
   double GetProb();
   void SetProb(double number);
   Probability operator=(double number);

private:
   double prob;
};