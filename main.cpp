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
Boolean
Integer
Unsigned Integer
Floating Point
Double Floating Point
Character
Valueless
 
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
    
    int counter = 0;
    int stepsTaken = 10;
    int stairsClimbed = 120;

    bool isWalking = true;
    bool hasStarted = false;
    bool counting = true;

    unsigned int bricks = 0;
    unsigned int windows = 6;
    unsigned int movieRating = 3;

    float averageDistance = 300.f;
    float sideLength = 5.3f;
    float temperature = 84.f;

    double totalDistance = 900.45;
    double poolVolume = 36050.0;
    double distanceInInches = 12000.125;

    char firstLetter = 't';
    char variable = 'x';
    char middleInitial = 'f';

    
    ignoreUnused(number, counter, stepsTaken, stairsClimbed, isWalking, hasStarted, counting, bricks, windows, movieRating, averageDistance, sideLength, temperature, totalDistance, poolVolume, distanceInInches, firstLetter, variable, middleInitial); //passing each variable declared to the ignoreUnused() function

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
int distanceMoved(int startDistance, int endDistance)
{
    ignoreUnused(startDistance, endDistance);

    return {};
}
/*
 2)
 */
void moveCar(float distanceToMove = 10.f, bool moveLeft = false)
{
    ignoreUnused(distanceToMove, moveLeft);
}
/*
 3)
 */
bool hasMoved(int currentX, int currentY, int previousX, int previousY)
{
    ignoreUnused(currentX, currentY, previousX, previousY);

    return{};
}
/*
 4)
 */
float averageGPA(float student1GPA, float student2GPA = 3.5, float student3GPA = 3.f, float student4GPA = 3.8f)
{
    ignoreUnused(student1GPA, student2GPA, student3GPA, student4GPA);

    return{};
}
/*
 5)
 */
 void startRaining(float howMuchRain, bool isCold, float duration = 35.f)
 {
     ignoreUnused(howMuchRain, isCold, duration);
 }
/*
 6)
 */
int shotputScore(int throw1Distance =  60, int throw2Distance = 55)
{
    ignoreUnused(throw1Distance, throw2Distance);

    return{};
}
/*
 7)
 */
double distancePlaneFlew(double startingDistance, float currentTripDistance = 160.4f)
{
    ignoreUnused(startingDistance, currentTripDistance);

    return{};
}
/*
 8)
 */
 float findShapeArea(float side1 ,float side2, float  side3 = 5.4f, float side4 = 4.f)
 {
     ignoreUnused(side1, side2, side3, side4);

     return{};
 }
/*
 9)
 */
char letterAhead(char startingLetter, int howManyAhead)
{
    ignoreUnused(startingLetter, howManyAhead);

    return{};
}
/*
 10)
 */
void drawLine(int point1X, int point1Y, int point2X = 19, int point2Y = 3)
{
    ignoreUnused(point1X, point1Y, point2X, point2Y);
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
    auto movementDistance = distanceMoved(90, 160);
    //2)
    moveCar();
    //3)
    auto isInOriginalSpot = hasMoved(0, 1, 0, 1);
    //4)
    auto classGPA = averageGPA(3.9f);
    //5)
    startRaining(1.6f, true);
    //6
    auto throwerScore = shotputScore();
    //7)
    auto totalPlaneMileage = distancePlaneFlew(1400.2);
    //8)
    auto shapeArea = findShapeArea(4.f, 6.6f);
    //9)
    auto newLetter = letterAhead('D', 6);
    //10)
    drawLine(4, 10);
    
    ignoreUnused(carRented, movementDistance, isInOriginalSpot, classGPA, throwerScore, totalPlaneMileage, shapeArea, newLetter);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
