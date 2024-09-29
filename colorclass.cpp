/*

Lab14: Color Class
COMSC-210
Naveen Islam
IDE: emacs
  
 */

#include <iostream>
#include <string>
using namespace std;

// create Class color
class Color {
    // private member variables
 private:
 int red;
 int green;
 int blue;
	
 public:
 // constructor to initialize private member variables with values of 0
 Color(int r = 0, int g = 0, int b = 0) {
   red = r;
   green = g;
   blue = b;
 }
 
 // setter functions for red, green, and blue
 void setRed(int redVal) {
   red = redVal;
 }

 void setGreen(int greenVal) {
   green = greenVal;
 }

 void setBlue (int blueVal) {
   blue = blueVal;
 }

 // getter functions for red, green, and blue
 int getRed() const {
   return red;
 }

 int getGreen() const {
   return green;
 }

 int getBlue() const {
   return blue;
 }

 // print function that displays the values of each color
 void print() const {
   cout << "red value: " << red << endl;
   cout << "green value: " << green << endl;
   cout << "blue value: " << blue << endl;
   cout << endl;
 } 
};

// main function
int main() {

  // Color class objects
  Color firstColor(123, 113, 111);
  Color secondColor(101, 10, 101);
  Color thirdColor(1, 2, 3);

  // print function to output created Color objects
  firstColor.print();
  secondColor.print();
  thirdColor.print();
  
  return 0;
}
