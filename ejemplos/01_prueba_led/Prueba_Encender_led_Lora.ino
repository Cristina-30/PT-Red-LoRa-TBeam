/*Prueba básica de encendido y apagado de LED
Tarjeta: LILYGO TTGO T-Beam V1.2
Pin utilizado: GPO14

Este progrma per mite verificar el correcto funcionamiento 
de los pines GPIO del microntrolador ESP32, mediante 
el parpadeo de un LED conectado externamente.
*/

//Función que se ejecuta una sola vez al iniciar el programa
void setup() {  
  // Configura el pin GPIO14 como salida digital
  pinMode(14, OUTPUT);
}

// Función que se ejecuta de manera repetitiva
void loop() {
   // Enciende el LED (conectado al pin GPIO14 (en alto)
  digitalWrite(14, HIGH);
  // Retardo de 1000 milisegundos (1 segundo)
  delay(1000);
  // Apaga el LED (conectado al pin GPIO14 (en bajo)
  digitalWrite(14, LOW);
  // Retardo de 1000 milisegundos (1 segundo)
  delay(1000);
}
