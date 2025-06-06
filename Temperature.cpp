/* This program converts Fahrenheit to Celsius.
Input: Interactive
Output: Fahrenheit followed by Celsius
 */

 #include <iostream>
 using namespace std;
 int main() // So, "int" is integer. What is it doing here? 
 {
    double fahrenheit; // I forgot what a double is 
    double celsius;
    // Prompt user with a print statement
    cout << "Enter Fahrenheit temperature: ";
    // Get interactive user input 
    cin >> fahrenheit; 
    // Calculate celsius
    celsius = (fahrenheit - 32.0) * (5.0 / 9.0); 
    // Output to display the answer
    cout << "Fahrenheit temperature:" << fahrenheit << endl;
    cout << "Celsius temperature:" << celsius << endl;
    return 0; 

 }