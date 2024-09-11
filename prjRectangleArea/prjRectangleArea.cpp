// prjRectangleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Function declarations
int GetLengthFromUser();
int GetWidthFromUser();
int CalculateArea(int length, int width);
void DisplayArea(int area);
void ClearScreen();

int main()
{
    char choice;
    do
    {
        // Get the length and width from the user
        int length = GetLengthFromUser();
        int width = GetWidthFromUser();

        // Calculate the area
        int area = CalculateArea(length, width);

        // Display the area
        DisplayArea(area);

        // Prompt the user to calculate again and handle invalid inputs
        do
        {
            cout << "Do you want to calculate again (y/n)? ";
            cin >> choice;

            if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
            {
                cout << "Invalid entry. Please enter 'y' or 'n'." << endl;
            }

        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

        // Clear the screen if user chooses 'y'
        if (choice == 'y' || choice == 'Y')
        {
            ClearScreen();  // Clear the screen before looping back
        }

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

// Function to get the length of the rectangle from the user
int GetLengthFromUser()
{
    int length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

// Function to get the width of the rectangle from the user
int GetWidthFromUser()
{
    int width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

// Function to calculate the area of the rectangle
int CalculateArea(int length, int width)
{
    return length * width;
}

// Function to display the area of the rectangle
void DisplayArea(int area)
{
    cout << "The area of the rectangle is: " << area << endl;
}

// Function to clear the console screen
void ClearScreen()
{
    // This works for Windows systems to clear the console screen
    system("cls");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
