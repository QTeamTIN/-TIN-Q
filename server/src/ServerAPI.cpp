#include "ServerAPI.hpp"


ServerAPI::ServerAPI(Service& service)
    :service(service)
{}

bool ServerAPI::callFunction(int id, std::vector<int> int_args, std::vector<std::string> string_args) {
	try {
		switch (id) {
		case 0:
            service.getLinesManager().addLine(string_args.at(0), string_args.at(1), string_args.at(2), int_args.at(0), int_args.at(1));
			break;
		case 1:
            service.getLinesManager().deleteLine(int_args.at(0));
			break;
		case 2:
            service.getLinesManager().addUser(int_args.at(0), int_args.at(1));
			break;
		case 3:
            service.getLinesManager().deleteUser(int_args.at(0), int_args.at(1));
			break;
		case 4:
            service.getLinesManager().letUserThrough(int_args.at(0), int_args.at(1));
			break;
		case 5:
            service.getLinesManager().acceptLettingThrough(int_args.at(0), int_args.at(1));
			break;
		case 6:
            service.getLinesManager().next(int_args.at(0));
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
            return service.getLinesManager().getLine(int_args.at(0));
        case 1:
            return service.getDBHandler().loadUser(string_args.at(0)).getUser().getUserParams();
        case 2:
            return service.getDBHandler().loadUser(int_args.at(0)).getUser().getUserParams();
        case 3:
            return service.getDBHandler().loadQueue(int_args.at(0), int_args.at(1)).getQueue().getQueueParams();
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
    int num = service.getSessionTable().login(userName, hash);
}

void ServerAPI::refreshSession(int session_id)
{
    service.getSessionTable().refreshSession(session_id);
}
