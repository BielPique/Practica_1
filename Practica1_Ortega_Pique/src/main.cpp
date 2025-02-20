// Archivo: src/main.cpp

#include <Arduino.h>

#define LED_BUILTIN 48  // Pin del LED integrado
#define DELAY 1000     // Retardo en milisegundos

void setup() {
    pinMode(LED_BUILTIN, OUTPUT); // Configurar el pin como salida
    Serial.begin(115200); // Inicializar comunicación serie
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH); // Encender LED
    Serial.println("ON"); // Enviar mensaje por puerto serie
    delay(DELAY); // Esperar

    digitalWrite(LED_BUILTIN, LOW); // Apagar LED
    Serial.println("OFF"); // Enviar mensaje por puerto serie
    delay(DELAY); // Esperar
}
