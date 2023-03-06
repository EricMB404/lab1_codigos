#include <iostream>

using namespace std;

int main()
{
    int numero,triangular,contador;
    while(true){
        triangular=0;contador=0;
        
        cout<<"Ingrese un numero: ";
        cin>>numero;
        
        for(float a=1;contador<numero;a++){
            contador=0;
            
            triangular=a*(a+1)/2;
            for(int b=1;b<=triangular;b++){ 
                if(triangular%b==0) contador++;
            }
        }
        cout<<"El numero es: "<<triangular<<" que tiene "<<contador<<" divisores"<<endl;
    
    return 0;
    }
}