#include "pch.h"
#include "Url.h"
#include <stdexcept>

Url::Url(std::string url) {
	
	// shortest possible domains are 4 chars long
	// throw an exception on anything shorter
	if (url.length() < 4) {
		throw std::invalid_argument("Argument character count doesnt meet minimum required");
	}

	ParseUrl(url);
}

std::string Url::toString() const {
	return std::string();
}

void Url::ParseUrl(std::string url) {

}