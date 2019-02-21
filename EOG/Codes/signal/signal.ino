int up_flag;
unsigned long inicio, fim, tempo;
float up;

void setup(){
	Serial.begin(9600);
	up_flag=0;
}

void loop(){
	up = analogRead(0)*(5.0/1023.0);
	if(up>=2.0 && up_flag==0){
		up_flag=1;
		inicio = millis();
	} 
	
	while(up_flag==1){
		up = analogRead(0)*(5.0/1023.0);
		if(up<=1.8){
			up_flag=0;
			fim = millis();
			tempo = fim - inicio;
			//Serial.println(tempo);
      //delay(1000);
                        if(tempo<180){
                           Serial.println("Blink");
                           delay(1000);
                        }
                        else if(tempo>200){
                           Serial.println("Up");
                           delay(1000); 
                        }
		}
	}

 if(up<=1.4){
    Serial.println("Down");
    delay(1000);
 }
 
}
