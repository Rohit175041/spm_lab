#include <bits/stdc++.h>
using namespace std;

float NPVCalculator(int years, int costs[], int benefits[], int discountRate[])
{
    float npv = 0.0;

    for (int i = 0; i < years; i++)
    {
        float rateFactor = pow(1 + (float(discountRate[i]) / 100.0), (i));
        float rate = 1.0 / (rateFactor);
        cout << "Rate Factor: " << rateFactor << "\t";
        cout << "Rate: " << rate << "\t";

        npv += (benefits[i] - costs[i]) * rate;
        cout << "NPV: " << npv << endl;
    }
    return npv;
}

int main()
{
    cout << "Enter Years\n";
    int years;
    cin >> years;

    years++;

    cout << "Enter cost for " << years << " years\n";
    int costs[years + 1];
    for (int i = 0; i < years; i++)
    {
        cin >> costs[i];
    }

    cout << "Enter benefits for " << years << " years\n";
    int benefits[years + 1];
    for (int i = 0; i < years; i++)
    {
        cin >> benefits[i];
    }
    cout << "Enter discount rates " << years << " years\n";
    int discountRate[years + 1];
    for (int i = 0; i < years; i++)
    {
        cin >> discountRate[i];
    }

    float npv = NPVCalculator(years, costs, benefits, discountRate);

    cout << "Net Profit Value = " << npv << endl;

    return 0;
}
