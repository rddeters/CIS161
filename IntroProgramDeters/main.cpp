/* Name: River Deters
 * Date: 09/05/2023
 * Course: CIS161 */

#include <QCoreApplication>
#include <iostream>

int main () {
    // Declare a variable for the floor length called floorLength
    int floorLength;
    // Declare a variable for the floor width called floorWidth
    int floorWidth;
    // Declare a variable for the floor area (to later be calculated) called floorArea
    int floorArea;

    // prompt the user for the floor's length
    std::cout << "What is the length of the floor?" << std::endl;
    // input the user's floor's length into the variable floorLength
    std::cin >> floorLength;

    // prompt the user for the floor's width
    std::cout << "What is the width of the floor?" << std::endl;
    // input the user's floor's width into the variable floorLength
    std::cin >> floorWidth;

    // Calculate the area by multiplying the floorLength by the floorWidth and assigning the product to floorArea
    floorArea = floorLength * floorWidth;

    // Print the floor's area to the user
    std::cout << "The area of the floor is: " << floorArea << std::endl;

    return 0;
}
