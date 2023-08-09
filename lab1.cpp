// Implement cost-benefit analysis using any programming language

#include <bits/stdc++.h>
using namespace std;

using namespace std;
// calculating the net present value
class project
{
public:
    double calculateNPV(double intlInv, double annualBenefits, int projectDuration, double discountRate)
    {
        double npv = -intlInv;
        for (int year = 1; year <= projectDuration; ++year)
        {
            double futureBenefit = annualBenefits / pow(1 + discountRate, year);
            npv += futureBenefit;
        }
        return npv;
    }

    int print(double npv)
    {
        cout << "Net Present Value (NPV): rs " << npv << endl;

        if (npv > 0)
        {
            cout << "The project is beneficial." << endl;
        }
        else if (npv < 0)
        {
            cout << "The project is not beneficial." << endl;
        }
        else
        {
            cout << "The project is neutral." << endl;
        }
        return 0;
    }
};

int main()
{
    project g;

    cout << "Cost-Benefit Analysis " << endl;

    double initialInvestment, annualBenefits, disctRate;
    int projectDur;

    double tangible, intangible, opportunity;
    cout << "Enter initial investment costs: Rs" << endl;

    cout << "Enter tangible costs : Rs";
    cin >> tangible;
    initialInvestment += tangible;
    cout << "Enter intangible costs : Rs";
    cin >> intangible;
    initialInvestment += intangible;
    cout << "Enter opportunity costs: Rs";
    cin >> opportunity;
    initialInvestment += opportunity;

    cout << "Enter annual benefits: Rs";
    cin >> annualBenefits;

    cout << "Enter project duration (in years): ";
    cin >> projectDur;

    cout << "Enter discount rate (%): ";
    cin >> disctRate;
    disctRate /= 100.0; // Convert percentage to decimal

    double result = g.calculateNPV(initialInvestment, annualBenefits, projectDur, disctRate);

    g.print(result);

    return 0;
}
// value
// Enter initial investment costs: Rs
// Enter tangible costs : Rs20
// Enter intangible costs : Rs50
// Enter opportunity costs: Rs100
// Enter annual benefits: Rs500
// Enter project duration (in years): 2
// Enter discount rate (%): 1