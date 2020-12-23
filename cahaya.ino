int sensor = A2;
int LED = 7;


void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int  c = analogRead(sensor);
  if (c < 6) {
    digitalWrite(LED, HIGH);
    Serial.println("NYALA");
    delay(1000);
  }

  else {
 
    digitalWrite(LED, LOW);
    Serial.println("MATI");
    delay(1000);
  }
}
