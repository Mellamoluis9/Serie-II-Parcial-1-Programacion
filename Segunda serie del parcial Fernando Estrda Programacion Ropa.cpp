#include <iostream>
using namespace std;


class ropa {
public:
    string nombre;
    string color;
    string marca;
    double precio;

    // Constructor
    ropa(string _nombre, string _color, string _marca, double _precio) {
        nombre = _nombre;
        color = _color;
        marca = _marca;
        precio = _precio;
        cout << "Se ha creado un objeto Producto: " << nombre << endl;
    }

    // Destructor
    ~ropa() {
        cout << "Se ha destruido un objeto Producto: " << nombre << endl;
    }
   // Metodo para mostrar la informacion del producto
    void mostrarInformacion() {
        cout << "Nombre:  " << nombre << endl;
        cout << "Color:   " << color << endl;
        cout << "Marca:   " << marca << endl;
        cout << "Preciio: " << precio << endl;
    }
};

int main() {
    ropa blusa("Blusa", "Azul", "Shein", 76.87);
    ropa pantalon("Pantalon", "Negro", "Pepe", 155);
    ropa shorts("Short", "Rosado","Gino", 300.45);
    ropa camiseta("Camiseta", "Blanco", "Pepe", 75);
    ropa vestido("Vestido", "Rojo","Shein", 745);

    cout << "Productos de la Tienda de Ropa:" << endl;
    cout << "--------------------------" << endl;
    blusa.mostrarInformacion();
    cout << endl;
    pantalon.mostrarInformacion();
    cout << endl;
    shorts.mostrarInformacion();
    cout << endl;
    camiseta.mostrarInformacion();
    cout << endl;
    vestido.mostrarInformacion();
    cout << endl;

    return 0;
}
