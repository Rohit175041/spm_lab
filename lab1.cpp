// Implement cost-benefit analysis using any programming language

#include <bits/stdc++.h>
using namespace std;

using namespace std;
// calculating the net present value
class project
{
public:
    double calculateNPV(double initialInvestment, double annualBenefits[], int projectDuration, double discountRate[])
    {
        double npv = -initialInvestment;
        cout << setw(10) << "Year" << setw(20) << " Cash Flow" << setw(25) << "Discount Factor" << setw(35) << "Discounted Cash Flow" << endl;
        cout << setw(10) << "0" << setw(20) << -initialInvestment << setw(25) << fixed << setprecision(2) << discountRate[0] << setw(35) << -initialInvestment << endl;
        cout << setfill('-') << setw(90) << "-" << setfill(' ') << endl;
        for (int year = 1; year <= projectDuration; ++year)
        {
            double dcf = annualBenefits[year - 1] * discountRate[year - 1];
            npv += dcf;
            cout << setw(10) << year << setw(20) << annualBenefits[year - 1] << setw(25) << fixed << setprecision(2) << discountRate[year - 1]
                 << setw(35) << dcf << endl;
        }
        return npv;
    }
};

int main()
{
    project g;

    cout << "Cost-Benefit Analysis" << endl;
    cout << "---------------------" << endl;

    double initialInvestment;

    int projectDuration;

    cout << "Enter inital investment: ";
    cin >> initialInvestment;

    cout << "Enter project duration (in years): ";
    cin >> projectDuration;

    cout << "Enter annual benefits: $";
    double annualBenefits[projectDuration];
    for (int i = 0; i < projectDuration; i++)
    {
        cin >> annualBenefits[i];
    }

    cout << "Assuming a discount rate of 10%: " << endl;
    double discountRate[] = {0.9091, 0.8264, 0.7513, 0.6830, 0.6209, 0.5645, 0.5132, 0.4605, 0.4241, 0.3855, 0.2394, 0.1486, 0.0923};

    double npv = g.calculateNPV(initialInvestment, annualBenefits, projectDuration, discountRate);

    cout << "\nResults" << endl;
    cout << "-------" << endl;
    cout << "Net Present Value (NPV): $" << npv << endl;

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
}
