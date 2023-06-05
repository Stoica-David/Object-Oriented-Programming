# Object-Oriented-Programming

There is some of the work I did for my object oriented programming course in my second semester of my first year of university.

# Problem 1

- The Instrument class must contain the type and brand of the instrument, as well as a constructor with two parameters, a function to play the piano (pure virtual) and a method to show the details of the instrument. 
- There must be a Portable class with a boolean packed that says whether an object is packed or not, a constructor and an unbox function. 
- The Piano class must be derived from Instrument and contain a boolean value tuned, that checks if a piano is tuned or not, a constructor, a function that tunes the piano, an override of the play function from the Instrument class and an override of the show details function.
- The guitar class must be also derived from Instrument, but also from Portable, it will contain a boolean value beginner that checks if a guitar is for beginners or not, an integer nrStrings that contains the number of strings of the guitar, a constructor, a function that returns the number of strings, the override of the play and showDetails functions and the overload of the == operator.
- In the App.cpp file, overload the < operator for the class Guitar, then write a function getReadyForConcert that has one parameter, a vector of pointers to the Instrument class, the function will tune all the pianos and unbox every guitar from the vector of instruments, then will print all their details. In the main() function, create objects for each class (where it is possible) and use each function implemented above to show its correctness. 
