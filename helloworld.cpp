#include <iostream>

int main() {
    //part 1 
    //This is a comment
    /*
    this is a
    multi-line 
    comment 
    */

    /*
    std::cout << "I like pizza" << '\n';
    std::cout << "its really good!"<< '\n';
    */

   int x; //variable declaration (bring the X to the table, into existance)
   x = 5;
   int y = 7; // can do it this way as well
   int sum = x + y; //addition
   //now what is X? we declared it a integer, but we have not given it a value

    std::cout << x << "\n"; // displays x, which is 5
    std::cout << y <<'\n'; // displays y, which is 7
    std::cout << sum << '\n'; // displays sum, which is 12




    return 0;
}
//control alt n to run from now on

/*int x; 
   int y;
   int sum = x + y; #error here, since x and y can be anything... int sum should be before x and y
    x = 5; 
    y = 7;
    std::cout << x << "\n"; // displays x, which is 5
    std::cout << y <<'\n'; // displays y, which is 7
    std::cout << sum << '\n'; // displays sum, which is 12 
    
    This is wrong because values need to be initialized before they are used.
    
    */