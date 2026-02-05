# Prueba básica de LED - LILYGO T-Beam V1.2

Este ejemplo tiene como objetivo verificar el correcto funcionamiento de los pines GPIO de la tarjeta LILYGO TTGO T-Beam V1.2 mediante el encendido y apagado de un LED.

La prueba permite validar: 
- La correcta programacion del microcontrolador ESP32.
- El funcionamiento basico de los pines GPIO.
- La correcta configuracion del entorno de desarroollo Arduino IDE.
  
Esta validacion es un paso previo indispensable antes de implementar aplicaciones mas complejas.

# Material necesario 

- 1 LED (cualquier color).
- 1 Tarjeta LILYGO T-Beam V1.2.
- 1 Cable USB tipo C (datos).

# Conexion del LED
- **Ánodo (patilla larga del LED):** conectado al pin **GPIO14**
- **Cátodo (patilla corta del LED):** conectado a **GND**
> ⚠️ Es importante respetar la polaridad del LED para evitar un funcionamiento incorrecto.

## Funcionamiento del programa
El programa configura el pin GPIO14 como salida digital. Dentro del ciclo principal (`loop()`), el LED se enciende durante 1 segundo y posteriormente se apaga durante 1 segundo, generando un parpadeo visible.

## Ubicación del código
ejemplos/01_prueba_led/Prueba_Encender_led_Lora.ino

## Resultados esperados
Al cargar el programa en la tarjeta, el LED debe encenderse y apagarse de forma periódica cada segundo, confirmando el correcto funcionamiento del hardware y del entorno de programación.

## Notas
Este ejemplo corresponde a una prueba básica de validación de hardware y sirve como base para el desarrollo de aplicaciones IoT más avanzadas basadas en LoRa.







