//LED ON PIN 3
int pinkie_Data = A1;
int finger_Data = A2;
int thumb_Data = A3;
//const int MPU_addr = 0x68;
const int MPU2 = 0x69, MPU1 = 0x68;

//how often to send values to the robotic arm
int response_time = 1000;

//read the values from the flex sensors to Arduino
pinkie = analogRead(pinkie_Data);
finger = analogRead(finger_Data);
thumb = analogRead(thumb_Data);

GetMpuValue1(MPU1);
GetMpuValue2(MPU2);

  if (bool_caliberate == false){
    delay(1000);
    thumb_high = (thumb * 1.15);
    thumb_low = (thumb * 0.9);
    finger_high = (finger * 1.03);
    finger_low = (finger * 0.8);
    pinkie_high = (pinkie * 1.06);
    pinkie_low = (pinkie * 0.8);
    bool_caliberate = true;
}

// finger 1 - claw bend/open
if (finger >= finger_high){
  Serial.print("F");
  delay(response_time);
}
if (finger <= finger_low){
  Serial.print("f");
  delay(response_time);
}
