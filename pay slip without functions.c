#include<stdio.h>
int main()
{
    int runningpay , basicsalary,experience,perincrement_amount,age,donation,grosspay,hra,ssb,ara,IT,AI,GPF,Total_deduction,Net_pay;
    char grade;

 printf("Enter the grade :");
    scanf("%c",&grade);
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your experience:");
    scanf("%d",&experience);


    //now apply the switch statement to calculate the grading system
    switch(grade)
    {
    case 'w':
    case 'W':
         basicsalary=10000;
         perincrement_amount=700;
         break;
    case 'x':
    case 'X':
         basicsalary=12900;
         perincrement_amount=910;
         break;
    case 'y':
    case 'Y':
        basicsalary=21700;
        perincrement_amount=1500;
         break;
    case 'z':
    case 'Z':
         basicsalary=32600;
         perincrement_amount=2800;
         break;

    default:
        printf("Invalid Grade");
        break;
    }
    runningpay = basicsalary + (experience*perincrement_amount);
        printf("\nBasic pay\n______________________\n\n\nBasic salary:\t\t\t%d\nNumber of the increment:\t%d\nRunning pay:\t\t\t%d\n\n ",basicsalary,experience,runningpay);
     hra=runningpay*0.45;
    ssb=basicsalary*0.30;
    if (grade=='w'|| grade=='W' && age>40)
        ara=3000;
    else
        ara=1500;
    grosspay=runningpay+hra+ssb+ara;
    donation=grosspay%100;
    grosspay=grosspay-donation;
    printf("Allowances\n_______________\nHouse Rent Allowance: \t\t%d\nSocial Security Benefit: \t%d\nAdhoc Relief Allowance: \t%d\n\nGross Pay: \t\t\t%d\n\n\n", hra, ssb, ara, grosspay);

    AI=grosspay*12;

      if(AI>0 && AI<=400000)

        IT = grosspay*0;

    else if(AI>=400001 && AI<=650000)

        IT = grosspay*0.025;

    else if(AI>=650001 && AI<=1000000)

        IT = grosspay*0.045;

    else if(AI>=1000001 && AI<=15000000)

        IT = grosspay*0.07;

    else

        IT = grosspay*0.115;

    GPF=grosspay*10/100;

    Total_deduction=GPF+IT+donation;

    Net_pay=grosspay-Total_deduction;

    printf("Deductions\n_______________\nIncome Tax: \t\t\t%d\nGeneral Provident Fund: \t%d\nDonation: \t\t\t%d\n\nTotal Deduction: \t\t%d\n\n\nNet Pay: \t\t\t%d\n", IT, GPF, donation, Total_deduction, Net_pay);


}

