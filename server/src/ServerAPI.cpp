#include "ServerAPI.hpp"


ServerAPI::ServerAPI() {
	//todo - na zewn¹trz
	service = std::make_unique<Service>();
}

void ServerAPI::callFunction(int id, std::vector<int> int_args, std::vector<std::string> string_args) {
	switch(id){
	case 0:
		addLine(int_args, string_args);

	}
	/*try {
		auto iter = functions_map_.find(id);
		if (iter == functions_map_.end())
		{
			throw std::runtime_error("Function does not exist");
		}
		(iter->second)(int_args, string_args);
	}
	catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}*/
}

void ServerAPI::addLine(std::vector<int> int_args, std::vector<std::string> string_args) {
	service->lines_manager_.addLine(string_args.at(0), string_args.at(1), string_args.at(2), int_args.at(0), int_args.at(1));

}