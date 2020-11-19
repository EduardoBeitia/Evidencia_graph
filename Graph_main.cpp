//
//Equipo 2
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

#include "Graph.h"

int main(){
    
    //Creating variables to read bitacora.txt
    ifstream archivo("bitacora.txt");
    string mes, dia, hora, direccionIP, razon;
    int count=0;

    string IP, puerto;

    //Creating graph object
    Graph graph;

    while (archivo>>mes>>dia>>hora>>direccionIP){
        getline(archivo,razon);

        stringstream di(direccionIP);
        getline(di,IP,':');
        getline(di, puerto);

        graph.addEdged(puerto,IP);     
    }

    
    graph.puertoMax();
    graph.IPMax();

    return 0;
}