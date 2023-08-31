const int button = A0;
const int pled = 13;
bool led = false;

void setup() {
  // put your setup code here, to run once:
  pinMode (pled,OUTPUT);
  pinMode (button,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead (button)==0){
    
      delay(50);
      
       if (digitalRead (button)==0){
        led = !led;
        digitalWrite(pled, led ? HIGH : LOW);
       
  while (digitalRead(button) == LOW); { }      
       }  
}
}
