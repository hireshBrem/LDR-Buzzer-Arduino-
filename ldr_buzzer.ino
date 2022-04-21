
int readPin=A0;
int readVal;

int buzzVal;
int buzzPin = 7;
int dT;

void setup() {
  pinMode(readPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   readVal = analogRead(readPin);
   dT = (9./550.) * readVal -(9.*200./550.)+1.;
   Serial.println(readVal);
   digitalWrite(buzzPin, HIGH);
   delay(dT);
   digitalWrite(buzzPin, LOW);
   delay(dT);   
}
