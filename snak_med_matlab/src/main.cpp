#include <Arduino.h>


int dataLength = 10;

String dataToSend[] = {
	"Aktivity,HR,EE,Skridt,Tid\n",
	"0,123,422,3289,1000\n",
	"1,123,422,3289,5000\n",
	"1,123,422,3289,10000\n",
	"3,123,422,3289,15000\n",
	"3,123,422,3289,20000\n",
	"3,123,422,3289,25000\n",
	"3,123,422,3289,30000\n",
	"3,123,422,3289,35000\n",
	"3,123,422,3289,40000\n"
};


String message = "0";

//uint8_t = getSessionNumber()
//{
//while (SD.exists("/Filnavn" + String(i) + ".txt"))
//{
//	i++;
//}
//return i;
//}

void setup() {
Serial.begin(115200);



if (Serial.available() > 0) {

	message = Serial.readStringUntil('\n');
    
	if (message.indexOf ("datafile")>= 0){
		//uint8_t = antalFiler;

		//antalFiler = getSessionNumber(); //På denne måde finder vi ud af hvor mange filer der er. Matlab modtager dette til, og laver en drop-down menu for hver.
	
		Serial.print('1');

	}	

	if (message.indexOf ("loaddata")>= 0){

		Serial.print(dataToSend[0]);


	}
}




}

void loop() {

  
}