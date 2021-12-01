/******************************************************************************\
 INFORMAÇÕES IMPORTANTES:
 
    - O endereço padrão para o I2C é 0x7E
    - Para utilizar o I2C:
        - Configurar no arquivo TextLCD_Config.h a partir da linha 71:
        #define DEFAULT        0
        (...)
        #define YWROBOT        1
        (...)
    - Site para criar caracteres customizados:
    https://maxpromer.github.io/LCD-Character-Creator/
        
\******************************************************************************/


// I2C Communication
I2C i2c_lcd(PB_9,PB_8); // SDA, SCL

TextLCD_I2C lcd(&i2c_lcd, 0x7E, TextLCD::LCD20x4); // I2C bus, PCF8574 Slaveaddress, LCD Type

    
void LCD_Init(){
    
// Turn Backlight on    
    lcd.setBacklight(TextLCD::LightOn);
    
// Set Cusor Blink off and Blink on
    lcd.setCursor(TextLCD::CurOff_BlkOn);
    
// Clear screen
    lcd.cls();
    
}
    
void Tela_0(){
    lcd.locate(0,0);
    lcd.printf("> Pagina 1");
    lcd.locate(0,1);
    lcd.printf("> Pagina 2");
    lcd.locate(0,2);
    lcd.printf("> Pagina 3");
    lcd.locate(0,3);
    lcd.printf("> Pagina 4");
    lcd.locate(0,0);    
}
void Tela_1(){
    lcd.cls();
    lcd.locate(0,0);
    lcd.printf("Ola Mundo!");
    lcd.locate(0,0);    
}
void Tela_2(){
    lcd.cls();
    lcd.locate(0,0);
    lcd.printf("Bom dia Silvio!");
    lcd.locate(0,0);    
}
void Tela_3(){
    lcd.cls();
    lcd.locate(0,0);
    lcd.printf("Como vai voce?");
    lcd.locate(0,0);    
}
void Tela_4(){
    lcd.cls();
    lcd.locate(0,0);
    lcd.printf("E isso ai!");
    lcd.locate(0,0);    
}