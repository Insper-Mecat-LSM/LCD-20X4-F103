#ifndef JOYSTICK_H
#define JOYSTICK_H
#include "mbed.h"

class Joystick {
public:
    Joystick(PinName vrx, PinName vry, PinName Sw);
/*    
               *******************************
               **** DEFINIÇÕES DE FUNÇÕES ****
               *******************************
*/               
// Função que retorna o valor de VRX     
    int ler_x(); // 1 --> VRX > 800 || 0 --> VRX < 200
    
// Função que retorna o valor de VRX
    int ler_y(); // 1 --> VRY > 800 || 0 --> VRY < 200
    
// Função que retorna 0 quando o botão for apertado
    int bot_select();  
    
/*    
               ********************************
               **** DEFINIÇÕES DE ENTRADAS ****
               ********************************
*/    
    AnalogIn VRX;     // Entrada analógica VRX
    AnalogIn VRY;     // Entrada analógica VRX
    DigitalIn Switch; // Entrada digital SW 
};

#endif