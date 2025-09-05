/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Grade Calcculator for SHS only 💖

#include <iostream>
// First Part this is Variables

int main() {
  std::cout << "Welcome this program is called Grade Computer which we determine if you are in the Honor List or Not. Please be aware that this is only a prototype!\n\n";

 int first_subject;
 std::cout << "Enter your 1st Subject Grade: ";
 std::cin >> first_subject;


 int second_subject;
 std::cout << "Enter your 2nd Subject Grade: ";
 std::cin >> second_subject;


 int third_subject;
 std::cout << "Enter your 3rd Subject Grade: ";
 std::cin >> third_subject;


 int fourth_subject;
 std::cout << "Enter your 4th Subject Grade: ";
 std::cin >> fourth_subject;


 int fifth_subject;
 std::cout << "Enter your 5th Subject Grade: ";
 std::cin >> fifth_subject;


 int sixth_subject;
 std::cout << "Enter your 6th Subject Grade: ";
 std::cin >> sixth_subject;


 int seventh_subject;
 std::cout << "Enter your 7th Subject Grade: ";
 std::cin >> seventh_subject;

 int all_subject = (first_subject + second_subject + third_subject + fourth_subject + fifth_subject + sixth_subject + seventh_subject) / 7;

  // Second Part this is Conditionals


   if (all_subject >= 90 && all_subject <= 94) { 
     std::cout << "\n\nYou Have a Honor Award!\n";
   }
   else if (all_subject >= 95 && all_subject <= 97) {
     std::cout << "\n\nYou Have a High-Honor Award!\n";
   }
   else if (all_subject >= 98 && all_subject <= 100) {
     std::cout << "\n\nYou Got the Highest-Honor Award!!\n";
   }
   else {
     std::cout << "\n\nBetter Luck Next Time. Study More to Achieve a Honor Award. Goodluck\n";
   }

   
 std::cout << "\nYour General Average for this Quarter is " << all_subject << "!!.";

}