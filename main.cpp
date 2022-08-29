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

int product(int n);

int main() {
  cout << "Hello World!" << endl;

  int n;
  cout << "Enter a number n: ";
  cin >> n;
  cout << "The sum of 1 to n is " << sum(n) << endl;
  cout << "Enter a number n: ";
  cin >> n;
  cout << "The product of 1 to n is " << product(n) << endl;
  
  return 0;
}

int sum(int n) {
  int sum = 0;
  for(int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int product(int n) {
  int pro = 1;
  for(int i = 1; i <= n; i++) {
    pro *= i;
  }
  return pro;
}
