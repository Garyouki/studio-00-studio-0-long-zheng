 
void setup() {
  Serial.begin(9600);
  //Serial.println("Hello, world!");
}

void loop() {
  delay(1000);
  int time = millis();
  
  Serial.print(time/1000.0);
  Serial.println(" totol time has passed");
  
  //delay(1000);
  
 
  
  
}
 
 
