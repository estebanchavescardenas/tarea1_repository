#include <iostream>
#include <vector>
using namespace std;

class Finca{

public:

        Finca(){  //constructor
            cout << "Finca creada" << endl;
            
        }          
        
        

};


class Campus {
    private:

    vector<Finca> total_fincas;
        
    
    public:
        
        

        Campus(){  //constructor
            cout << "Esto se ejecuta en cada instanciacion" << endl;
            cout << "Iniciando un objeto de la clase Campus" << endl;

            for (int i = 1; i <= 5; i ++){
            Finca nueva_finca; //creo un objeto de tipo Finca
            total_fincas.push_back(nueva_finca);
            int a = total_fincas.size(); //obtengo el tamanio del vector
            cout << a << endl;
            }
        }

    };




    int main(){
        /*Instanciar un objeto llamado pared basado en la clase Campus*/
        Campus rodrigo_facio;
        


        
    }