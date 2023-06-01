#include <iostream>
#include <cmath>
#include <iomanip>

// Valor de pi determinado en la consigna:
const float valorpi = 3.141592;

int main(void)
{

    float suma = 0;
    float aux;
    size_t count = 0;

    // Cantidad de decimales solicitados en la cosigna:
    std::cout << std::fixed;
    std::cout << std::setprecision(6);

    while (suma != valorpi/4)

    {
            aux = pow(-1,count)/((2 * count) + 1);
            suma += aux;
            count++;
    }

    std::cout << "El valor se obtuvo a partir de " << count << " iteraciones." << std::endl;
    std::cout << "Valor: " << (suma * 4) << std::endl;

    return 0;

}
