// 1. Write a program that reads a particle's mass (kg) and velocity (m/s) from the user, both as
// decimal values, and computes and prints its momentum using p = m × v.

// #include <iostream>
// using namespace std;

// int main()
// {
//     double mass, vel;
//     cout << "Enter mass of particle (kg): ";
//     cin >> mass;
//     cout << "Enter velocity of particle (m/s): ";
//     cin >> vel;

//     cout<< "Your particle's momentum is: " << mass * vel << "kg m/s" << endl;
//     return 0;
// }

// 2. A capacitor's capacitance is 0.000047 F. Write a program that stores this value and prints it in
// scientific notation with exactly 3 digits after the decimal point, labelled "Capacitance = ...".

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     double cap;     //cap = capacitance
//     cap = 0.000047;
//     cout << "Capacitance is:" << scientific << setprecision(3) << cap;
//     return 0;
// }

// 3. Four current readings were measured: 5.2, 118.6, 27.05, and 3.75 (all in mA). Print them as a
// neatly aligned two-column table with headings "Reading" and "Current(mA)", each column
// right-aligned in a field of width 10.

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     double current1 = 5.2, current2 = 118.6, current3 = 27.05, current4 = 3.75;
//     cout << right << setw(10) << "Reading" << setw(12) << "Current(mA)" << endl;  // width set to 12 instead of 10 for Current(mA)because it was too close and didnt look good
//     cout << right << setw(10) << "1" << setw(12) << current1 << endl;
//     cout << right << setw(10) << "2" << setw(12) << current2 << endl;
//     cout << right << setw(10) << "3" << setw(12) << current3 << endl;
//     cout << right << setw(10) << "4" << setw(12) << current4 << endl;
//     return 0;

// }

// 4. Write a program that stores the value of π as 3.14159265 and prints it to exactly 5 decimal
// places with the label "pi = ...".

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     double pi;
//     pi = 3.14159265;
//     cout << "Value of Pi: " << fixed << setprecision(5) << pi;
//     return 0;
// }

// 5. A power supply is safe to operate only if the voltage is between 0 and 230 V AND the current
// is between 0 and 10 A. Write a program that reads both values and prints "Safe" or "Unsafe"
// based on whether both conditions hold.

// #include <iostream>
// using namespace std;

// int main()
// {
//     float voltage, current;
//     cout << "Input Voltage: "; cin >> voltage;
//     cout << "Input Current: "; cin >> current;

//     if (0 <= voltage && voltage <=230 && 0 <= current && current<= 10) {
//         cout << "Safe" << endl;
//     } else {
//         cout << "Unsafe" << endl;
//     }
//     return 0;
// }

// 6. The average of three resistance values R1, R2, R3 needs to be computed as (R1 + R2 + R3) / 3.
// Write a program that reads the three values and computes this average correctly.

// #include <iostream>
// using namespace std;

// int main()
// {
//     float r1, r2, r3;
//     cout << "Resistance 1: ";
//     cin >> r1;
//     cout << "Resistance 2: ";
//     cin >> r2;
//     cout << "Resistance 3: ";
//     cin >> r3;

//     cout << "Average Resistance is: " << (r1 + r2 + r3)/3 << endl;
//     return 0;
// }

// 7. A power supply must never exceed 230 V. Write a program that reads the current voltage and
// prints "WARNING: Overvoltage!" only if the voltage exceeds 230.

// #include <iostream>
// using namespace std;

// int main()
// {
//     float cur_voltage;
//     cout << "Current voltage: ";
//     cin >> cur_voltage;

//     if (cur_voltage > 230){
//         cout << "WARNING: Overvoltage!" << endl;
//     }
//     return 0;
// }

// 8. Earthquakes are classified by magnitude on the Richter scale as follows: below 4.0 → "Minor",
// 4.0 to below 6.0 → "Moderate", 6.0 to below 7.5 → "Major", 7.5 and above → "Great". Write
// a program that reads a magnitude and prints the correct category.

// #include <iostream>
// using namespace std;

// int main()
// {
//     float r_scale;       // r_scale = Value of Richter scale
//     cout << "Enter Richter Scale magnitude: ";
//     cin >> r_scale;

//     if (r_scale < 4.0){
//         cout << "Minor" << endl;
//     } else if (4.0 <= r_scale && r_scale < 6.0){
//         cout << "Moderate" << endl;
//     } else if (6.0 <= r_scale && r_scale < 7.5){
//         cout << "Major" << endl;
//     } else {
//         cout << "Great" << endl;
//     }
// return 0;
// }

// 9. A lab practical is graded with a single letter: 'A', 'B', 'C', 'D', or 'F'. Write a program that reads
// this letter and prints a remark: A → "Excellent", B → "Good", C → "Satisfactory", D → "Needs
// improvement", F → "Fail", and "Invalid grade" for anything else.


// #include <iostream>
// using namespace std;

// int main()
// {
//     char grade;
//     cout << "Enter Student Grade: ";
//     cin >> grade;

