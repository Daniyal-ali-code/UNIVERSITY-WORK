#include <iostream>
using namespace std;

int main() {
    double current_reading, previous_reading, units_consumed, bill, subsidy, surcharge;

    // TAKING INPUT FOR PREVIOUS AND CURRENT READING:
    cout << "Enter the previous reading (in units): ";
    cin >> previous_reading;
    cout << "Enter the current reading (in units): ";
    cin >> current_reading;

    // CALCULATING TOTAL UNITS CONSUMED:
    units_consumed = current_reading - previous_reading;

    // CHECKING THE UNITS CONSUMED AND MAKING BILL:
    if (units_consumed <= 300) {											// Case 1: If units are <= 300, rate is Rs. 4/- per unit and a 3% subsidy
        bill = units_consumed * 4;
        subsidy = 0.03 * bill;  											// 3% subsidy
        bill -= subsidy;  													// Apply subsidy
        cout << "Units Consumed: " << units_consumed << " units\n";
        cout << "Total Bill (after 3% subsidy): Rs. " << bill << endl;
    }
    else if (units_consumed >= 301 && units_consumed <= 400) {
        // Case 2: If units are between 301 and 400, rate is Rs. 6/- per unit
        bill = units_consumed * 6;
        cout << "Units Consumed: " << units_consumed << " units\n";
        cout << "Total Bill: Rs. " << bill << endl;
    }
    else if (units_consumed > 400) {
        // Case 3: If units are > 400, rate is Rs. 7/- per unit and a 4% surcharge
        bill = units_consumed * 7;
        surcharge = 0.04 * bill;  											// 4% surcharge
        bill += surcharge;  												// Apply surcharge
        cout << "Units Consumed: " << units_consumed << " units\n";
        cout << "Total Bill (after 4% surcharge): Rs. " << bill << endl;
    }
    else {
        // INVALID INPUT:
        cout << "Invalid input values for current or previous reading.\n";
    }

    return 0;
}

