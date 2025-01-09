
const int greenLEDPin = 9;
const int redLEDPin = 11;
const int blueLEDPin = 10;

const int temperatureSensorPin = A0;
const float baselineTemp = 30.0;


int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int temperatureSensorValue = 0;

 
void setup() {
    Serial.begin(9600);

    pinMode(greenLEDPin, OUTPUT);
    pinMode(redLEDPin, OUTPUT);
    pinMode(blueLEDPin, OUTPUT);
}

void loop() {
    
    temperatureSensorValue = analogRead(temperatureSensorPin);


    Serial.print("Raw Sensor Values \t Temperature: ");
    Serial.print(temperatureSensorValue);

    float voltage = (temperatureSensorValue/1024.0) * 5.0;
    float temperature = (voltage - .5) * 100;
    // Serial.print(", Volts: ");
    // Serial.print(voltage);
    Serial.print(", degrees C: ");
    Serial.println(temperature);

    if(temperature < baselineTemp) {
        redValue = 0;
        greenValue = 0;
        blueValue = 255;
    } else if(temperature >= baselineTemp && temperature < baselineTemp+5) {
        redValue = 0;
        greenValue = 255;
        blueValue = 0;
    } else if(temperature >= baselineTemp+5) {
        redValue = 255;
        greenValue = 0;
        blueValue = 0;
    }

    analogWrite(redLEDPin, redValue);
    analogWrite(greenLEDPin, greenValue);
    analogWrite(blueLEDPin, blueValue);

}
