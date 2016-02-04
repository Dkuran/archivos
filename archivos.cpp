#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
/*
struct Punto{
    int x = 0;
    int y = 0;
    char nombre[10] = "Punto";
}punto1, punto2;
*/

struct Disco {
    char titulo[30];
    char artista[28];
    int numCanciones;
    double precio;
    int dia;
    int mes;
    int anio;
}disco1, disco2, disco3;

void imprimirDisco(Disco discox);
void llenarDisco(Disco &discox);


int main(){
    
    char texto [128];
    ofstream filew("discos.txt", ios_base ::app);
    llenarDisco(disco1);
    //imprimirDisco(disco1);
    
    filew << "Titulo: "<<disco1.titulo<< std::endl;
    filew << "Artista: "<<disco1.artista << std::endl;
    filew << "Contiene: "<<disco1.numCanciones<<" canciones" << std::endl;
    filew << "Precio: $ "<<disco1.precio << std::endl;
    filew << "Publicado en: "<<disco1.dia<<"/"<<disco1.mes<<"/"<<disco1.anio<<"\n"<< std::endl;
    
    filew.close();
    
    ifstream filer("discos.txt");
    
    while(filer.getline(texto, 128) != 0){
        std::cout << texto << std::endl;
    }
    /*
    punto1.x = 10;
    punto1.y = 12;
    strcpy(punto1.nombre, "Punto 1" );
    std::cout << punto1.nombre<<": ( "<<punto1.x<<" , "<<punto1.y <<" )"<< std::endl;
    punto2 = punto1;
    std::cout << punto2.nombre<<": ( "<<punto2.x<<" , "<<punto2.y <<" )"<< std::endl;
    */
    /*
    char nombre [35];
    char nombre2 [35];
    
    nombre = "Andres";
    std::cout <<"en nombre: "<<nombre << std::endl;
    nombre2 = nombre;
    std::cout << "en nombre2: "<<nombre2 << std::endl;
    */
    return 0;
}

void imprimirDisco(Disco discox){
    std::cout << "Titulo: "<<discox.titulo<< std::endl;
    std::cout << "Artista: "<<discox.artista << std::endl;
    std::cout << "Contiene: "<<discox.numCanciones<<" canciones" << std::endl;
    std::cout << "Precio: $ "<<discox.precio << std::endl;
    std::cout << "Publicado en: "<<discox.dia<<"/"<<discox.mes<<"/"<<discox.anio<<"\n"<< std::endl;
    
    
}
void llenarDisco(Disco &discox){
    
    std::cout << "Ingrese los datos del disco: " << std::endl;
    std::cout << "Titulo del disco: ";
    cin.getline(discox.titulo, 30);
    std::cout << "Artista del disco: ";
    cin.getline(discox.artista, 28);
    std::cout << "Fecha de publicacion: "<<endl;
    std::cout <<"dia: ";
    std::cin >> discox.dia;
    std::cout <<"mes: ";
    std::cin >> discox.mes;
    std::cout <<"anio: ";
    std::cin >> discox.anio;
    std::cout << "Numero de canciones: ";
    std::cin >> discox.numCanciones;
    std::cout << "Precio del disco: $ ";
    std::cin >> discox.precio;
    std::cout <<"\n";
    
}
