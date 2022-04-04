int val;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(A0, INPUT);
    Serial.begin(9600);
}

void loop() {
  val=analogRead(A0);
  if (val>511){
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("OFF");
}

  else{
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("ON");
}
  delay(500);
}
