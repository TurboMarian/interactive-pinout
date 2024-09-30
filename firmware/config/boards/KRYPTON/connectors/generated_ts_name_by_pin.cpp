//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on config/boards/KRYPTON/connectors/main.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::B10: return "Low side output 4";
		case Gpio::B11: return "Low side output 3";
		case Gpio::B12: return "Low side output 2";
		case Gpio::B9: return "Digital Input 1";
		case Gpio::C12: return "Injector 2";
		case Gpio::C3: return "WBO_HEATER";
		case Gpio::C6: return "Injector 5";
		case Gpio::C7: return "Injector 4";
		case Gpio::C8: return "Injector 3";
		case Gpio::D10: return "Fan output";
		case Gpio::D11: return "Boost controler";
		case Gpio::D12: return "Fuel pump output";
		case Gpio::D13: return "Injector 8";
		case Gpio::D14: return "Injector 7";
		case Gpio::D15: return "Injector 6";
		case Gpio::D2: return "Injector 1";
		case Gpio::D8: return "Low side output 1";
		case Gpio::D9: return "Tacho output";
		case Gpio::E0: return "Digital Input 2";
		case Gpio::E10: return "Ignition 6";
		case Gpio::E11: return "Ignition 5";
		case Gpio::E12: return "Ignition 4";
		case Gpio::E13: return "Ignition 3";
		case Gpio::E14: return "Ignition 2";
		case Gpio::E15: return "Ignition 1";
		case Gpio::E2: return "Digital Input 3";
		case Gpio::E3: return "Digital Input 4";
		case Gpio::E4: return "Spare trigger input";
		case Gpio::E5: return "Crankshaft Sensor";
		case Gpio::E6: return "Camshaft Sensor";
		case Gpio::E8: return "Ignition 8";
		case Gpio::E9: return "Ignition 7";
		default: return nullptr;
	}
	return nullptr;
}
