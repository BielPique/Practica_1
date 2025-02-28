PRACTICA 1: BLINK

El objetivo de esta practica es producir el parpadeo de un LED mediante nuestro microcontrolador ESP32-S3.

1. CODIGO BASICO

   En este apartado introducimos el código de muestra de manera que el LED que conectamos al PIN 48 se encendiera y apagara de manera intermitente con una frecuencia de 1Hz (encendiéndose por 0.5s y apagándose por 0.5s).

   ![image](https://github.com/user-attachments/assets/0310fda1-c0ec-48ce-aee0-f1cc24043ced)

2. MODIFICACION "ON" "OFF"
   
      En este apartado hemos modificado el código de manera que cada vez que se apaga y se enciende el LED se envía un mensaje al serial monitor de “ON” para cada vez que se encienda y “OFF” cada vez que se apague.

![image](https://github.com/user-attachments/assets/529f0156-6379-410b-aa26-a8bdc0ef5831)

3. MODIFICACION PARA ACTUACION MEDIANTE LOS REGISTROS DE ENTRADA DE SALIDA
   
   En este apartado hemos modificado el código de manera que se enciende y apaga el LED accediendo directamente a “GPIO_OUT_REG” en cambio de usar “digitalWrite()”. Este código enciende y apaga el LED esperando 1 segundo entre cada cambio enviando los mismos mensajes que en el apartado anterior de “ON” y “OFF”.

![image](https://github.com/user-attachments/assets/b58980f2-fb97-4e20-8a65-31acac1535a3)

4. FRECUENCIAS MAXIMAS
   
   En este apartado hemos eliminado los delay y con el osciloscopio hemos medido la frecuencia máxima de apagado encendido que permite nuestro microcontrolador. Los resultados han sido:

4.1 Con el envío por el puerto série del mensaje y utilizando las funciones de Arduino: 30kHz

4.2 Con el envío por el puerto série y accediendo directamente a los registros: 30kHz

4.3 Sin el envío por el puerto série del mensaje y utilizando las funciones de Arduino: 1.7MHz

4.4 Sin el envío por el puerto série y accediendo directamente a los registros: 4.7MHz

![image](https://github.com/user-attachments/assets/d22096c2-9dff-4678-ae00-ec1958f6cae3)

![image](https://github.com/user-attachments/assets/59d9b348-71d7-4598-8d7c-39c1b5666198)


5. DIAGRAMA DE FLUJO


   ![image](https://github.com/user-attachments/assets/bff5df76-0dfd-48ee-a1b1-dd8d36506719)

En el anterior diagrama de flujo se puede ver como funciona el código:


1. Se inicia
2. El LED se enciende y se apaga transcurrido el tiempo de DELAY (500ms)
3. Una vez apagado se enciende tras el mismo tiempo de DELAY (500ms) 

  DIAGRAMA DE TIEMPO
  ![image](https://github.com/user-attachments/assets/2a72249b-5e14-4af7-b75d-b9ea6f9dec47)

6. El tiempo libre del procesador lo podemos calcular restando el tiempo ocupado en la ejecución del bucle al tiempo total de un ciclo, de esta manera podemos calcular sin problemas el tiempo libre del procesador.
