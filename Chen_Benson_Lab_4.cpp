// Benson Chen
// Lab 4
// 10/01/24

#include <iostream> //activates iostream
#include <string>   //activates string
using namespace std;

int main()
{   
    //Defining variables for user inputs of fruit name and sugar content
    string fruit;
    int yesorno;
    double sugar;
    int num = 1; //variable used to control the number of iterations for the while loop

    while (yesorno>=1) //This will make the while loop run for 5 times
    {
        cout << "What is the name of your fruit: "; //user input for fruit name
        cin >> fruit;
        cout << endl;

        //user input for sugar content
        cout << "What is the number of grams of sugar that one cup of that fruit contains: "; 
        cin >> sugar;

        num = num + 1; //Increases the integer in order to control number of iterations

        if(sugar<10) //if sugar is less than 10g then it will print the statement below
            cout << fruit << " is a LOW SUGAR FRUIT\n" << endl;
        else if (sugar>=10 && sugar<=14) //If the sugar if not less than 10g, but fits this condition it will print statement below
            cout << fruit << " is a MEDIUM SUGAR FRUIT\n" << endl;
        else //If the sugar does not meet any of the two conditions then it will print the statement below
            cout << fruit << " is a HIGH SUGAR FRUIT\n" << endl;

        //Asks user if they want to continue inputting fruits; condition to stop the while loop
        cout << "Do you want to continue, answer with 1 for YES or 0 for NO: ";
        cin >> yesorno;
        cout << endl;
    }

    //return statement
    return 0;
}
/*
What is the name of your fruit: grapes

What is the number of grams of sugar that one cup of that fruit contains: 23.37
grapes is a HIGH SUGAR FRUIT

Do you want to continue, answer with 1 for YES or 0 for NO: 1

What is the name of your fruit: avocado

What is the number of grams of sugar that one cup of that fruit contains: .99
avocado is a LOW SUGAR FRUIT

Do you want to continue, answer with 1 for YES or 0 for NO: 1

What is the name of your fruit: strawberries

What is the number of grams of sugar that one cup of that fruit contains: 7
strawberries is a LOW SUGAR FRUIT

Do you want to continue, answer with 1 for YES or 0 for NO: 1

What is the name of your fruit: grapefruit

What is the number of grams of sugar that one cup of that fruit contains: 10.6
grapefruit is a MEDIUM SUGAR FRUIT

Do you want to continue, answer with 1 for YES or 0 for NO: 1

What is the name of your fruit: orange

What is the number of grams of sugar that one cup of that fruit contains: 14
orange is a MEDIUM SUGAR FRUIT

Do you want to continue, answer with 1 for YES or 0 for NO: 0
*/