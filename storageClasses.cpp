#include <iostream>
 
// declare the function
void func(void);
 
static int count = 10; //global var
 
main() {
   while(count--) {
      func();
   }
   
   return 0;
}

// Function definition
void func( void ) {
   static int i = 7; 
   i++;
   std::cout << "i is the number " << i ;
   std::cout << " and count is " << count << std::endl;
}

// This should go up to 15 or so.
// There is also an extern storage class that requires some other stuff that I wou't put here lol
