/* From https://balau82.wordpress.com/2011/03/29/programming-arduino-uno-in-pure-c/
   written by Balau.

   One LED put on pin 5 blinks on/off once under 2 seconds
 */


#include <util/delay.h>

#define DELAY1 1
#define DELAY2 5

int main (void) {
    int ms, ix;
    /* set pin 5 of PORTB for output*/
    DDRB |= _BV(DDB5);

    for(ix = 1; ix < 64; ix<<=1) {
        for(ms = 0; ms < 1000; ms++) {
            if(ms % ix == 0)
                /* set pin 5 high to turn led on */
                PORTB |= _BV(PORTB5);
            else
                /* set pin 5 low to turn led off */
                PORTB &= ~_BV(PORTB5);
            _delay_ms(1);
        }
    }
    PORTB &= ~_BV(PORTB5);
}
