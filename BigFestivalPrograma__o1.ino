const int LedPin = 2;
const int LedPin2 = 3;
const int LedPin3 = 4;
const int LedPin4 = 5;
const int LedPin5= 6;
const int LedPin6 = 7;
const int LDR = A0;   
int ValorLido = 0;

void setup() {
pinMode(LedPin, OUTPUT);
pinMode(LedPin2, OUTPUT);
pinMode(LedPin3, OUTPUT);
pinMode(LedPin4, OUTPUT);
pinMode(LedPin5, OUTPUT);
pinMode(LedPin6, OUTPUT);


}

void loop() {
 ValorLido = analogRead(LDR);

 if (ValorLido >= 500)
 {
  digitalWrite(LedPin,LOW);
  delay(500);
  digitalWrite(LedPin, HIGH);
  delay(500);
  digitalWrite(LedPin2, LOW);
  delay(500);
  digitalWrite(LedPin2, HIGH);
  delay(500);
  digitalWrite(LedPin3, LOW);
  delay(500);
  digitalWrite(LedPin3, HIGH);
  delay(500);
  digitalWrite(LedPin4, LOW);
  delay(500);
  digitalWrite(LedPin4, HIGH);
  delay(500);
  digitalWrite(LedPin5, LOW);
  delay(500);
  digitalWrite(LedPin5, HIGH);
  delay(500);
  digitalWrite(LedPin6, LOW);
  delay(500);
  digitalWrite(LedPin6, HIGH);
  
  }
  else 
  {
    
    digitalWrite(LedPin, LOW);
    digitalWrite(LedPin2, LOW);
    digitalWrite(LedPin3, LOW);
    digitalWrite(LedPin4, LOW);
    digitalWrite(LedPin5, LOW);
     digitalWrite(LedPin6, LOW);
    
    
    }
}
