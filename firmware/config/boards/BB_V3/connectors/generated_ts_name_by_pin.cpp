//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on config/boards/BB_V3/connectors/main.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::A10: return "Camshaft Sensor";
		case Gpio::A15: return "Injector 6";
		case Gpio::A7: return "Injector 7";
		case Gpio::A8: return "VSS";
		case Gpio::A9: return "Crankshaft Sensor";
		case Gpio::B14: return "DBW_PWM";
		case Gpio::B3: return "Ignition 4";
		case Gpio::B5: return "Ignition 5";
		case Gpio::B6: return "Ignition 2";
		case Gpio::B7: return "Ignition 3";
		case Gpio::B8: return "Injector 8";
		case Gpio::B9: return "Ignition 1";
		case Gpio::C13: return "Injector 4";
		case Gpio::D0: return "DBW_DIR";
		case Gpio::D1: return "Ignition 6";
		case Gpio::D10: return "Digital input 2";
		case Gpio::D3: return "DBW_DIS";
		case Gpio::D4: return "Ignition 7";
		case Gpio::D7: return "Ignition 8";
		case Gpio::D8: return "Digital input 1";
		case Gpio::E0: return "Injector 3";
		case Gpio::E1: return "Injector 5";
		case Gpio::E10: return "Low side output 2";
		case Gpio::E11: return "Low side output 1";
		case Gpio::E12: return "Tacho output";
		case Gpio::E13: return "Low side output 3";
		case Gpio::E14: return "Fan output";
		case Gpio::E15: return "Fuel pump output";
		case Gpio::E5: return "Injector 1";
		case Gpio::E6: return "Injector 2";
		case Gpio::E8: return "Boost controler";
		case Gpio::E9: return "Idle valve 1";
		default: return nullptr;
	}
	return nullptr;
}
