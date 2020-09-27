#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    El programa hace que 200 clientes compren de manera aleatoria (para no ir ingresando 200 por teclado) las lamparas con sus precios aleatorios y su stock que esta hecho de la misma forma
*/

// FUNCION STOCK
void verificacionStock(pedido){
    
    // esta funcion lo que hace es guardar numeros aleatorios del 0 al 100 para saber cuantas lamparas estan en stock
    
  int stock[1000];
  
  // gererando numeros random para el stock
  for(int i=0;i<1000;i++){
    
    stock[i] = 0+ rand()%100;

  }

  // este for hace que si el stock es 0 no este disponible y si es distinto de 0 es que hay lamparas en stock
  for(int i =0;i<1;i++){
    if(stock[pedido] == 0) {
      printf("%d no disponible \n",stock[pedido]);
    }else {
        printf("Hay %d lamparas disponibles \n",stock[pedido]);
    }
  }
}


// FUNCION PRECIO
void precio(pedido){
    
    // esta funcion va a crear precios aleatorios para las lamparas (para no estar agregando precio por precio)
    
  int producto[1000];
  
  // gererando numeros random para el stock
  for(int i=0;i<1000;i++){
    
    producto[i] = 1000+ rand()%10000;
    // printf("precio %d \n",producto[i]);
  }
  
  printf("El precio de la lampara es %d \n",producto[pedido]);

}

// FUNCION COMISION
void comision(com) {
    
    // esta funcion crea la comision que dejan los clientes a los empleados (lo tome como la "propina" que dejan los clientes)
    
    int comision[10];
  
  // gererando numeros random para el stock
  for(int i=0;i<10;i++){
    
    comision[i] = 10+ rand()%100;
    // printf("precio %d \n",producto[i]);
  }
  printf("Dejo una comision de %d \n",comision[com]);
}


// FUNCION LOTE 1
void lote1(pedido){
    
    // esta funcion lo que haces es verificar el pedido del cliente (es decir, que numero de lampara llevan)
    // como estan en numeros aleatorios no creo que funcione como menor que 0 pero no es ta demas ponerlo
    
    if(pedido <= 0){
        printf("Elija un número de lampara existente\n");
    }else if(pedido > 1000) {
        printf("Ese número de lampara no existe\n");
    } else {
        printf("Eligio la lampara número %d \n",pedido);
        verificacionStock(pedido);
        precio(pedido);
    }
    
}

// FUNCION LOTE 2
void lote2(empleado){
    
    // esta funcion lo que haces es elegir en numero de empleado
    
    printf("Eligio al empleado %d \n", empleado);
    comision(empleado);
    
}


// FUNCION DE PEDIDOS
void pedidos(){
    
    // esta funcion es la principal
    // hace que los 200 clientes eligan los productos llamados por sus funciones
    // tambien esta la parte donde se pide la cantidad de empleados elegidos
    
    int clientes[200];
    int empleadosElegidos[10];
    
    int contador1 = 0;
    int contador2 = 0;
    int contador3 = 0;
    int contador4 = 0;
    int contador5 = 0;
    int contador6 = 0;
    int contador7 = 0;
    int contador8 = 0;
    int contador9 = 0;
    int contador10 = 0;
    
    int solicitado = 0;
    int cantidad = 0;
    
    
    for(int i=1;i<=200;i++) {
        
        printf("Numero de pedido %d \n",i);
        
        // lamo a la funcion lote1 y hago que los clientes eligan en producto
        lote1(clientes[i] = 1+ rand()%1000);
        
        // llamo a la funcion lote2 y hago que los clientes pongan su "propina"
        lote2(empleadosElegidos[i] = 1+ rand()%10);
        
            
            if(empleadosElegidos[i] == 1) {
                contador1++;
            } else if(empleadosElegidos[i] == 2) {
                contador2++;
                
            } else if(empleadosElegidos[i] == 3) {
                contador3++;
                
            } else if(empleadosElegidos[i] == 4) {
                contador4++;
                
            } else if(empleadosElegidos[i] == 5) {
                contador5++;
                
            } else if(empleadosElegidos[i] == 6) {
                contador6++;
                
            } else if(empleadosElegidos[i] == 7) {
                contador7++;
                
            } else if(empleadosElegidos[i] == 8) {
                contador8++;
                
            } else if(empleadosElegidos[i] == 9) {
                contador9++;
                
            } else if(empleadosElegidos[i] == 10) {
                contador10++;
                
            }
        
        printf("\n");
        
        
        
        if(i == 200) {
            printf("La cant de empleados numero 1 es: %d \n",contador1);
            printf("La cant de empleados numero 2 es: %d \n",contador2);
            printf("La cant de empleados numero 3 es: %d \n",contador3);
            printf("La cant de empleados numero 4 es: %d \n",contador4);
            printf("La cant de empleados numero 5 es: %d \n",contador5);
            printf("La cant de empleados numero 6 es: %d \n",contador6);
            printf("La cant de empleados numero 7 es: %d \n",contador7);
            printf("La cant de empleados numero 8 es: %d \n",contador8);
            printf("La cant de empleados numero 9 es: %d \n",contador9);
            printf("La cant de empleados numero 10 es: %d \n",contador10);
            
            printf("\n");
            
            
            // en esta parte se muestra la lampara mas solicitada
            
            for(int k = 1;k<=200;k++) {
                int cont = 0;
                
                for(int j=1;j<=200;j++){
                    
                    if(clientes[k] == clientes[j]) {
                        cont++;
                        // printf("%d igual %d \n",clientes[k],clientes[j]);
                        if(cont >=3) {
                            solicitado = clientes[j];
                            cantidad = cont;
                        }
                    }
                }
            }
            printf("el producto mas solicitado es %d con %d  \n",solicitado,cantidad);
            
        }
    }

}

// MAIN
int main(void) {

    // srand(time(NULL));
    
    // llamo la funcion pedidos
    pedidos();

    return 0;
}