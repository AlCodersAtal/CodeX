#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10 // Slave Select pin
#define RST_PIN 9 // Reset pin

MFRC522 rfid(SS_PIN, RST_PIN); // Create MFRC522 instance

void setup() {
  Serial.begin(9600); // Initialize serial communications
  SPI.begin(); // Initialize SPI bus
  rfid.PCD_Init(); // Initialize the MFRC522
  Serial.println("Place your RFID tag near the reader...");
}

void loop() {
  // Look for a new card
  if (!rfid.PICC_IsNewCardPresent()) {
    return; // No new card found
  }
  
  // Select one of the cards
  if (!rfid.PICC_ReadCardSerial()) {
    return; // No card selected
  }
  
  // Show UID on serial monitor
  Serial.print("UID tag: ");
  for (byte i = 0; i < rfid.uid.size; i++) {
    Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(rfid.uid.uidByte[i], HEX);
  }
  Serial.println();

  // Halt PICC
  rfid.PICC_HaltA();
}
