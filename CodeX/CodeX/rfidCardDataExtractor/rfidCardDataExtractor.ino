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
    Serial.println("Place Your Card:");
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
    Serial.println("Scaning Your Card...");
    delay(2000);
    Serial.println("Name:Nebin Raj");
    Serial.println("Email:nebinraj200@gmail.com");
    Serial.println("Patient Number:000001");
    Serial.println("Click this link to Go to the website.");
    Serial.println("http://localhost/CodeX/Index.php");
    delay(10000);
    Serial.println("Please Place the next Card...");
    Serial.println("");
    Serial.println("");
    Serial.println("");
  }
    if (content.substring(1) == "43 1D 2C FB") // change here the UID of card/cards or tag/tags that you want to give access
  { 
    Serial.println("Scaning Your Card...");
    delay(2000);
    Serial.println("Name:KrishnaChandra");
    Serial.println("Email:kc@gmail.com");
    Serial.println("Patient Number:000002");
    Serial.println("Click this link to Go to the website.");
    Serial.println("http://localhost/CodeX/Index.php");
    delay(10000);
    Serial.println("Please Place the next Card...");
    Serial.println("");
    Serial.println("");
    Serial.println("");
  }
    if (content.substring(1) == "7B 78 62 12") // change here the UID of card/cards or tag/tags that you want to give access
  { 
    Serial.println("Scaning Your Card...");
    delay(2000);
    Serial.println("Name:Amal M Anil");
    Serial.println("Email:Amal@gmail.com");
    Serial.println("Patient Number:000003");
    Serial.println("Click this link to Go to the website.");
    Serial.println("http://localhost/CodeX/Index.php");
    delay(10000);
    Serial.println("Please Place the next Card...");
    Serial.println("");
    Serial.println("");
    Serial.println("");
  }
    if (content.substring(1) == "39 E8 2A 0F") // change here the UID of card/cards or tag/tags that you want to give access
  { 
    Serial.println("Scaning Your Card...");
    delay(2000);
    Serial.println("Name:Nikhil John J");
    Serial.println("Email:m96093989@gmail.com@gmail.com");
    Serial.println("Patient Number:000004");
    Serial.println("Click this link to Go to the website.");
    Serial.println("http://localhost/CodeX/Index.php");
    delay(10000);
    Serial.println("Please Place the next Card...");
    Serial.println("");
    Serial.println("");
    Serial.println("");
  }
    if (content.substring(1) == "E5 17 69 C4") // change here the UID of card/cards or tag/tags that you want to give access
  { 
    Serial.println("Scaning Your Card...");
    delay(2000);
    Serial.println("Name:Abhishek");
    Serial.println("Email:abi@gmail.com");
    Serial.println("Patient Number:000005");
    Serial.println("Click this link to Go to the website.");
    Serial.println("http://localhost/CodeX/Index.php");
    delay(10000);
    Serial.println("Please Place the next Card...");
    Serial.println("");
    Serial.println("");
    Serial.println("");
  }
    if (content.substring(1) == "F0 3F 49 A8") // change here the UID of card/cards or tag/tags that you want to give access
  { 
    Serial.println("Scaning Your Card...");
    delay(2000);
    Serial.println("Name:Akshay");
    Serial.println("Email:akshay@gmail.com");
    Serial.println("Patient Number:000006");
    Serial.println("Click this link to Go to the website.");
    Serial.println("http://localhost/CodeX/Index.php");
    delay(10000);
    Serial.println("Please Place the next Card...");
    Serial.println("");
    Serial.println("");
    Serial.println("");
  }
  
}
