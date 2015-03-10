#include <iostream>

void doPrint()
{
    using namespace std;
    cout << "In doPrint function" << endl;
}

int main()
{
    using namespace std;
    cout << "Starting main function" << endl;
    doPrint();
    cout << "Ending main function" << endl;
    return 0;
}
