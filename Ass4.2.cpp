#include <iostream>

using namespace std;

int main()
{
    char op;			//decalring a variable of type char for operation
    float num1, num2;		//decalring two variables of type float for the two numbers
    float result;			//intitializing a variable of type float for the result


    //defining the charachters of operations for the user
    cout << "[+ for addition, - for subtraction, * for multiplication, / for division]" << '\n';	
    cout << "Enter one of these charachters: ";	//prompting the user to input an operation character
    cin >> op;			//input a char for operation

    switch (op)

    {				//switch statement with the expression of char op to determine which operation to perform

    case '+':			//addition operation
        cout << "Enter two numbers: ";	//prompting the user to input two numbers
        cin >> num1 >> num2;	//inputing two numbers
        result = num1 + num2;	//calculating the addition of the two numbers
        cout << "The result is: " << result;	//printing the result
        break;			//breaking out from the switch block

    case '-':			//subtraction operation
        cout << "Enter two numbers: ";	//propting the user to input two numbers
        cin >> num1 >> num2;	//inputing two numbers
        result = num1 - num2;	//calculating the subtruction
        cout << "The result is: " << result;	//printing the result
        break;			//breaking out from the switch block

    case '*':			//multiplication case
        cout << "Enter two numbers: ";	//prompting the user to input two numbers
        cin >> num1 >> num2;	//inputing two numbers
        result = num1 * num2;	//calculating the multiplication
        cout << "The result is: " << result;	//printing the result
        break;			//breaking out from the switch block

    case '/':			//division case
        cout << "Enter two numbers: ";	//prompting the user to input two numbers
        cin >> num1 >> num2;	//inputing two numbers
        if (num2 != 0)

        {			//avoiding division by 0
            result = num1 / num2;

            cout << "The result is: " << result;	//printing the result

        }


        else

            cout << "You can't divide by zero";	//telling the user that you cannot divide by zero
        break;			//breaking out from the switch block
    default:			//default case of invalid operation
        cout << "Invalid Operation";	//telling the user it is invalid operation
    }

    return 0;


}


