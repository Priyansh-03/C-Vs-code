#include<stdio.h>

int main()
{
    float salary, nps_gpf__contribution, gis, lic, nsc, ppf, others1, others2, home_loan_principal, total_savings, total_rebate, taxable_income, income_tax, edu_health_cess, total_income_tax;
    float standard_deduction = 50000;  //Standard deduction under Section 16(ia)
    float max_total_savings = 150000;  //Maximum total savings under Section 80C
    
    // Taking inputs from the user
    printf("Enter your annual salary: ");
    scanf("%f", &salary);
    // salary=1345958;

    
    printf("Enter your NPS contribution: ");
    scanf("%f", &nps_gpf__contribution);
    // nps_gpf__contribution=129465;
    
    printf("Enter your GIS amount: ");
    scanf("%f", &gis);
    // gis=2400;

    
    printf("Enter your LIC amount: ");
    scanf("%f", &lic);
    // lic=13739;
    printf("Enter your NSC amount: ");
    scanf("%f", &nsc);
    // nsc=0;
    printf("Enter your PPF amount: ");
    scanf("%f", &ppf);
    // ppf=5000;
    printf("Enter your amount for others(1): ");
    scanf("%f", &others1);
    // others1=0;
    printf("Enter your amount for others(2): ");
    scanf("%f", &others2);
    // others2=0;
    printf("Enter your home loan principal amount: ");
    scanf("%f", &home_loan_principal);
    // home_loan_principal=0;
    //Calculating the total savings under Section 80C
    total_savings = nps_gpf__contribution + gis + lic + nsc + ppf + others1 + others2 + home_loan_principal;
    if (total_savings > max_total_savings)
        total_savings = max_total_savings;
    
    //Calculating the total rebate available
    total_rebate = standard_deduction + total_savings;
    if (total_rebate > max_total_savings + standard_deduction)
        total_rebate = max_total_savings + standard_deduction;
    
    //Calculating the taxable income
    taxable_income = salary - total_rebate;
    if (taxable_income < 0)
        taxable_income = 0;
    
    //Calculating the income tax liability
    if (taxable_income <= 250000)
        income_tax = 0;
    else if (taxable_income > 250000 && taxable_income <= 500000)
        income_tax = (taxable_income - 250000) * 0.05;
    else if (taxable_income > 500000 && taxable_income <= 1000000)
        income_tax = (taxable_income - 500000) * 0.20 + 12500;
    else
        income_tax = (taxable_income - 1000000) * 0.30 + 112500;
    
    //Calculating the total income tax liability and edu & health cess
    total_income_tax = income_tax * 1.04;
    
    //Printing the results
    printf("\n--- Income Tax Calculator ---\n");
    printf("Annual Salary: Rs. %.2f\n", salary);
    printf("Standard Deduction: Rs. %.2f\n", standard_deduction);
    printf("NPS: Rs. %.2f\n", nps_gpf__contribution);
    printf("GIS: Rs. %.2f\n", gis);
    printf("LIC: Rs. %.2f\n", lic);
    printf("NSC: Rs. %.2f\n", nsc);
    printf("PPF: Rs. %.2f\n", ppf);
    printf("Others(1): Rs. %.2f\n", others1);
    printf("Others(2): Rs. %.2f\n", others2);
    printf("Principal amount of home loan: Rs. %.2f\n", home_loan_principal);
    printf("Total Savings{Max 150000}: Rs. %.2f\n", total_savings);
    printf("Total Rebate: Rs. %.2f\n", total_rebate);
    printf("Taxable income: Rs. %.2f\n", taxable_income);
    printf("Income tax: Rs. %.2f\n", income_tax);

    printf("total_income_tax: Rs. %.2f\n", total_income_tax);
    return 0;
}