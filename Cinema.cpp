#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int cinema();
int cartelera();
int dulceria();
int salas();
int registro();
int main(int argc, char *argv[]){

int opcinema=0;

do
{
    opcinema=cinema();


    switch (opcinema)
    {
    case 1:
    {
        int opcartelera=0;
        do
        {
            opcartelera=cartelera();
            switch (opcartelera)
            {
            default:
                cout<<"Datos no conciden"<<endl;
            };
        } while (opcartelera!=0);
    }
        break;

    case 2:
    	
    	{
    int opdulceria=0;

         do
         {
            opdulceria=dulceria();
            switch (opdulceria)
            {
            default:
             cout<<"Datos no conciden"<<endl;
            }
         } while (opdulceria!=0);
    }
    	
        break;

    case 3:
    	
    	{
    int opsalas=0;
       do
       {
        opsalas=salas();
        switch (opsalas)
        {
        case 1:
            break;
        
        default:
         cout<<"Datos no conciden"<<endl;
            
        };
       } while (opsalas!=0);
    }  
    	
        break;

    case 4:
    	
    	{
    int opregistro=0;
       do
       {
        opregistro=registro();
        switch (opregistro)
        {
        case 1:
            break;
        
        default:
         cout<<"Datos no conciden"<<endl;
            
        };
       } while (opregistro!=0);
    }  
    	
        break;

    case 5:
        break;

    
    default:
    cout<<"Datos no conciden"<<endl;
    };

} while (opcinema!=0);
return 0;

}
int cartelera(){

    system("cls");
    cout<<"\t\t\tBillboard"<<endl;
    cout<<"[1]. Thor Love and Thunder"<<endl;
    cout<<"[2]. minions a villain is born"<<endl;
    cout<<"[3]. Lightyear"<<endl;
    cout<<"[4]. Jurassic World Dominion"<<endl;
    cout<<"[5]. Elvis"<<endl;
    cout<<"[0]. Exit"<<endl;
    cout<<endl;
    cout<<"ingresa un opcion del Menu:"<<endl;
    int opcartelera;
    cin>>opcartelera;

    return opcartelera;

}

int dulceria(){
	system("cls");
    cout<<"\t\t\tCandy store"<<endl;
    cout<<"[1]. COMBO SHARE FOR 3"<<endl;
    cout<<"[2]. PERSONAL COMBO"<<endl;
    cout<<"[3]. MG+REFILL"<<endl;
    cout<<"[4]. COMBO 3"<<endl;
    cout<<"[5]. BIG SODA"<<endl;
    cout<<"[0]. Exit"<<endl;

    int opdulceria;
    cin>>opdulceria;

    return opdulceria;

}

int salas(){
     
    system("cls");
    cout<<"\t\t\tRooms"<<endl;
    cout<<"[1]. room 1"<<endl;
    cout<<"[2]. room 2"<<endl;
    cout<<"[3]. room 3"<<endl;
    cout<<"[4]. vip room 1"<<endl;
    cout<<"[5]. vip room 2"<<endl;
    cout<<"[0]. Exit"<<endl;

    int opsalas;
    cin>>opsalas;

    return opsalas;

}

int cinema(){
	
	system("cls");
	system("color FD");
    cout<<"\t\t\tgold cinema"<<endl;
    cout<<"[1]. Billboard"<<endl;
    cout<<"[2]. Candy store"<<endl;
    cout<<"[3]. Rooms"<<endl;
    cout<<"[4]. Register"<<endl;
    cout<<"[5]. Payment methods"<<endl;
    cout<<"[0]. Exit"<<endl;
    cout<<endl;
    cout<<"ingresa un opcion del Menu:"<<endl;
    int opcinema;
    cin>>opcinema;

    return opcinema;

}

struct tipoDatos
{
    string nombreFich;        // Nombre del fichero
    long tamanyo;            // El tamaño en bytes
};
 
int numeroFichas=0;  // Número de fichas que ya tenemos
int i;               // Para bucles
int opcion;          // La opcion del menu que elija el usuario
 
string textoTemporal; // Para pedir datos al usuario
int numeroTemporal;
 
int registro()
{
    tipoDatos *fichas = new tipoDatos[1000];
 
    do
    {
        // Menu principal
        cout << endl;
        cout << "Escoja una opción:" << endl;
        cout << "1.- Añadir datos de un nuevo fichero" << endl;
        cout << "2.- Mostrar los nombres de todos los ficheros" << endl;
        cout << "3.- Mostrar ficheros que sean de mas de un cierto tamaño" << endl;
        cout << "4.- Ver datos de un fichero" << endl;
        cout << "0.- Salir" << endl;
        
 
        // Hacemos una cosa u otra según la opción escogida
        switch(opcion)
        {
            case 1: // Añadir un dato nuevo
                if (numeroFichas < 1000)   // Si queda hueco
                {
                    cout << "Introduce el nombre del fichero: ";
                    cin >> fichas[numeroFichas].nombreFich;
                    cout << "Introduce el tamaño en KB: ";
                    cin >> fichas[numeroFichas].tamanyo;
                    numeroFichas++;  // Y tenemos una ficha más
                }
                else   // Si no hay hueco para más fichas, avisamos
                    cout << "Máximo de fichas alcanzado (1000)!" << endl;
                break;
 
            case 2: // Mostrar todos
                for (i=0; i<numeroFichas; i++)
                    cout << "Nombre: " << fichas[i].nombreFich
                        << "; Tamaño: " << fichas[i].tamanyo
                        << "Kb" << endl;
                break;
 
            case 3: // Mostrar según el tamaño
                cout << "¿A partir de que tamaño quieres que te muestre? ";
                cin >> numeroTemporal;
                for (i=0; i<numeroFichas; i++)
                    if (fichas[i].tamanyo >= numeroTemporal)
                        cout << "Nombre: " << fichas[i].nombreFich
                            << "; Tamaño: " << fichas[i].tamanyo
                            << " Kb" << endl;
                break;
 
            case 4: // Ver todos los datos (pocos) de un fichero
                cout << "¿De qué fichero quieres ver todos los datos?";
                cin >> textoTemporal;
                for (i=0; i<numeroFichas; i++)
                    if (fichas[i].nombreFich == textoTemporal)
                        cout << "Nombre: " << fichas[i].nombreFich
                            << "; Tamaño: " << fichas[i].tamanyo
                            << " Kb" << endl;
                break;
 
            case 5: // Salir: avisamos de que salimos
                cout << "Fin del programa" << endl;
                break;
 
            default: // Otra opcion: no válida
                cout << "Opción desconocida!" << endl;
                break;
                
        }
        int opregistro;
        cin >> opregistro;
        return opregistro;
    } while (opcion != 0);  // Si la opcion es 5, terminamos

}

