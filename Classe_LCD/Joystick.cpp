#include "Joystick.h"

Joystick::Joystick(PinName vrx, PinName vry, PinName Sw) : VRX(vrx), VRY(vry), Switch(Sw){
}
/*
               ***************
               **** LER_X ****
               ***************
*/               
int Joystick::ler_x(void){
    int a = 2;
    if (VRX.read()*1000 > 800){
        a = 1;
    }
    if (VRX.read()*1000 < 200){
        a = 0;
    }
    return a;
}

/*
               ***************
               **** LER_Y ****
               ***************
*/               
int Joystick::ler_y(void){
    int a = 2;
    if (VRY.read()*1000 > 800){
        a = 1;                  
    }
    if (VRY.read()*1000 < 200){
        a = 0;
    }
    return a;
}

/*
               ********************
               **** BOT_SELECT ****
               ********************
*/               
int Joystick::bot_select(void){
    int a = 2;
    switch(Switch){
        case 1: a = 1; break; // Botão desapertado
        case 0: a= 0; break;  // Botão apertado
    }
    
    return a;
}
        