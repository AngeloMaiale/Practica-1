#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int i=0;
    string data;
    ifstream input("./data/data.txt");
    if (!input.is_open()){
        cout<<"No se puede abrir"<<endl;
        return 0;
    }
    while(input>>data){
        for(int i=0; i<3;i++){
            switch(i){
                case 0:
                cout<<"Mi nombre es "<<data<<",";
                break;
                case 1:
                cout<<" numero de cedula: "<<","<<data;
                break;
                case 2:
                cout<<" mi correo es: "<<data<<endl;
                continue;
            }
            input>>data;
        }
    }
    input.close();
    return 0;
}