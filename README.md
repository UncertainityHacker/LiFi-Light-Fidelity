# LiFi-Light-Fidelity-
My Team "Storm Riders" made this project and we won the best #HardwareHacks organised during the technical event Prototype(2019) at IIIT-A.
Storm Riders (I,Rudransh Gupta,Pulkit Goel,Shivansh Srivastava) showed how we can communicate two way between our PCs. We send messages using serial monitor, send text files and image file.
We used RealTerm software to send and capture the Image and text file. To send the image file we firstly encoded it to base64 and then at recievers side we decoded it back to image file, For encodeing and decoding we used EMGRtoB64 (easily available at microsoft store).
At recievers end we used IC LM358 (Op-Amp) to amplify(comparator) the recieved signal by LDR.
The circuit is attached(IC shown is LM358 and not LM393).
File size is limited to 1.3kb beacause arduino has very less memory. And it can increased if we use SD card through Sd card module.
