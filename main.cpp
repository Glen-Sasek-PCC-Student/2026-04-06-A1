// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
  int employeeID = 0;
  cout << "Welcome to my Weekly Payroll program!!" << endl;
  cout << "Enter your employee ID number (numbers only): ";
  cin >> employeeID;

  cout << "Enter number of hours worked (whole numbers): " << endl;
  int hoursWorked = 0;
  cin >> hoursWorked;

  cout << "Enter the hourly rate: " << endl;
  int hourlyRate = 0;
  cin >> hourlyRate;

  cout << "Enter the federal withholding rate percent: " << endl;
  int federalWithholdingRatePercent = 0;
  cin >> federalWithholdingRatePercent;

  // DO CALCULATIONS
  int totalGrossPayUSD = hoursWorked * hourlyRate;
  int federalTaxWitholdingUSD = (totalGrossPayUSD * federalWithholdingRatePercent) / 100;
  int netPayUSD = totalGrossPayUSD - federalTaxWitholdingUSD;

  // OUTPUT RESULTS
  cout << "Your Payroll Summary:" << endl;
  cout << "Total Gross Pay: $" << totalGrossPayUSD << endl;
  cout << "Federal Tax Withholding: $" << federalTaxWitholdingUSD << endl;
  cout << "Net Pay: $" << netPayUSD << endl;
  cout << "Thank you for using my Weekly Payroll program!!" << endl;

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

To implement a simply weekly payroll program you will do the following:
Read the employee ID number (an int) from the user
Read the number of hours worked (an int) from the user
Read the hourly rate (an int) from the user
Read the federal withholding rate (an int, e.g., 10)
You must read one input per line. Please see the sample run below. This is part of the required coding construct.
Your program should calculate the total gross pay, the Income Tax Withholding, and the net pay.
First calculate the total gross pay from the hours worked and the hourly rate inputs. 
Then calculate the Federal Tax withholding using the gross pay and the federal withholding rate.
Then calculate the Net Pay by subtracting the federal tax withholding from the gross pay.
Output the following:: 
-Total Gross Pay 
-Federal Tax Withholding
-Net Pay


Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

MESSAGE "Welcome to my Weekly Payroll program!!"

PROPMT "Enter your employee ID number (numbers only): "
INPUT employeeID

PROMPT "Enter number of hours worked (whole numbers): "
INPUT hoursWorked

PROMPT "Enter the hourly rate: "
INPUT hourlyRateUSD

PROMPT "Enter the federal withholding rate percent: "
INPUT federalWithholdingRatePercent

DO CALCULATIONS

MESSAGE "Your Payroll Summary:"

LABEL "Total Gross Pay: "
DATA totalGrossPayUSD

LABEL "Federal Tax Withholding: "
DATA federalTaxWitholdingUSD

LABEL "Net Pay: "
DATA netPayUSD

MESSAGE "Thank you for using my Weekly Payroll program!!"

SAMPLE RUNS
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!




Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!


*/
