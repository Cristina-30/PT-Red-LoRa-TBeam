/*Prueba básica de encendido y apagado de LED
Tarjeta: LILYGO TTGO T-Beam V1.2
Pin utilizado: GPO14

Este progrma per mite verificar el correcto funcionamiento de los pines GPIO del microntrolador ESP32, mediante el parpadeo de un LED 
  void setup() {  
  pinMode(14, OUTPUT);

}

void loop() {
  digitalWrite(14, HIGH);
  delay(1000);
  digitalWrite(14, LOW);
  delay(1000);

}
