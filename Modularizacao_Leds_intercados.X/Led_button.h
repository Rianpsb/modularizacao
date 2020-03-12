   

void Led_button (void)
{
    PORTD=0;
    DIR_S1=ENTRADA;
    DIR_S2=ENTRADA;
    DIR_LED1=SAIDA;
    DIR_LED2=SAIDA;
}