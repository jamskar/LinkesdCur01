#include <iostream>

int main() {
    char nombre[6];
    std::cout<<"ingresa el Nombre : ";
    std::cin.getline(nombre,sizeof(nombre),'\n');
    std::cout<<nombre<<"\n";
    std::cout<<nombre<<"\n";
    std::cout<<nombre<<"\n";
    std::cout<<nombre<<"\n";
    system ("pause");
    return 0;
}