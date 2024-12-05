#include<iostream>
using namespace std;
int main()
{
    int currentReading, previousReading, units;
    float costPerUnit, grossBill, netBill, subsidy, surcharge;
    // Input current and previous meter readings
    printf("Enter current reading: ");
    scanf("%d",&currentReading);
    printf("Enter previous reading: ");
    scanf("%d",&previousReading);
    // Calculate total units consumed
    units=currentReading-previousReading;
    if (units<=0)
	{
        printf("Invalid readings.\n");
    }
    // Determine cost per unit and gross bill
    else if (units<=300)
	{
        costPerUnit=4.0;
        grossBill=units*costPerUnit;

        // Apply subsidy
        subsidy=0.03*grossBill;
        netBill=grossBill-subsidy;
        
        printf("\nElectricity Bill:\n");
        printf("Units Consumed: %d\n", units);
        printf("Cost Per Unit: Rs: %.2f\n", costPerUnit);
        printf("Gross Bill: Rs: %.2f\n", grossBill);
        printf("Subsidy (3%): Rs: %.2f\n", subsidy);
        printf("Net Bill = Rs: %.2f\n", netBill);
     }
	else if (units>=301 && units<=400)
	 {
        costPerUnit=6.0;
        grossBill=units*costPerUnit;

        printf("\nElectricity Bill:\n");
        printf("Units Consumed: %d\n", units);
        printf("Cost Per Unit: Rs: %.2f\n", costPerUnit);
        printf("Gross Bill: Rs: %.2f\n", grossBill);
        printf("Net Bill = Rs: %.2f\n", grossBill); // No subsidy or surcharge

    } 
	else 
	{ 
        costPerUnit=7.0;
        grossBill=units*costPerUnit;
        surcharge=0.04*grossBill;    // Apply surcharge
        netBill=grossBill+surcharge;

        printf("\nElectricity Bill:\n");
        printf("Units Consumed: %d\n", units);
        printf("Cost Per Unit: Rs: %.2f\n", costPerUnit);
        printf("Gross Bill: Rs: %.2f\n", grossBill);
        printf("Surcharge (4%): Rs. %.2f\n", surcharge);
        printf("Net Bill = Rs: %.2f\n", netBill);
    }
    return 0;
}

