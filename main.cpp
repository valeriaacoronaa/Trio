#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void sortNum(int& , int&, int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  sortNum(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void sortNum(int& red, int& green, int& blue)
{
  int greatest;
  int middle;
  int least;

  if(red<blue&&blue<green)
  {
    greatest=green;
    middle=blue;
    least=red;
  }
  else if(blue<red&&red<green)
  {
    greatest=green;
    middle=red;
    least=blue;
  }
  else if(green<blue&&blue<red)
  {
    greatest=red;
    middle=blue;
    least=green;
  }
  else if(green<red&&red<blue)
  {
    greatest=blue;
    middle=red;
    least=green;
  }
  else if(blue<green&&green<red)
  {
    greatest=red;
    middle=green;
    least=blue;
  }
  else if(red<green&&green<blue)
  {
    greatest=blue;
    middle=green;
    least=red;
  }
 red=greatest;
 green=middle;
 blue=least;

}    

