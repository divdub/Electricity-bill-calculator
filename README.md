# Electricity Bill Calculator for Shared Rooms

This C++ program calculates the electricity bill for shared rental rooms based on unit consumption and distributes additional costs (like common area usage) among all tenants.

## Key Concepts Used

1. **Object-Oriented Programming (OOP)**
   - Uses classes and objects to represent individual rooms
   - Encapsulates room data and operations within the `Room` class

2. **Static Class Members**
   - `othercost` and `tempcost` are static variables shared among all instances
   - `others()` is a static member function to calculate shared costs

3. **Modular Design**
   - Separate functions for different calculations (unit reading, cost calculation, etc.)
   - Clear separation of concerns within class methods

4. **Basic Input/Output**
   - Uses `cin` and `cout` for user interaction
   - Displays formatted output for better readability

## How the Program Works

1. Takes total bill amount and total units consumed as input
2. Calculates cost per unit
3. For each room:
   - Takes previous and current meter readings
   - Calculates units consumed
   - Computes base electricity cost
4. Calculates shared/common area costs by:
   - Subtracting all rooms' base costs from total bill
   - Dividing the remainder equally among all rooms
5. Displays final cost for each room including their share of common costs

## How to Run the Program

1. **Compilation**:
   ```bash
   g++ project1.cpp -o electricity_bill

2. **Execution**:
   ```bash
   g++ project1.cpp -o electricity_bill

3. **Input Requirements**:
    - Total electricity bill amount
    - Total units consumed (from main meter)
    - Number of rented rooms
    - Old and new meter readings for each room
  
## ***Example Usage***
```bash
Enter Total bill cost and total Unit :
5000 200
Enter total no. of rent rooms : 
3
Per unit :25
Enter old Unit for room 1= 0
Enter newl Unit for room 1= 20
Enter old Unit for room 2= 0
Enter newl Unit for room 2= 30
Enter old Unit for room 3= 0
Enter newl Unit for room 3= 50
Others: 2250
Final cost for room 1=2750
Final cost for room 2=3000
Final cost for room 3=3500
