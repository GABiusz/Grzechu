#include <iostream>

using namespace std;
int i [521];
int x;
int main()
{
    for (x=0;x<=520;x++){
        i[x]=x*2;
        cout << i[x] << "," << endl;
    }
    return 0;
}
