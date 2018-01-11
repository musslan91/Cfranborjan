#include <iostream>

using namespace std;

void shit(int *a);
int main()
{
    int *tal = new int(10);
    shit(tal);
    cout << *tal << endl;
    return 0;
}
void shit (int *a)
{
    *a = *a + 1;
}
