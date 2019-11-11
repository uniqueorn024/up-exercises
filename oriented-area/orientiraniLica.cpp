#include<iostream>
using namespace std;
double s(double x1, double y1, double x2, double y2){
    return (x1+x2)*(y2-y1)/2;
}
int main (){
int n;
double x[100], y[100];
cin >> n;
for(int i = 0; i < n; i ++){
    cin >> x[i] >> y[i];
}
double area = 0;
for(int i = 0; i < n - 1; i ++){
    area += s(x[i], y[i], x[i+1], y[i+1]);
}
area += s(x[n-1], y[n-1], x[0], y[0]);
cout << area;
return 0;
}
