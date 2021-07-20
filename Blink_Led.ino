#define led 13   //Obage led eke +pin eka sawikarana pin eka 
int wait = 20;   //Obata led eka blink wiya uthu kalaya 

void setup() {
  
  pinMode (led, OUTPUT);
}
void loop() {
  
  digitalWrite(led, HIGH);
  delay(wait);
  digitalWrite(led, LOW);
  delay(wait);
}
