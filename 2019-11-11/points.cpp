#include<iostream>
#include<typeinfo>
#include<cmath>
double f(double x){
    return 6-x;
}
double l(double x1, double y1, double x2, double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
using namespace std;
int main(){
int n = 32, x[32], y[32], result[32];
bool isInTr = false, isInPoke = false;
for(int i = 0; i < n; i ++){
    isInTr = false;
    isInPoke = false;
    cin >> x[i] >> y[i];
    if(typeid(n)==typeid(x[i]) && typeid(n)==typeid(y[i])){
        if(x[i]>=2 && x[i]<=5 && y[i]>=2 && y[i]<=5 && y[i]<= f(x[i])){
            isInTr = true;
        }
        if(l(-9,0,x[i],y[i])>=1 && l(-9,0,x[i],y[i])<=3 && y[i]>=0){
            isInPoke = true;
        }
        if(isInTr || isInPoke){
            result[i] = 1;
        }else{
            result[i] = 0;
        }
    }else{
        break;
    }
}
for(int i = 0; i < n; i ++){
    cout <<"<"<<x[i]<<","<<y[i]<<"> "<<result[i]<<endl;
}



return 0;
}