//     if (grade == 'A'){
//         cout << "Excellent" << endl;
//     } else if (grade == 'B'){
//         cout << "Good" << endl;
//     } else if (grade == 'C'){
//         cout << "Satisfactory" << endl;
//     } else if (grade == 'D'){
//         cout << "Needs Improvement" << endl;
//     } else if ( grade == 'F'){
//         cout << "Fail" << endl;
//     } else{
//         cout << "Invalid grade" << endl;
//         }
//     return 0;
//     }

// 10. A particle's charge (an integer, in units of elementary charge) is entered by the user. Print
// "Cation" if it is positive, "Anion" if it is negative, and "Neutral" if it is exactly zero.

// #include <iostream>
// using namespace std;

// int main()
// {
//     float charge;
//     cout << "Enter Charge of particle: " ;
//     cin >> charge;

//     if (charge > 0) {
//         cout << "Cation" << endl;
//     } else if (charge == 0) {
//         cout << "Neutral" << endl;
//     } else{
//         cout << "Anion" << endl;
//     }
//     return 0;
// }

// 11. In a simple quantum model, the energy of level n is E_n = n² × E1, where E1 is the groundstate energy. Write a program that reads E1 and a maximum level N, then uses a for loop to
// print E_n for every level from n = 1 to N.

// #include <iostream>
// using namespace std;

// int main()
// {
//     float E1, E_n;
//     int n;
//     cout << "Value of E1: ";
//     cin >> E1;
//     cout << "Value of n: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++){
//         cout << "Value of E_" << i << " = " << i*i*E1 << endl;
//     }
// return 0;
// }

// 12. A sensor logs 10 readings, some of which are invalid and recorded as negative numbers by
// mistake. Write a program that reads 10 values from the user in a for loop, skips (does not add)
// any negative value, and prints the total sum and the count of valid (non-negative) readings at
// the end.

// #include <iostream>
// using namespace std;

// int main()
// {
//     float reading;
//     float sum = 0;

//     for (int i =1; i <= 10; i++){
//         cout << "Reading " << i << " : ";
//         cin >> reading;
//         if (reading >= 0) {
//             sum = sum + reading;
//         } else{
//             continue;
//         }
        
//     }
//     cout << "Total sum = " << sum << endl;
//     return 0;
// }

// 13. A voltmeter records 6 readings into an array of doubles. Write a program that reads all 6 values
// and computes and prints their sum and their average.

// #include <iostream>
// using namespace std;

// int main()
// {
//     double sum, readings[6] = {1, 2, 3, 4, 5, 6};
//     sum = 0;

//     for (int i = 0; i < size(readings); i++) {
//         cin >> readings[i];
//         sum = readings[i] + sum;
//     }
    
//     cout << "Sum is: "<< sum << endl;
//     cout << "Average is: " << sum/size(readings);
//     return 0;
// }

// 14. A safety threshold is 75 units. Write a program that reads 8 readings into an array and counts
// how many of them exceed this threshold, printing the count.

// #include <iostream>
// using namespace std;

// int main()
// {
//     double readings[8];
//     int count = 0;

//     for (int i = 1; i <= size(readings); i++) {
//         cout << "Give input readings "<< i <<": ";
//         cin >> readings[i];
        
//         if (readings[i] > 75) {
//             count++;
//         } else {
//             continue;
//         }
//     }
//     cout << count << " Readings exceed the threshold value" << endl;
//     return 0;

// }

// 15. Write a program that reads 6 readings into an array and then prints them in reverse order (last
// reading first), using a loop that walks the array from the last index to the first.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int readings[6];
//     int inv_readings[6];

//     for (int i = 0; i < size(readings); i++){
//         cout << "Give input readings "<< i <<": ";
//         cin >> readings[i];
//     }
//     int j = 0;
//     for (int i = size(readings); i>=1; i--) {
//         inv_readings[j] = readings[i-1];
//         j++;
//     }
//     cout << "Inverse Array: " << endl;

//     for (int i = 0; i < size(inv_readings); i++) {
//         cout << inv_readings[i] << ", ";
//     }
// }

// 16. Write a program that declares an array of 5 doubles with given voltage readings, declares a
// pointer to its first element, and prints all 5 values using pointer arithmetic (incrementing the
// pointer) instead of array indexing.

// #include <iostream>
// using namespace std;

// int main() {
//     double readings[5];
//     double* ptr = readings;

//     for (int i = 0; i < size(readings); i++){
//         cout << "Give input readings "<< i <<": ";
//         cin >> readings[i];
//     }

//     for (int i = 0; i < 5; i++) {
//         cout << "Reading " << i << ": " << *(ptr + i) << endl;
//     }
//     return 0;
// }

// 17. Write a program that declares two double variables holding two calibration offsets, and swaps
// their values using pointers — i.e. use a temporary variable together with pointers to each
// (dereferencing to read and write) rather than swapping the variables directly by name.

#include <iostream>
using namespace std;

int main()
{
    double offset1 = 2.5; 
    double offset2 = 5.8; 

    double* p1 = &offset1; 
    double* p2 = &offset2;  

    double temp = *p1; 
    *p1 = *p2; 
    *p2 = temp; 
    
    cout << "Offset 1: " << offset1 << endl; 
    cout << "Offset 2: " << offset2 << endl; 
    return 0;
}