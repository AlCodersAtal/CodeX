#include <Wire.h>
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN); // Create MFRC522 instance.
void setup()
{
  Serial.begin(9600); // Initiate a serial communication
  SPI.begin();        // Initiate  SPI bus
  mfrc522.PCD_Init(); // Initiate MFRC522
}
void loop()
{

  // Look for new cards
  if (!mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }
  // Select one of the cards
  if (!mfrc522.PICC_ReadCardSerial())
  {
    return;
  }
  // Show UID on serial monitor
  String content = "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ";
    mfrc522.uid.uidByte[i], HEX;
    content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }

  content.toUpperCase();

  if (content.substring(1) == "23 AF 56 13") // change here the UID of card/cards or tag/tags that you want to give access
  {
    Serial.println("Name:Nebin Raj");
    Serial.println("Email:nebinraj200@gmail.com");
    Serial.println("Patient Number:000001");
    delay(10000);
    Serial.println("Please Place the next Card...");
    Serial.println("");
    Serial.println("");
    Serial.println("");
  }
}
