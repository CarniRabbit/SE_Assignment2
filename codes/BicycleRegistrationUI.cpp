#include "BicycleRegistrationUI.h"
#include "BicycleRegistration.h"

void BicycleRegistrationUI::loadRegistrationForm(string& bicycleID, string& productName)
{
	BicycleRegistration bicycleRegistrationControl;

	bicycleRegistrationControl.registerBicycle(bicycleID, productName);
}
