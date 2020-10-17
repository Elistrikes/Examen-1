void setup() 
{
  Serial.begin (9600);
  pinMode (A1, INPUT);
  pinMode (A2, INPUT);
}

void loop() 
{
  float volt;
  float volt1 = analogRead (A1);
  float volt2 = analogRead (A2);
  float volt_1 = volt1 * (5.0 / 1023.0);
  float volt_2 = volt2 * (5.0 / 1023.0);
  float temperatura = volt_1 / .0171;

  float out  = volt_2 - volt_1;

  Serial.print("Temperatura... ");
  Serial.print(temperatura);
  Serial.println(" C");
  Serial.print(out);
  Serial.println ("V...");
   
  delay(1000);
}
