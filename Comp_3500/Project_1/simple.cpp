#include <iostream>
#include <cmath>
using namespace std;
float calculateSD(float data[]);
int main()
{
int i;
float data[10];
cout << "Enter 10 elements: ";
for(i = 0; i < 10; ++i)
cin >> data[i];
cout << endl << "Standard Deviation = " << calculateSD(data);
return 0;
}
float calculateSD(float data[])
{
float sum = 0.0, mean, standardDeviation = 0.0;
int i;
for(i = 0; i < 10; ++i)
{
sum += data[i];
}
mean = sum/10;
for(i = 0; i < 10; ++i)
standardDeviation += pow(data[i] - mean, 2);
return sqrt(standardDeviation / 10);
}
int factors()
{
int i, n, factorial = 1;
cout << "Enter a positive integer: ";
cin >> n;
for (i = 1; i <= n; ++i) {
factorial *= i; // factorial = factorial * i;
}
cout<< "Factorial of "<<n<<" = "<<factorial;
cout<<endl;
return 0;
}

