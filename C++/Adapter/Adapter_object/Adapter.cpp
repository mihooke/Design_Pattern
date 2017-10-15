#include "Adapter.h"
#include <iostream>
using namespace std;

Target::Target() {}
Target::~Target() {}
void Target::public_api() { cout << "Target::public_api()" << endl; }

ThirdParty::ThirdParty() {}
ThirdParty::~ThirdParty() {}
void ThirdParty::spec_public_api() { cout << "ThirdParty::spec_public_api()" << endl; }

Adapter::Adapter() { }
Adapter::~Adapter() {}
void Adapter::public_api()
{
	spec_public_api();
	cout << "Adapter::public_api()" << endl; 
}