//   ************** START OF PROGRAM *****************  //

#include <Servo.h>
 
Servo Thumb;
Servo Index;
Servo Middle;
Servo Ring;
Servo Little;

char command;

void setup() {
  Serial.begin(9600);
  Thumb.attach(8);
  Index.attach(9);
  Middle.attach(10);
  Ring.attach(11);
  Little.attach(12);
  reset();
}

void loop() {
    command = Serial.read();
    if(command == 'a'){
      Serial.println('\n');
      Hand_Closed();
    }
    else if(command =='b'){
      Serial.println('\n');
      IndexF();
    }
    else if(command =='c'){
      Serial.println('\n');
      MiddleF();
    }
    else if(command =='d'){
      Serial.println('\n');
      RingF();
    }
    else if(command =='e'){
      Serial.println('\n');
      LittleF();
    }
    else if(command =='f'){
      Serial.println('\n');
      ThumbF();
    }
    else if(command =='g'){
      Serial.println('\n');
      Index_Little();
    }
    else if(command =='h'){
      Serial.println('\n');
      Index_Middle();
    }
    else if(command =='i'){
      Serial.println('\n');
      Middle_Ring();
    }
    else if(command =='j'){
      Serial.println('\n');
      Ring_Little();
    }
    else if(command =='k'){
      Serial.println('\n');
      Thumb_Index();
    }
    else if(command =='l'){
      Serial.println('\n');
      Thumb_Little();
    }
    else if(command =='m'){
      Serial.println('\n');
      Index_Middle_Ring();
    }
    else if(command =='n'){
      Serial.println('\n');
      Middle_Ring_Little();
    }
    else if(command =='o'){
      Serial.println('\n');
      Thumb_Index_Little();
    }
    else if(command =='p'){
      Serial.println('\n');
      Thumb_Index_Middle();
    }
    else if(command =='q'){
      Serial.println('\n');
      Index_Middle_Ring_Little();
    }
    else if(command =='r'){
      Serial.println('\n');
      Thumb_Index_Middle_Ring();
    }
    else if(command =='s'){
      Serial.println('\n');
      Hand_Open();
    }
    else if(command =='t'){
      Serial.println('\n');
      Partial();
    }
  
  }
 
 
void Hand_Open()
{
  delay(1000);
  Index.write(0);
  delay(1000);
  Thumb.write(0);
  delay(1000);
  Middle.write(0);
  delay(1000);
  Ring.write(0);
  delay(1000);
  Little.write(0);
  delay(1000);
}

void Hand_Closed()
{
  delay(1000);
  Index.write(150);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(180);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void IndexF()
{
  delay(1000);
  Index.write(0);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(180);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void MiddleF()
{
  delay(1000);
  Index.write(150);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(0);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void RingF()
{
  delay(1000);
  Index.write(150);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(180);
  delay(1000);
  Ring.write(0);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void LittleF()
{
  delay(1000);
  Index.write(150);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(180);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(0);
  delay(1000);
}

void ThumbF()
{
  delay(1000);
  Index.write(150);
  delay(1000);
  Thumb.write(0);
  delay(1000);
  Middle.write(180);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void Index_Little()
{
  delay(1000);
  Index.write(0);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(180);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(0);
  delay(1000);
}

void Index_Middle()
{
  delay(1000);
  Index.write(0);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(0);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void Middle_Ring()
{
  delay(1000);
  Index.write(150);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(0);
  delay(1000);
  Ring.write(0);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void Ring_Little()
{
  delay(1000);
  Index.write(150);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(180);
  delay(1000);
  Ring.write(0);
  delay(1000);
  Little.write(0);
  delay(1000);
}

void Thumb_Index()
{
  delay(1000);
  Index.write(0);
  delay(1000);
  Thumb.write(0);
  delay(1000);
  Middle.write(180);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void Thumb_Little()
{
  delay(1000);
  Index.write(150);
  delay(1000);
  Thumb.write(0);
  delay(1000);
  Middle.write(180);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(0);
  delay(1000);
}

void Index_Middle_Ring()
{
  delay(1000);
  Index.write(0);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(0);
  delay(1000);
  Ring.write(0);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void Middle_Ring_Little()
{
  delay(1000);
  Index.write(150);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(0);
  delay(1000);
  Ring.write(0);
  delay(1000);
  Little.write(0);
  delay(1000);
}

void Thumb_Index_Little()
{
  delay(1000);
  Index.write(0);
  delay(1000);
  Thumb.write(0);
  delay(1000);
  Middle.write(180);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(0);
  delay(1000);
}

void Thumb_Index_Middle()
{
  delay(1000);
  Index.write(0);
  delay(1000);
  Thumb.write(0);
  delay(1000);
  Middle.write(0);
  delay(1000);
  Ring.write(150);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void Index_Middle_Ring_Little()
{
  delay(1000);
  Index.write(0);
  delay(1000);
  Thumb.write(160);
  delay(1000);
  Middle.write(0);
  delay(1000);
  Ring.write(0);
  delay(1000);
  Little.write(0);
  delay(1000);
}

void Thumb_Index_Middle_Ring()
{
  delay(1000);
  Index.write(0);
  delay(1000);
  Thumb.write(0);
  delay(1000);
  Middle.write(0);
  delay(1000);
  Ring.write(0);
  delay(1000);
  Little.write(150);
  delay(1000);
}

void Partial()
{
  delay(1000);
  Index.write(90);
  delay(1000);
  Thumb.write(90);
  delay(1000);
  Middle.write(90);
  delay(1000);
  Ring.write(90);
  delay(1000);
  Little.write(90);
  delay(1000);
}


void reset()
{
  Thumb.writeMicroseconds(0);
  Index.writeMicroseconds(0);
  Middle.writeMicroseconds(0);
  Ring.writeMicroseconds(0);
  Little.writeMicroseconds(0);
}

//   ************** END OF PROGRAM *****************  //