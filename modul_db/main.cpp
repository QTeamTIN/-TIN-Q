#include <stdio.h>
#include "Connection.h"
#include "User.h"
#include "Queue.h"
#include "PostgresQ_DAO.h"

//HOW TO:
//sudo apt-get install libpqxx-4.0v5
//sudo apt-get install libpqxx-dev
//sudo apt-get install libpqxx-doc
//odpalanie z dodaniem flag -lpqxx -lpq
//z konsoli cos nie moglem, z IDE CodeLite jakos poszlo
//
//Ogolnie chodzi o to, ze sa klasy UserDAO i QueueDAO - interfejsy
//PostgresQueueDAO i PostgresUserDAO to klasa dziedziczaca
//ogolnie chodzi o to, zeby uzywac UserDAO, ktory tylko 
//wskazuje na obiekt PostgresUserDAO, jesli zmiana bazy to tylko dopisze sie nowa klase
//
//2 podstawowe operacje - save i load. W save brakuje sprawdzenia czy istnieje
//troche nie wiem co robic czy insert z nowym ID czy update poprzedniego
//
//wywala warningi, do zrobiania ale nie dzis
int main(int argc, char **argv)
{
    PostgresQ_DAO pqDao;
    int test = 6;
    try{
        User user;
        user = pqDao.loadUser(test);
        user.print();
        user.setMail("gitasdsadaaaaaaa");
        pqDao.updateUser(user);
        pqDao.loadUser(test).print();
    }
    catch (std::invalid_argument){
        std::cout<<"Nie udalo sie" << std::endl;
    }
//        User user;
//        user = user.setUserId(test)
//                    .setName("Kokos")
//                    .setDisplayName("Konrad Kucharczyk")
//                    .setPassword("hashhash")
//                    .setMail("siema@gmail.com");
//        pqDao.saveUser(user);
//        pqDao.loadUser(test).print();
//    }
//    catch (std::invalid_argument){
//        
//    }

    
//    Queue q2;
//    q2.setQueueId(1);
//    q2.setUserId(1);
//    q2.setName("tsts");
//    q2.setPlace("eiti");
//    q2.setDescription("asdsadad");
//    q2.setStartTime("16:23:32");
//    q2.setEndTime("20:20:20");
//    q2.setDayOfWeek(3);
//    pqDao.saveQueue(q2);
//    pqDao.loadQueue(1,1).print();

	return 0;
}
