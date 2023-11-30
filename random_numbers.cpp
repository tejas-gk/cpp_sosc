#include <iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int secretNumber = rand() % 100 + 1; // random number between 1 and 100
    cout<<secretNumber;
}