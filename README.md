# Proyecto-Alquiler: This project consists of a car rental design and program, which will be discussed in more detail below.
We have several sections and classes that play a unique role for each part that makes up the project. The main classes are: 
- Administrator ("Administrador.cpp") - Manages the purchases of users who wish to rent a car regarding garage, which accesses the vehicles owned by the dealership. 

- Car ("Coche.cpp") - Mentions all the details of all the cars of the dealership, thus showing, brand, series, year of manufacture, price, reliability and state of readiness, which will show whether it is available for rent or not.

- Purchase ("Compra.cpp") - Identifies and accesses the customer's data once they make the purchase of the rental. They have a start date and an end date for how long they wish to have the vehicle.

- Customer ("Cliente.cpp") - Accesses the data of each customer, once registered, it is saved in the program's database. Thus, it also has the option to display the list of cars that the customer rents through a "cart" vector. 

- CarRental ("AlquilerCoches.cpp") - It is the main class of the program which all classes depend on this one, and this one is connected to all of them.

- Exceptions ("Exceptions.hpp") - Generates exceptions if any unexpected action occurs during the program.

- Dealership ("Concesionario.cpp") - Shows the customers all the vehicles available at the dealership.

In this repository we include all the main code with the whole branches which belongs to each module.

- Main Branch: 'main'
- Module 1. Filtro Coches: 'filtro-coches'
- Module 2. Listado Coches: 'listado-coches'

It provides:

- Complexity of vectors joined between classes
- Sophisticated use of pointer mechanics in relation to function call addresses
- Separation of hpp and cpp files
- Reading and writing csv files
- Common use of exception, vectors & array functions
- Tools for integrating C++ code
- Useful functions of modular and efficient software integration


Code of Conduct: 
- 'Proyecto-Alquiler' is a project of 2nd Degree in Computer Engineering developed in C++ code driven by the subject 'Proyectos de Programación' at CUNEF University and developed by a group of collaborators with the main goal of learning and the necessary knowledge driven by this subject. These collaborators are: Yago Lopez and Ignacio Bravo.

