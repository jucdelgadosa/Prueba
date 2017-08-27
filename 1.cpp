#include<iostream>
#include<cmath>
#include<cstdlib>

double area()
{
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  for (int n=0; n<=100;n++)
    {
      double b=3, c=4;
      double a=sqrt(std::pow(b,2)+std::pow(c,2)-2*cos((M_PI/2.0)*std::pow(1.1,-n)));
      double d=(a+b+c)/2;
      double s1=sqrt(d*(d-a)*(d-b)*(d-c));
      double s2=(0.25)*sqrt((a+(b+c))*(c-(a-b))*(c+(a-b))*(a+(b-c)));
      double ds=(std::abs(s2-s1)/s2)*100.0;
      std::cout<<n<<"\t"<<s1<<"\t"<<s2<<"\t"<<ds<<"\n";
    }
}


int main()
{
  area();
  return 0;
}
