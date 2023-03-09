#include <stdio.h>

struct employee{
    double salary;
    double bonus;
    double deductions;
};

struct employee getdata(){
    struct employee m;
    printf("Enter The Salary: ");
    scanf("%lf",&m.salary);
    printf("Enter The Bonus: ");
    scanf("%lf",&m.bonus);
    printf("Enter The Deductions: ");
    scanf("%lf",&m.deductions);
    return m;
}

double net(struct employee r){
    return r.salary + r.bonus - r.deductions;
}

int main()
{
    struct employee mohsen,maged,mariam;
    printf("Enter Mohsen's Data: \n");
    mohsen = getdata();
    printf("\nEnter Maged's Data: \n");
    maged = getdata();
    printf("\nEnter Mariam's Data: \n");
    mariam = getdata();
    double total = net(mohsen) + net(maged) + net(mariam);
    printf("\nTotal Value = %.2lf",total);
}
