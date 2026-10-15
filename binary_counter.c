#include <avr/io.h>
#include <util/delay.h>

#define LED0 D2
#define LED1 D3
#define LED2 D4
#define LED3 D5

int main(){
  DDRD = (LED0) | (LED1) | (LED2) | (LED3);
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
