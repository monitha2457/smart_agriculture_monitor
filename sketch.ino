#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22

#define SOIL_PIN 34
#define LED_PIN 2

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);

  dht.begin();

  pinMode(LED_PIN, OUTPUT);

  Serial.println("Smart Agriculture Monitoring System");
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  int soilValue = analogRead(SOIL_PIN);

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT22 sensor!");
    delay(2000);
    return;
  }

  Serial.println("=================================");
  
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Soil Moisture Value: ");
  Serial.println(soilValue);

  if (soilValue > 2500) {
    digitalWrite(LED_PIN, HIGH);

    Serial.println("Status: Soil Dry");
    Serial.println("Action: Water Needed");
  }
  else {
    digitalWrite(LED_PIN, LOW);

    Serial.println("Status: Soil Moist");
    Serial.println("Action: No Water Needed");
  }

  delay(2000);
}
