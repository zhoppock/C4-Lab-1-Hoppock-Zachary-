// Hoppock, Zachary
// variableCalculation.cpp
// 10/13/2020
// Using a while loop, print out multiple values of i and get the sum and average of those values
// Version # 1
#include <iostream>
using namespace std;

int main()
{
  int i = 1;
  int count = 0;
  int sum = 0;
  double average = 0;
  while (i <= 9)
  {
    cout << "Value of variable i is: " << i << endl;
    sum = sum + i;
    count++;
    i++;
  }
  average = sum / count;
  cout << "Sum is : " << sum << endl;
  cout << "Counter is : " << count << endl;
  cout << "Average is : " << average;
  return 0;
}