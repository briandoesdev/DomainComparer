#pragma once
#include <string>

class Url {
private:
	void ParseUrl(std::string url);

public:
	// these props will need to be changed to using getters/setters
	std::string Scheme;
	std::string Credentials;
	std::string Subdomain;
	std::string Host;
	std::string Tld;
	std::string Path;
	std::string Query;
	std::string Fragment;
	int Port;

	Url(std::string url);
	std::string toString() const;
};

