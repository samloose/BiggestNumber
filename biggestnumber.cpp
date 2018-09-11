//Author: Sam Loose
#include<iostream>
using namespace std;
int main()
{

  int a;
  int b;
  int biggest;
  cout<<"Please enter a whole number:"<< endl;
  cin >> a;

  cout<<"Please enter another whole number:"<< endl;
  cin >> b;

  if (a > b){
          biggest = a;
  }
  if (a < b){
          biggest = b;
  }
  else {
          cout<<"Those are the same number";
          return 0;
  }

  std::cout<<"Of those two numbers, the biggest is: ";
  cout << biggest <<; 
  std::cout<<std::endl<<"Thank you for playing."<< endl;
  
  return 0;
}
