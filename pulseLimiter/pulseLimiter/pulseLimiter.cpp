#include <iostream>
#include <conio.h>
#include <lusb0_usb.h>
using namespace std; //Initializing namespace
void printdev(libusb_device *dev); //Initializing libusb components
int main () //starting the program
{
	libusb_device **devs;
	libusb_device_handle *dev_handle;
	libusb_device_context *ctx = NULL;
	int r;
	ssize_t cnt;
	r = libusb_init(&ctx);
	//Makes the USB emit a oulse from pins 2 x 3 each loop
	int n; // Initializing the variable "n" for the counter
	cout << "Amount of frames between each pulse:"
	cin >> n; //Having the user input the amount of frames between each pulse
	int t;
	cout << "Amount of pulses total:"
	cin t; //User input of the total pulses.
	for (int y = 0; y < t; y++) { //Starting a new loop for each pulse.
	for (int x = 0; x < n; x++) { //Starting a new loop for the time between each pulse.
		cout<< x <<endl; //Displaying the number of frames after each pulse
						 //and sending out a pulse each time it displays 0.
	}
	cout << "The simulation is over."
		getch();
	libusb_close(dev_handle); //Closing the libusb library.
	libusb_exit(ctx)
	delete[] data; //Stopping the program properly.
	return 0;
}
