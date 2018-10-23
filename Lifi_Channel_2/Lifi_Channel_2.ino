#include <AltSoftSerial.h>              //including the AltSoftSerial library for setting a two way communication
AltSoftSerial sending;                  // creating instance for recieving the text
AltSoftSerial recieving;                 // creating instance for sending the text

String incoming="";                     //declaring the string variable for message to be sent
String outgoing="";                     //declaring the string variable for message to be sent
void setup() 
{
   Serial.begin(9600);                     //starting the serial communication
  sending.begin(800);                     //starting the recieving channel
  recieving.begin(400);                   //starting the transmission channel
}

void loop() 
{
  if(Serial.available()!=0)       //waiting till someting is recieved
  {
  Serial.println("Enter the message");
  incoming=Serial.readString();
  Serial.print(incoming);                //printing the recieved message on serial monitor
  sending.print(incoming);
  Serial.flush();
  }
  
  if(recieving.available()!=0)    //waiting for user to give the input
  {
  Serial.println("recieving the message");
  outgoing=recieving.readString();
  if(outgoing=="")
  {
    sending.print("Message not sent");
    Serial.flush();
  }
  Serial.print(outgoing);                 //printing the message to send on serial monitor
  Serial.flush();
  }
}
