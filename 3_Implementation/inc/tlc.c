#include <avr/io.h>
#include <avr/delay.h>

int main()
{
DDRC |=1<<PC5; //enable pin 28 red1
DDRC |=1<<PC4; //enable pin 27 yellow1
DDRC |=1<<PC3; //enable pin 26 green1
DDRB |=1<<PB3; //enable pin 17 red2
DDRB |=1<<PB2; //enable pin 16 yellow2
DDRB |=1<<PB1; //enable pin 15 green2
while(1)
{
PORTC &= ~(1<<PC5); //on red1 pin28
PORTB &= ~(1<<PB1); //on green2 pin 15
PORTB |=(1<<PB3); //off red2
PORTC |=(1<<PC4); //off yellow1
PORTB |=(1<<PB2); //off yellow2
PORTC |=(1<<PC3); //off green1
_delay_ms(500000);   
PORTB &= ~(1<<PB2); //on yellow2
PORTB |=(1<<PB1); //off green2
_delay_ms(200000);
PORTC |=(1<<PC5); //off red1
PORTB |=(1<<PB2); //off yellow2
PORTC &= ~(1<<PC3); //on green1
PORTB &= ~(1<<PB3); //on red2
_delay_ms(500000);
PORTC &= ~(1<<PC4); //on yellow1
PORTC |=(1<<PC3); //off green1
_delay_ms(200000);
}
}
