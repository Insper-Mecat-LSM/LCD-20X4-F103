#include "mbed.h"
#include "TextLCD.h"
#include "Joystick.h"
#include "Telas.h"

Joystick Joy (A2, A3, USER_BUTTON); // VRX, VRY, SW




int main() {
    LCD_Init();
    Tela_0();
    
    int row = 0;
    int col = 0;
    while(1){
        switch (Joy.ler_x()) // Rotina para movimentar eixo X
        {
            case 0: 
                if (row == 0){ row = 0; } else{ row--;}
                lcd.locate(col,row);
                wait(0.2); 
                break;
            case 1: 
                if (row == 3){ row = 3; } else{ row++;}
                lcd.locate(col,row);
                wait(0.2); 
                break;
        }
        if (Joy.bot_select() == 0){
            switch (row){
                case 0: Tela_1(); break;
                case 1: Tela_2(); break;
                case 2: Tela_3(); break;
                case 3: Tela_4(); break;
            }
        }

    }

//// Create custom characters
//    const char udc_I1[]   = {0x0A, 0x1F, 0x0E, 0x04, 0x00, 0x00, 0x00, 0x00};
//    
//// Set custom char to address 0
//    lcd.setUDC(0, (char *) udc_I1);
//    
//// Go to col=3 row=0
//    lcd.locate(3,0);
//    
//// Print the custom char
//    lcd.putc(0);  

}