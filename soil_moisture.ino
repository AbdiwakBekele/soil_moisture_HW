
void setup() {
  
  Serial.begin(9600);

  //For Motor
  pinMode(7, OUTPUT);
  delay(500);
  
}

void loop() {
  
  int value = analogRead(0);
  Serial.println(value);
  delay(1000);

  if(value <= 350){
    //Moisture Level LOW
//    Serial.println("Status LOW");
//    Serial.println("Water Pump Started");
    digitalWrite(7, LOW);
    }
   else if(value <= 700){
    //Moisture Level Medium
//    Serial.println("Status MEDIUM");
//    Serial.println("Water Pump Stopped");
    digitalWrite(7, LOW);
    } 
   else if(value > 700){
//    Serial.println("Status HIGH");
//    Serial.println("Water Pump Stopped");
    digitalWrite(7, HIGH);
    } 

    delay(5000);
}
