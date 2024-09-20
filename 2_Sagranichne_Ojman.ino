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
#define verde 6
#define rojo 4
#define amarillo 5
#define boton 2

boolean azul_bool = true;
boolean rojo_bool = false;
boolean amarillo_bool = false;
boolean verde_bool = false;
boolean press = false;


void setup() {
      //Asignamos si va a ser input o output cada elemento

  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);

    pinMode(amarillo, OUTPUT);
pinMode(boton, INPUT);

}

void loop() {
  
  

  // Condiciones para el color Azul
  if (digitalRead(boton) == 1 && verde_bool && !press) {
    //Bandera para evitar múltiples ejecuciones con el mismo valor
    press = true;
    azul_bool = true;
    rojo_bool = false;

        amarillo_bool = false;
verde_bool = false;
    //encender el LED correspondiente al color Azul
    digitalWrite(azul, HIGH);
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, LOW);
    
  }
    // Condiciones para el color Rojo
 else if (digitalRead(boton) == 1 && azul_bool && !press) {
    press = true;
    Serial.println("azul");
    azul_bool = false;
    rojo_bool = true;

        amarillo_bool = false;
verde_bool = false;
    //Encender el LED correspondiente al color Rojo
    digitalWrite(azul, LOW);
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, LOW);
    
  }
else   if (digitalRead(boton) == 1 && rojo_bool && !press) {
    press = true;
    azul_bool = false;
    rojo_bool = false;

        amarillo_bool = true;
verde_bool = false;
    // Encender el LED correspondiente al color Amarillo
    digitalWrite(azul, LOW);
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, HIGH);
    
  }
   else if (digitalRead(boton) == 1 && amarillo_bool && !press) {
    //Bandera para evitar múltiples ejecuciones con el mismo valor
    press = true;
    azul_bool = false;
    rojo_bool = false;

        amarillo_bool = false;
verde_bool = true;
    // Encender el LED correspondiente al color Azul
    digitalWrite(azul, LOW);
    digitalWrite(rojo, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(amarillo, LOW);
    
  }


  // Reiniciar el estado del botón
  if (digitalRead(boton) == 0) {
    press = false;
  }
}