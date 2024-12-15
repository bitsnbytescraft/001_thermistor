  int tempReading = 0; 
  double tempK = 0;
  float tempC = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  tempReading = analogRead(0); 
  tempK = log(10000.0 * ((1024.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK ); 
  tempC = tempK - 273.15;

  Serial.print(tempC);
  Serial.println(" °C");

  delay(1000);
}
