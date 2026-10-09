#include "ABlocks_DHT.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

double Happiness;
boolean b_NoiseLevelAcceptable;
boolean b_TemperatureAcceptable;
boolean b_AirQualityAcceptable;
DHT dht2(2,DHT11);
Adafruit_SSD1306 oled_1(128,64, &Wire,-1);
bool oled_1_autoshow=true;

void setup()
{
  	pinMode(A0, INPUT);
	pinMode(2, INPUT);
	pinMode(A1, INPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);

	dht2.begin();

	oled_1.begin(SSD1306_SWITCHCAPVCC,0x3C);
	b_NoiseLevelAcceptable = false;
	b_TemperatureAcceptable = false;
	b_AirQualityAcceptable = false;

}


void loop()
{

  	oled_1.fillCircle(32,32,20,WHITE);
  	if(oled_1_autoshow)oled_1.display();
  	oled_1.fillCircle(96,32,20,WHITE);
  	if(oled_1_autoshow)oled_1.display();
  	oled_1.fillRect(32,5,64,10,WHITE);
  	if(oled_1_autoshow)oled_1.display();
  	delay(1000);
  	Happiness = 0;
  	if ((((float) map(analogRead(A0),0,1023,0,100)) < 30)) {
  		b_NoiseLevelAcceptable = true;
  	}
  	else {
  		b_NoiseLevelAcceptable = false;
  	}

  	if (((dht2.readTemperature() > 10) && (dht2.readTemperature() < 25))) {
  		b_TemperatureAcceptable = true;
  	}
  	else {
  		b_TemperatureAcceptable = false;
  	}

  	if ((((float)map(analogRead(A1),0,1023,0,100)) < 20)) {
  		b_TemperatureAcceptable = true;
  	}
  	else {
  		b_TemperatureAcceptable = false;
  	}

  	if ((b_NoiseLevelAcceptable == true)) {
  		digitalWrite(3, HIGH);
  		Happiness = 1;
  	}
  	else if ((b_NoiseLevelAcceptable == false)) {
  		digitalWrite(3, LOW);
  	}

  	if ((b_TemperatureAcceptable == true)) {
  		digitalWrite(4, HIGH);
  		Happiness = 1;
  	}
  	else if ((b_TemperatureAcceptable == false)) {
  		digitalWrite(4, LOW);
  	}

  	if ((b_AirQualityAcceptable == true)) {
  		digitalWrite(5, HIGH);
  		Happiness = 1;
  	}
  	else if ((b_AirQualityAcceptable == false)) {
  		digitalWrite(4, LOW);
  	}

  	if ((Happiness == 0)) {
  		oled_1.setTextSize(1);
  		oled_1.setTextColor(WHITE);
  		oled_1.setCursor(32,55);
  		oled_1.print(String("Happiness: Low"));
  		if(oled_1_autoshow)oled_1.display();
  	}
  	else if ((Happiness == 1)) {
  		oled_1.setTextSize(1);
  		oled_1.setTextColor(WHITE);
  		oled_1.setCursor(32,55);
  		oled_1.print(String("Happiness: Average"));
  		if(oled_1_autoshow)oled_1.display();
  	}
  	else if ((Happiness == 2)) {
  		oled_1.setTextSize(1);
  		oled_1.setTextColor(WHITE);
  		oled_1.setCursor(32,55);
  		oled_1.print(String("Happiness: Good"));
  		if(oled_1_autoshow)oled_1.display();
  	}
  	else if ((Happiness == 3)) {
  		oled_1.setTextSize(1);
  		oled_1.setTextColor(WHITE);
  		oled_1.setCursor(32,55);
  		oled_1.print(String("Happiness: Great"));
  		if(oled_1_autoshow)oled_1.display();
  	}

}