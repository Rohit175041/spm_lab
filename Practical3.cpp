#include <bits/stdc++.h>
using namespace std;

int main() {
    int externalInputs, externalOutputs, externalInquiries, internalFiles, externalInterfaceFiles;

    cout << "Enter the number of External Inputs: ";
    cin >> externalInputs;
    cout << "Enter the number of External Outputs: ";
    cin >> externalOutputs;
    cout << "Enter the number of External Inquiries: ";
    cin >> externalInquiries;
    cout << "Enter the number of Internal Logical Files: ";
    cin >> internalFiles;
    cout << "Enter the number of External Interface Files: ";
    cin >> externalInterfaceFiles;

    int weights[5][3] = {
        {3, 4, 6},    
        {4, 5, 7},    
        {3, 4, 6},    
        {7, 10, 15},   
        {5, 7, 10}     
    };

    int ufp = (externalInputs * weights[0][0] + externalOutputs * weights[1][0] +
               externalInquiries * weights[2][0] + internalFiles * weights[3][0] +
               externalInterfaceFiles * weights[4][0]);

    int tdi = 0;
    for (int i = 0; i < 2; i++) {
        int influence;
        cout << "Enter the degree of influence for characteristic " << (i + 1) << " (0-5): ";
        cin >> influence;
        tdi += influence;
    }

    double vaf = (tdi * 0.01) + 0.65;
    double fpc = ufp * vaf;

    cout << "Unadjusted Function Points (UFP): " << ufp << endl;
    cout << "Total Degree of Influence (TDI): " << tdi << endl;
    cout << "Value Adjustment Factor (VAF): " << vaf << endl;
    cout << "Function Point Count (FPC): " << fpc << endl;

    return 0;
}
