/* 
   This code is for one end of the two way communication using lifi
   In this code we made use of AltSoftSerial Library so that we can 
   create both transmitting and recieving end simultaneously.
/****************************************************************************************************************************************************************************************/

#include <AltSoftSerial.h>              //including the library for communication channel for both the ends

AltSoftSerial recieving;                // creating instance for recieving the text
AltSoftSerial sending;                  // creating instance for sending the text

char x;
String outgoing;                        //declaring the string variable for message to be sent
String incoming="";                     //declaring the string variable for message to be sent
void setup() {
  
Serial.begin(9600);                     //starting the serial communication
recieving.begin(800);                   //starting the recieving channel
sending.begin(400);                     //starting the transmission channel
}

void loop() 
{
  if(recieving.available()!=0)    //waiting till someting is recieved
  {           
  Serial.println("Recieving the message:");
  incoming = recieving.readString(); 
  Serial.print(incoming);               //printing the recieved message on serial monitor
  Serial.flush();
  }
 
  if(Serial.available()!=0)     //waiting for user to give the input
  {
  Serial.println("Sending the message:");
  outgoing = Serial.readString();
  sending.print(outgoing);
  Serial.print(outgoing);                //printing the message to send on serial monitor
  Serial.flush();
  }
}
