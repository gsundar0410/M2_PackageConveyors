#include "Headers\head.h"
int main(void)
{

    DDRB|=(1<<DDB2)|(1<<DDB3)|(1<<DDB4)|(1<<DDB0)|(1<<DDB6);

    while(1)
	{
            PORTB|=(1<<DDB2);
            _delay_ms(2000);
            PORTB&=~(1<<DDB2);
            _delay_ms(4000);


            PORTB|=(1<<DDB3);
            _delay_ms(2000);
            PORTB&=~(1<<DDB3);
            _delay_ms(4000);


            PORTB|=(1<<DDB4);
            _delay_ms(2000);
            PORTB&=~(1<<DDB4);
            _delay_ms(4000);

	}
	return 0;
}
