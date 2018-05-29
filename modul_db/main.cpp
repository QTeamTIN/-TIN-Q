#include <stdio.h>
#include "Connection.h"
#include "UserDAO.h"
#include "User.h"
#include "Queue.h"
#include "QueueDAO.h"
#include "PostgresUserDAO.h"
#include "PostgresQueueDAO.h"

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
    User user;
    user = user.setUserId(3)
                .setName("Test")
                .setDisplayName("TestFromCpp")
                .setPassword("hshshs")
                .setMail("siema@gmail.com");
    pud.saveUser(user);

    PostgresQueueDAO pqdao;
   
    Queue q = pqdao.loadQueue(2,1);
    std::cout << q.getName() << std::endl;
    
    Queue q2;
    q2.setQueueId(3);
    q2.setUserId(2);
    q2.setName("tsts");
    q2.setDescription("asdsadad");
    q2.setStartTime("16:23:32");
    q2.setEndTime("20:20:20");
    q2.setDayOfWeek(3);
    
    pqdao.saveQueue(q2);
	return 0;
}
