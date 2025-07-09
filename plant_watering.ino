#define sensorPin A0
#define relayPin 8

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Pump OFF by default
}

void loop() {
  int moisture = analogRead(sensorPin);
  Serial.print("Soil Moisture: ");
  Serial.println(moisture);

  if (moisture < 400) { // Adjust threshold as needed
    digitalWrite(relayPin, LOW);  // Pump ON
  } else {
    digitalWrite(relayPin, HIGH); // Pump OFF
  }
  delay(1000);
}
