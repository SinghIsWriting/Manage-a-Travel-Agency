/*

You manage a travel agency and you want your drivers to input their following details:
1. Name
2. Driving License no.
3. Route
4. Kms
Your program should be able to take n=3 as input and your driver will start inputting their details ine by one.

Your program should print details of the drivers of the drivers in a beautiful fashion.

*/

#include <stdio.h>
#include <string.h>

typedef struct Drivers{
    int kms;
    char name[30];
    char route[60];
    char driving_lic_no[20];
} drs;

int main()
{
    printf("Details of activities of Drivers of ABC pvt. ltd.\n\n");
    int n=3;
    drs driver0, driver1, driver2;

    printf("Enter details of first driver below: \n");
    printf("Your name: \n");
    gets(driver0.name);
    // scanf("%s", &driver0.name);
    printf("Your driving license number: \n");
    gets(driver0.driving_lic_no);
    // scanf("%s", &driver0.driving_lic_no);
    printf("Your route of driving: \n");
    gets(driver0.route);
    // scanf("%s", &driver0.route);
    printf("Driving distance(in kms): \n");
    scanf("%d", &driver0.kms);

    printf("Enter details of second driver below: \n");
    printf("Your name: \n");
    gets(driver1.name);
    // scanf("%s", &driver0.name);
    printf("Your driving license number: \n");
    gets(driver1.driving_lic_no);
    // scanf("%s", &driver0.driving_lic_no);
    printf("Your route of driving: \n");
    gets(driver1.route);
    // scanf("%s", &driver0.route);
    printf("Driving distance(in kms): \n");
    scanf("%d", &driver1.kms);

    printf("Enter details of third driver below: \n");
    printf("Your name: \n");
    gets(driver2.name);
    // scanf("%s", &driver0.name);
    printf("Your driving license number: \n");
    gets(driver2.driving_lic_no);
    // scanf("%s", &driver0.driving_lic_no);
    printf("Your route of driving: \n");
    gets(driver2.route);
    // scanf("%s", &driver0.route);
    printf("Driving distance(in kms): \n");
    scanf("%d", &driver2.kms);

    printf("********* Information of Drivers *********\n");
    printf("\nDetails of first Driver\n");
    // printf("Name: %s\n", driver0.name);
    printf("Name: ");
    puts(driver0.name);
    // printf("Driving license no: %s\n", driver0.driving_lic_no);
    printf("Driving license no: ");
    puts(driver0.driving_lic_no);
    // printf("Route: %s\n", driver0.route);
    printf("Route: ");
    puts(driver0.route);
    printf("Distance: %d\n", driver0.kms);

    printf("\nDetails of second Driver\n");
    // printf("Name: %s\n", driver0.name);
    printf("Name: ");
    puts(driver1.name);
    // printf("Driving license no: %s\n", driver0.driving_lic_no);
    printf("Driving license no: ");
    puts(driver1.driving_lic_no);
    // printf("Route: %s\n", driver0.route);
    printf("Route: ");
    puts(driver1.route);
    printf("Distance: %d\n", driver1.kms);

    printf("\nDetails of third Driver\n");
    // printf("Name: %s\n", driver0.name);
    printf("Name: ");
    puts(driver2.name);
    // printf("Driving license no: %s\n", driver0.driving_lic_no);
    printf("Driving license no: ");
    puts(driver2.driving_lic_no);
    // printf("Route: %s\n", driver0.route);
    printf("Route: ");
    puts(driver2.route);
    printf("Distance: %d\n", driver2.kms);

    return 0;
}

