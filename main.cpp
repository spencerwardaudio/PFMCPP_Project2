#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int 
 char
 float
 double
 bool
 void

 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    int wheel = 3;
    int window = 4;
    int lights = 2;

    char foo = 'a';
    char bar = 'b';
    char item = 'c';

    float loudness1 = 1.0f;
    float loudness2 = 0.5f;
    float loudness3 = 0.3f;

    double gallons = 1.1;
    double litters = 0.4;
    double ounces = 0.3;

    bool sun = true;
    bool rain = false;
    bool snow = false;
    
    ignoreUnused(number, wheel, window, lights, foo, bar, item, loudness1, loudness2, loudness3, gallons, litters, ounces, sun, rain, snow); //passing each variable declared to the ignoreUnused() function

}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

 void washACar(int typeOfCleaning = 0, int typeOfCar = 1)
 {
     ignoreUnused(typeOfCleaning, typeOfCar);
 }

/*
 2)
 */

 int buyGas(double amountOfGas = 12.0, bool unleaded = true, char gasLocation = 'a')
 {
     ignoreUnused(amountOfGas, unleaded, gasLocation);

     return {};
 } 

/*
 3)
 */

 bool pressAKey(char keyPressed = 'k', float amountOfPressure = 1.5f, int device = 1)
 {
    ignoreUnused(keyPressed, amountOfPressure, device);

    return {};
 }

/*
 4)
 */

 char pluckString(int numberOfStringsPlucked, char stringsPlucked)
 {
     ignoreUnused(numberOfStringsPlucked, stringsPlucked);

     return{};
 }

/*
 5)
 */

 int findABook(char genre, char author, char title)
 {
     ignoreUnused(genre, author, title);

     return {};
 }

/*
 6)
 */

 void makeACopy(bool color = false, float amountOfInk = 0.5f, int numberOfCopies = 1)
 {
     ignoreUnused(color, amountOfInk, numberOfCopies);
 }

/*
 7)
 */

 bool takeAWalk(int pathToWalk = 0, double distanceToWalk = 1.0)
 {
     ignoreUnused(pathToWalk, distanceToWalk);

     return {};
 }

/*
 8)
 */

 void buyFish(float amountOfFish = 1.0f, int typeOfFish = 4, bool bones = false, int freshness = 1)
 {
     ignoreUnused(amountOfFish, typeOfFish, bones, freshness);
 }

/*
 9)
 */

void bicycleMoves(int direction, double speed = 2.0, double acceleration = 0.0)
{
    ignoreUnused(direction, speed, acceleration);
}

/*
 10)
 */

 bool readABook(char bookTitle, int numberOfPages, float angleOfSunlight = 45.0f, int placeToSit = 1)
 {
    ignoreUnused(bookTitle, numberOfPages, angleOfSunlight, placeToSit);

    return {};
 }

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)

    washACar(0, 3);
    
    //2)

     auto boughtGas = buyGas(12.0, true, 'a');

    //3)
    
     bool motionUpdate = pressAKey();

    //4)

     char playGuitarString = pluckString(1, 'g');
 
    
    //5)

    int lookForItem = findABook('e', 'w', 'h');

    // 6)

     makeACopy(false, 1.0f);
    
    //7)

     bool walk = takeAWalk(1 , 1.0);

    
    //8)

     buyFish(1.5f, 3, false, 1);
    
    //9)

    bicycleMoves(6, 3.0, 0.0);
    
    //10)

     bool reading = readABook('f', 10, 50.0f, 2);


    ignoreUnused(carRented, boughtGas, motionUpdate, playGuitarString, lookForItem, walk, reading);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
