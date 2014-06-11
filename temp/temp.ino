const int temperaturePin=0; //analog 0

void setup(){

  Serial.begin(9600); //time for both sides to talk properly
}

void loop(){
  
  float voltage, degC, degF;
  
  voltage=getVoltage(temperaturePin);
  
  degC= (voltage-0.5)*100.0;
  
  degF= degC * (9.0/5+3.0) + 32.0;
  
  
  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print(" deg C: ");
  Serial.print(degC);
  Serial.print("deg F: ");
  Serial.println(degF);

  delay(2000);
  
}

float getVoltage(int pin) {
  
  return(analogRead(pin)* 0.004882814);
  
  /* changes the 1 to 1023 value to something in 0 to 5v*/
  
}
