
nt main(void)
{
	DDRB |= (1<<DDB2)|(1<<DDB3);
	
	while (1)
	{
		PORTB |=(1<<PORTB2);
		PORTB &=~(1<<PORTB3);
		_delay_ms(1000);
			
		PORTB &=~(1<<PORTB2);
		PORTB |=(1<<PORTB3);
		_delay_ms(1000);
	}
}
