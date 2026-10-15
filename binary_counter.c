#include <avr/io.h>
#include <util/delay.h>

int main(){
  DDRD = 0b00111100;
  uint8_t count=0;
  
  while(1){
  	if(count == 16){
  		count = 0;
    }
    PORTD = (count<<2);
    count++;
    _delay_ms(500);
  return 0;
}
