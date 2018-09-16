/*
 * File:   main.c
 * Author: SERVARIVERA
 *
 * Created on 30 de agosto de 2018, 06:12 PM
 */


#include <xc.h>
#include"config.h"
#define _XTAL_FREQ 32000000
void main(void) {
    //confuguracion del oscilador a 32MHz OSC = HFINT DIV 1:1
    
    OSCFRQbits.HFFRQ = 0b110; //HFINT 32 MHZ

            //configuracion de puertos

    PORTD =0; //Limpia puertos
    ANSELD =0; //Todo puerto B como digital
    TRISD =0b00001000;//TODO PUERTO D COMO SALIDA 
    
    //**********CICLO INFINITO***********
    
    while(1){
        LATDbits.LATD4 = LATDbits.LATD4+1; //Toggle RD4
        __delay_ms(500); //retardo 500ms
        
    }
    
  
    
    return;
}
