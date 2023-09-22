String data;
char d1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); // Initialize the built-in LED pin as an output (NodeMCU uses LED_BUILTIN constant)
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    data = Serial.readString();
    d1 = data.charAt(0);
    if (d1 == 'A') {
      digitalWrite(LED_BUILTIN, LOW); // Turn on the built-in LED
    } else if (d1 == 'a') {
      digitalWrite(LED_BUILTIN, HIGH); // Turn off the built-in LED
    }
  }
}

