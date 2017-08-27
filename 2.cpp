//Segundo Punto del Quiz

#include<iostream>
#include<cmath>
#include<cstdlib>

double p()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double p, x=0.01;
  p = std::pow(1-x,8);
  std::cout<<p<<"\n";
}

double q()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double q, x=0.01;
  q = 1 - 8*x + 28*x*x - 56*x*x*x + 70*x*x*x*x - 56*x*x*x*x*x + 28*x*x*x*x*x*x - 8*x*x*x*x*x*x*x + x*x*x*x*x*x*x*x;
  std::cout<<q<<"\n";
}

double r()
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double r, x=0.01;
  r = 1 - 8*x + 28*std::pow(x,2) - 56*std::pow(x,3) + 70*std::pow(x,4) - 56*std::pow(x,5) + 28*std::pow(x,6) - 8*std::pow(x,7) + std::pow(x,8);
  std::cout<<r<<"\n";
}

int main()
{
  p();
  q();
  r();
  return 0;
}

  
