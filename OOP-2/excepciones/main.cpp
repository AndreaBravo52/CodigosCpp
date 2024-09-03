#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector <int> x;
    x.push_back(12);
    try{
    cout<<x.at(3);
    }
    catch (out_of_range &e){
        cout<<"Hubo una excepcion: "<<e.what();
    }
    cout<<"\ncontinua el programa"<<endl;
    while(true){
        int num;
        cout<<"Ingrese numero entre 1 y 5\n";
        cin>>num;
        try{
            if (num<1||num>5){
                string mensaje="\nValor invalido\n";
                throw invalid_argument(mensaje);
            }
            break;
        }
        catch (invalid_argument &ex){
            cerr<<"Se encontró la excepcion"<<ex.what()<<endl;
        }
    }
    cout<<"\nContinua el programa\n";
    return 0;
}