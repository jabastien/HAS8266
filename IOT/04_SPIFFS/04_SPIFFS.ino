// Headers
#include "FS.h"

// Setup
void setup() 
{
  Serial.begin(115200);
  
  // SPIFS
  SPIFFS.begin();
  Dir dir = SPIFFS.openDir("/");
  while (dir.next()) 
  {
    Serial.print(dir.fileName());
    if(dir.fileSize()) 
    {
        File f = dir.openFile("r");
        Serial.println(f.size());
    }
  }
}

// Loop
void loop() 
{
  // nope
}
