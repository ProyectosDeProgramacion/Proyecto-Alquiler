# Proyecto-Alquiler: This project consists of a car program rental design.
We have several sections and classes that play a unique role for each part that makes up the project. 
The main classes are: 
- Administrator ("Administrator.cpp") - Manages the purchases of users who wish to rent a car regarding garage, which accesses the vehicles owned by the dealership. 

- Car ("Car.cpp") - Mentions all the details of all the cars of the dealership, thus showing, brand, series, year of manufacture, price, reliability and state of readiness, which will show whether it is available for rent or not.

- Purchase ("Purchase.cpp") - Identifies and accesses the customer's data once they make the purchase of the rental. They have a start date and an end date for how long they wish to have the vehicle.

- Customer ("Customer.cpp") - Accesses the data of each customer, once registered, it is saved in the program's database. Thus, it also has the option to display the list of cars that the customer rents through a "cart" vector. 

- CarRental ("CarRental.cpp") - It is the main class of the program which all classes depend on this one, and this one is connected to all of them. Once the user compiles, the programe will automatically generate a 'Costumers.txt' file which means it runs successfully and the program can be used properly. 

- Exceptions ("Exceptions.hpp") - Generates exceptions if any unexpected action occurs during the program.

- Dealership ("Dealership.cpp") - Shows the customers all the vehicles available at the dealership.

In this repository we include all the main code separated by each branch which belongs to each module, & then, afterwards we merge in the Main Branch.
- Prediction ("Prediction.cpp") - Module 1.
- Report ("Report.cpp") - Module 2.

All cpp files mentioned before are on the: 
- Main Branch: 'main'

Furthermore, we have the following branches that correspond to the two modules of the project that have been mentioned throughout the 'Daily Scrums’: More info by going throught the README.md of each branch.
- Module 1. Cars Filter Prediction (Predicción de Filtro Coches): 'filtro-coches'
- Module 2. Cars List Receipt (Recibo de Listado Coches): 'listado-coches'

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

Small improvements or fixes are always appreciated. Thanks to GitHub we:
- Review pull requests
- Help us stay on top of new and old issues

Our preferred channels of communication are all public, but if you’d like to give any feedback to us in private first, contact our community coordinators at proyectosprogra3@gmail.com

You are welcome to participate and discuss any ideas about our project!
