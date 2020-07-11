//Basic Data Types.

#include <iostream>
#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() 
{
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << "\n" << b << "\n" << c << "\n";
    cout << std::fixed << std::setprecision(3) << d << '\n';
    cout << std::fixed << std::setprecision(9) << e << '\n';
    return 0;
}

/*function
<iomanip>
std::setprecision
setprecision(int n);

1)Set decimal precision

2)Sets the decimal precision to be used to format floating - point values on output operations.

3)Behaves as if member precision were called with n as argument on the stream on which it is inserted / extracted as
a manipulator(it can be inserted / extracted on input streams or output streams).

4)This manipulator is declared in header <iomanip>.*/
