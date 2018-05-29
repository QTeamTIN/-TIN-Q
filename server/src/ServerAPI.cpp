#include "ServerAPI.hpp"


ServerAPI::ServerAPI() {
	//todo - na zewn�trz?
	service = std::make_unique<Service>();
}

bool ServerAPI::callFunction(int id, std::vector<int> int_args, std::vector<std::string> string_args) {
	try {
		switch (id) {
		case 0:
			service->lines_manager_.addLine(string_args.at(0), string_args.at(1), string_args.at(2), int_args.at(0), int_args.at(1));
			break;
		case 1:
			service->lines_manager_.deleteLine(int_args.at(0));
			break;
		case 2:
			service->lines_manager_.addUser(int_args.at(0), int_args.at(1));
			break;
		case 3:
			service->lines_manager_.deleteUser(int_args.at(0), int_args.at(1));
			break;
		case 4:
			service->lines_manager_.letUserThrough(int_args.at(0), int_args.at(1));
			break;
		case 5:
			service->lines_manager_.acceptLettingThrough(int_args.at(0), int_args.at(1));
			break;
		case 6:
			service->lines_manager_.next(int_args.at(0));
			break;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return false;
	}	
	return true;
}