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
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);

    pinMode(amarillo, OUTPUT);
pinMode(boton, INPUT);

  Serial.begin(9600);
}

void loop() {
  
  // Leer datos del puerto serial solo si hay datos disponibles
  

  // Condiciones para el color VERDE
  if (digitalRead(boton) == 1 && verde_bool && !press) {
    press = true;
    Serial.println("azul");
    azul_bool = true;
    rojo_bool = false;

        amarillo_bool = false;
verde_bool = false;

    digitalWrite(azul, HIGH);
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, LOW);
    
    // Reiniciar data para evitar múltiples ejecuciones con el mismo valor
  }
  // Condiciones para el color AZUL
 else if (digitalRead(boton) == 1 && azul_bool && !press) {
    press = true;
    Serial.println("azul");
    azul_bool = false;
    rojo_bool = true;

        amarillo_bool = false;
verde_bool = false;

    digitalWrite(azul, LOW);
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, LOW);
    
    // Reiniciar data para evitar múltiples ejecuciones con el mismo valor
  }
else   if (digitalRead(boton) == 1 && rojo_bool && !press) {
    press = true;
    Serial.println("azul");
    azul_bool = false;
    rojo_bool = false;

        amarillo_bool = true;
verde_bool = false;

    digitalWrite(azul, LOW);
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(amarillo, HIGH);
    
    // Reiniciar data para evitar múltiples ejecuciones con el mismo valor
  }
   else if (digitalRead(boton) == 1 && amarillo_bool && !press) {
    press = true;
    azul_bool = false;
    rojo_bool = false;

        amarillo_bool = false;
verde_bool = true;

    digitalWrite(azul, LOW);
    digitalWrite(rojo, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(amarillo, LOW);
    
    // Reiniciar data para evitar múltiples ejecuciones con el mismo valor
  }


  // Reiniciar el estado del botón
  if (digitalRead(boton) == 0) {
    press = false;
  }
}