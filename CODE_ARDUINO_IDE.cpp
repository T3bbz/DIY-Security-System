#define LightPin 7
#define Buzzer 10

void buzzerOn(){
  tone(Buzzer, 450);
  delay(500);
}

void buzzerOff(){
  noTone(Buzzer);
  delay(500);
}

void setup(){
  Serial.begin(115200);
  pinMode(LightPin, INPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop(){
  int result = digitalRead(LightPin);
  Serial.print("Sensor value: ");
  Serial.println(result);
  delay(200);
  
  if(result == 0){
    buzzerOn();
  }
  if(result == 1){
    buzzerOff();
  }
}






