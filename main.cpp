/**
 * @file main.cpp
 * @author Isaac Copeland
 * @date 2022-08-26
 * @brief a hello world program
 * 
 * This program prints the message "Hello World!".
 */

#include <iostream>
#include <string>

using namespace std;

int sum(int n);

int main() {
  cout << "Hello World!" << endl;

  int n;
  cout << "Enter a number n: ";
  cin >> n;
  cout << "The sum of 1 to n is " << sum(n) << endl;
  
  return 0;
}

int sum(int n) {
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}
