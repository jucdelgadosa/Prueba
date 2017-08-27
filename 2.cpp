//Segundo Punto del Quiz

#include<iostream>
#include<cmath>
#include<cstdlib>

double p(double x)
{
  double p;
  p = std::pow(1-x,8);
  return p;
}

double q(double x)
{
  double q;
  q = 1 - (8*x) + (28*x*x) - (56*x*x*x) + (70*x*x*x*x) - (56*x*x*x*x*x) + (28*x*x*x*x*x*x) - (8*x*x*x*x*x*x*x) + (x*x*x*x*x*x*x*x);
  return q;
}

double r(double x)
{
  double r;
  r = 1 - (8*x) + (28*std::pow(x,2)) - (56*std::pow(x,3)) + (70*std::pow(x,4)) - (56*std::pow(x,5)) + (28*std::pow(x,6)) - (8*std::pow(x,7)) + (std::pow(x,8));
  return r;
}

int main()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  
  for (double n=0.992; n<= 1.008; n+=0.0001)
    {
      std::cout<<n<<"\t"<<p(n)<<"\t"<<q(n)<<"\t"<<r(n)<<"\n";
    }
  return 0;
}

  

