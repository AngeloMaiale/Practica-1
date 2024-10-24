#include<iostream>
#include<fstream>
using namespace std;

struct Usuario{
    

}

int main(){
    int x=0;
    int data
    ofstream output("./data/data.txt");

    if(! output.is_open()){
        cout<<"No se puede crear ni abrir el archivo"<<endl;
        return 0;
    }
    cout<<"Cuantos datos va a ingresar"<<endl;
    cin>>x;

    while(x>0){
        cout<<"Ingrese un numero entero"<<endl;
        cin>>data;
        output<<data<<endl;
        x--;
    }
}
