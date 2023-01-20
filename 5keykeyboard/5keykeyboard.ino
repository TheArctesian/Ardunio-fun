// A, C, D, E, G
int notes[] = {220, 262, 294, 330, 392};
const int threshold = 800;  


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  for (int thisSensor = 0; thisSensor < 5; thisSensor++) {
    // get a sensor reading:
    int sensorReading = analogRead(thisSensor);
    if (sensorReading < threshold) {
      tone(8, notes[thisSensor], 20);
      Serial.println(sensorReading);
    }
    
   
  }
}
