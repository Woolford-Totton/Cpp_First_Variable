#pragma region ""

#include <iostream>
#include <string>;
using namespace std;

#pragma endregion
/*
            Welcome to your first variable- to start run the program by pressing the green play button OR by pressing F5.

            You will see a window with text showing the different datatypes a variable can be.

            Once you see it close it and try changing the variables to output something else.
        */
#pragma region ""
int main()
{
#pragma endregion

    //String variable

    cout << "This is how to write a String: ";

    string MyString = "Hello World! I am a string variable! \n";   //  <-- change this variable to get different results

    cout << MyString;

    //Int variable

    cout << "This is how to write an int: ";

    int MyInt = 10; //  <-- change the number to get different results

    cout << MyInt << "\n";

    //Float variable

    float MyFloat = 3.14f;  //  <-- change the number to get different results

    cout << "This is how to write a float: ";

    cout << MyFloat << "\n";

    //Boolean variable

    bool MyBool = false;    //  <-- Booleans can only be true or false

    cout << "This is how to write a boolean: ";

    cout << MyBool << "\n";

    /*
     Try creating your own variables- make an int and add it to MyInt to change its number eg
        int My2ndInt=5;

        MyInt=My2ndInt;

        MyInt=MyInt+My2ndInt;

        MyInt+=My2ndInt;

        MyInt=MyInt-My2ndInt;

        MyInt-=My2ndInt;

        MyInt=MyInt*My2ndInt;

        MyInt*=My2ndInt;

        MyInt=MyInt/My2ndInt;

        MyInt/=My2ndInt;
     */

    cin >> MyString;

#pragma region ""
}
#pragma endregion


