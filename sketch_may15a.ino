const int LDR_SENSOR_PIN = 2;
const int MOSFET_GATE_PIN = 3;

void setup() {
  pinMode(LDR_SENSOR_PIN, INPUT);
  pinMode(MOSFET_GATE_PIN, OUTPUT);
}

void loop() {
  // Read the sensor
  int sensorState = digitalRead(LDR_SENSOR_PIN);

  // If the light is turning ON when it should be OFF, 
  // change "HIGH" to "LOW" in the line below:
  if (sensorState == HIGH) { 
    digitalWrite(MOSFET_GATE_PIN, HIGH); // Turn LED ON
  } 
  else {
    digitalWrite(MOSFET_GATE_PIN, LOW);  // Turn LED OFF
  }
}
