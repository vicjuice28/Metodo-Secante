#include <iostream>
#include <cstdlib>
#include<math.h>
#include <iomanip>
using namespace std;
//X1 = Xi      X0 = Xi-1        Fx1= F(xi)      Fx0= F(X-1)     X2 = Xi+1
float X1=3.2, X0=2.8, Fx1, Fx0, X2, Fxn, Error;
float tolerancia=0.0001;
float e=2.718281828;
int i =0, g=0;
void Tabla(){
    //Ecuacion
    // xi+1 = xi - ((fxi*xi-1-xi)/(fxi-1 - fxi))

//Resolver f(x)=(e^-x )-x +3   y   f(x)=(e^-x)-x

//Primera ecuación
cout<<"i\tXi\tXi-1\tF(Xi)\tF(X-1)\tX+1\tF(Xn)\tError"<<endl;
do{
Fx1 = (pow(e,(-X1))) - X1 +3;
Fx0 = (pow(e,(-X0))) - X0 +3;
X2= X1 -((Fx1*(X0-X1))/ (Fx0 - Fx1));
Fxn= (pow(e,(-X2))) - X2 +3;
Error = abs(((X2-X1)/X1)* 100);
i++;
cout<<i<<"\t"<<fixed<<setprecision(4)<<X1<<"\t"<<X0<<"\t"<<Fx1<<"\t"<<Fx0<<"\t"<<X2<<"\t"<<Fxn<<"\t"<<Error<<endl;
X0 = X1;
X1 = X2;

}
while(Error > tolerancia);

}







int main(){


    Tabla();





    system("PAUSE");
    return 0;
}
