#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{   cout << "Press Enter 3 times to reveal your future.";
    string grade[]={"A","B+","B","C+","C","D+","D","F","W"};
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    cout << "You will get "<< grade[x] <<" in this 261102.";
    
    return 0 ;
}