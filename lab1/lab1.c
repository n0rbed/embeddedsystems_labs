
void Delay(void) {
     unsigned int i;
     for (i = 0; i < 50000; i++);
}
void main() {
     TRISB = 0x00;
     while (1){
                 PORTB = 0x01;
                 Delay();
                 PORTB = 0x00;
                 Delay();
     }

}