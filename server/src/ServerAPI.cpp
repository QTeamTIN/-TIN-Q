#include "ServerAPI.hpp"


ServerAPI::ServerAPI(SessionTable& session_tbl) {
	//todo - na zewn¹trz?
	service = std::make_unique<Service>(session_tbl);
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
		default:
			throw std::runtime_error("No such operation: " + std::to_string(id));
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return false;
	}	
	return true;
}

ServerAPI::QueryResponse ServerAPI::callQuery(int id, std::vector<int> int_args, std::vector<std::string> string_args)
{
	try {
		switch (id) {
		case 0:
			return service->lines_manager_.getLine(int_args.at(0));
		default:
			throw std::runtime_error("No such operation: " + std::to_string(id));
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return QueryResponse();
	}

}

int ServerAPI::callLogin(std::string userName, std::string hash) {
    std::cout << "Wchodzi w logowanie" << std::endl;
    int num = service->session_table_->login(userName, hash);
    std::cout << num << std::endl;
}
