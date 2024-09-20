// Ejercicio evaluatorio 3er bimestre
/*
  Integrantes
    Nombre: Benyamin
    Apellido: Sagranichne
    Curso: 3A
    
    Nombre: Matias
    Apellido: Ojman
    Curso: 3A
  
Congisgnas
  Conexionado:
    En la protoboard, conectar 4 LEDs para que cada uno pueda ser controlado individualmente. Cada LED deberá tener su respectiva resistencia.
    Se debe conectar tambien, un pulsador que permita recibir información de un usuario.
    Indicar a continuación los pines a los cuales se conectó cada elemento y el valor de resistencias utilizado:
      Pines:
        Boton: 2
        LED1: 3
        LED2:4
        LED3:5
        LED4:6
      Valor:
        R_boton: 47k
        R_LEDs: 330
*/

//Definimos todas nuestras variables y asignamos valores de cada pin
#define azul 3
#define boton 2
#define amarillo 5
#define rojo 4
#define verde 6

void setup() {
  //Asignamos si va a ser input o output cada elemento
  pinMode(boton, INPUT);
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
 
}

void loop() {
  //En el caso de que el boton sea apretado vamos a prender todos los leds
  if(digitalRead(boton) == 1){
    digitalWrite(amarillo, HIGH);
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, HIGH);
    digitalWrite(azul, HIGH);
  }
  // else, o sea y si no vamos a apagar todos
  else{
    digitalWrite(amarillo, LOW);
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
  }
}