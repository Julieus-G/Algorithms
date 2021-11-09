/*
Greedy Algorithm implementation in giving change to balances

PROGRAM START
READ the balance amount x
SET array a = array of denomimations


*/





#include <stdio.h>

int greedyAlgorithm(int Balance)
{
    int bob = 0;
    int Ngovo = 0;
    int das = 0;
    int mbao = 0;
    int keruse = 0;
    int chwani = 0;
    int soo = 0;
    int rwabe = 0;
    int punch = 0;
    int thao = 0;

    int array_of_denaominations[] = {1, 5, 10, 20, 40, 50, 100, 200, 500, 1000};

    while (Balance >= array_of_denaominations[9])
    {
        thao++;
        Balance = Balance - array_of_denaominations[9];
    }
    while (Balance >= array_of_denaominations[8])
    {
        punch++;
        Balance = Balance - array_of_denaominations[8];
    }
    while (Balance >= array_of_denaominations[7])
    {
        rwabe++;
        Balance = Balance - array_of_denaominations[7];
    }
    while (Balance >= array_of_denaominations[6])
    {
        soo++;
        Balance = Balance - array_of_denaominations[6];
    }
    while (Balance >= array_of_denaominations[5])
    {
        chwani++;
        Balance = Balance - array_of_denaominations[5];
    }
    while (Balance >= array_of_denaominations[4])
    {
        keruse++;
        Balance = Balance - array_of_denaominations[4];
    }
    while (Balance >= array_of_denaominations[3])
    {
        mbao++;
        Balance = Balance - array_of_denaominations[3];
    }
    while (Balance >= array_of_denaominations[2])
    {
        das++;
        Balance = Balance - array_of_denaominations[2];
    }
    while (Balance >= array_of_denaominations[1])
    {
        Ngovo++;
        Balance = Balance - array_of_denaominations[1];
    }
    while (Balance >= array_of_denaominations[0])
    {
        bob++;
        Balance = Balance - array_of_denaominations[0];
    }

    printf("Your withdrawal amount has the following denominations");
    printf("%d -thousands shillings notes \n", thao);
    printf("%d -five-hundreds shillings notes \n", punch);
    printf("%d -two-hundreds shillings notes \n", rwabe);
    printf("%d -one-hundreds shillings notes \n", soo);
    printf("%d -fifty shillings notes \n", chwani);
    printf("%d -forty shillings coins \n", keruse);
    printf("%d -twenty shillings coins \n", mbao);
    printf("%d -ten shilling coins \n", das);
    printf("%d -five shillings coins \n", Ngovo);
    printf("%d -one shillings coins \n", bob);
}

int main(void)
{
    int Balance;
    printf("Enter amount to withdraw: ");
    scanf("%d", &Balance);

    greedyAlgorithm(Balance);
    return 0;
}