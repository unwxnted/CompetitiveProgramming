#include <bits/stdc++.h>

using namespace std;

void alarma();

int temp;

void inicializar(int temperaturaMaxima) {

    temp = temperaturaMaxima;

}

void cambiarTemperatura(int nuevaTemperatura) {
    // Acá tenés que decidir si hacer sonar la alarma o no
    if(nuevaTemperatura > temp){
        alarma();
    }
}
