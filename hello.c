#include <cs50.h>
#include <stdio.h>

int main(void) {


    // *** WEEK 1 ***
    // printf("Hello World!\n");

    // string first = get_string("What is your firs name?");
    // string last = get_string("What is your last name?");
    // printf("hello, %s %s\n", first, last);

    // Types and Format Codes ***
    // Numbers => int(%i), long(%li), float(%f), double(%f),
    // Text => char(%c), string(%s)

    const string cat_says = "meow!";

    // Loops ***
    int counterW = 0;
    while(counterW < 3)
    {
        printf(cat_says);
        counterW++;
    }
    for(int i = 0; i < 3; i++)
    {
        printf(cat_says);
    }
    int counterDW = 3;
    do
    {
        printf(cat_says);
        counterDW--;
    }
    while (counterDW > 0);

    // Exercise ***
    // We have a population of n lamas,
    // Each year, n/3 new lamas are born, and n/4 lamas pass away
    // How many years will it take to have a certain population of lamas
    //
    // Work an example yourself

        // Let's say the desired population of lamas is P. We want to find out how many years it will take for the population of lamas to reach P, given the information provided.

        // Let's denote the current population of lamas as n. Each year, n/3 new lamas are born, and n/4 lamas pass away. Therefore, the net increase in the population of lamas per year is:

        // n/3 - n/4 = (4n - 3n) / 12 = n/12

        // This means that the population of lamas will increase by n/12 each year. Therefore, we can set up the following equation to represent the population growth:

        // n + (n/12)*t = P

        // where t is the number of years it will take for the population to reach P.

        // To solve for t, we can isolate t on one side of the equation:

        // (n/12)*t = P - n

        // t = 12(P - n) / n

        // Therefore, it will take t years for the population of lamas to reach P, where:

        // t = 12(P - n) / n

        // I hope this helps you solve the problem!

    // Write down exactly what you did
    // Create an algorithm after working multiple examples

        // 1 Ask for desired population
        // 2 Find the population change by year
        // 3 Formulate the population change according to given rate
        // 4 Find the time with given desired population

    // Test your algorithm by hand
    // Translate algorithm to code
        // int currentPopulation;
        // do
        // {
        //     currentPopulation = get_int("What is current population of lamas? ");
        // } while (currentPopulation < 0);
        

        // int desiredPopulation;
        // do
        // {
        //     desiredPopulation = get_int("What is target population? ");
        // }
        // while (desiredPopulation < currentPopulation);
        

        // // function:
        // float getTime(int desiredPopulation, int currentPopulation)
        // {
        //     float yearlyChange = ((float) currentPopulation / 12);
        //     float timeFrame = ((float) desiredPopulation - (float) currentPopulation) / yearlyChange;
        //     return timeFrame;
        // }
    // Find errors in your code by running test cases
    // Fix errors in your code
}