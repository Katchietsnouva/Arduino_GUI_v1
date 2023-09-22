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
      digitalWrite(LED_BUILTIN, HIGH); // Turn on the built-in LED
    } else if (d1 == 'a') {
      digitalWrite(LED_BUILTIN, LOW); // Turn off the built-in LED
    }
  }
}



// String data;
// char d1;
// void setup() {
//   // put your setup code here, to run once:
//   Serial.begin(9600 );
//   pinMode(13, OUTPUT);  // Initialize the LED_BUILTIN pin as an output

// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   if (Serial.available()){
//     data = Serial.readString();
//     d1 = data.charAt(0);
//     if (d1=='A'){
//       digitalWrite(13, HIGH);
//     }
//     else if (d1 == 'a'){
//       digitalWrite(13, LOW);
//     }
//   }

// }
