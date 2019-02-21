float lr;
void setup(){
	Serial.begin(9600);
}

void loop(){
	lr = analogRead(1)*(5.0/1023.0);
	if(lr>2.2){
		Serial.println("Right");
		delay(1000);
	}
	else if(lr<=1.1){
		Serial.println("Left");
		delay(1000);
	}
	
}
