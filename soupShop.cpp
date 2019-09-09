#include <iostream>
using namespace std;

// I'll use this struct to preform actions on items in the cart.
struct Item{
  float price;
  int quantity;
  float totalPrice;
};
//This will be used primarily to tell users what the items are.
struct Product{
  string Name;
  string ID;
  string Description;
  float price;
  int stock;
};


//Chicken Soup
Product canOfSoup = {"Chicken Soup", "BockBock","Its Chicken Soup....What more do you want from me?", 3.25, 5};

//Chicken Soup in the Cart
Item itemCanOfSoup = {canOfSoup.price,0,(itemCanOfSoup.price * itemCanOfSoup.quantity)};

//Tomato Soup
Product secondCanOfSoup = {"Tomato Soup","TomatoIsAFruit","Tomato Soup slaps...That's why it cost 20 dollars",20.00,5};

//Tomato Soup in the Cart
Item itemSecondCanOfSoup = {secondCanOfSoup.price,0,(itemSecondCanOfSoup.price * itemSecondCanOfSoup.quantity)};

//Vegetable Soup
Product thirdCanOfSoup = {"Vegetable Soup","VeggiesSuck","I don't know why you're buying this. It's veggies in water.",1.00,5};

//Vegetable Soup In Cart
Item itemThirdCanOfSoup = {thirdCanOfSoup.price,0, (itemThirdCanOfSoup.price * itemThirdCanOfSoup.quantity)};

//25 Bean Soup
Product fourthCanOfSoup = {"25 Bean Soup","MmmmmBeans","So you like beans? Well you're gonna love 25 of them. Get ready for the best beans of your life....IN SOUP FORM",10.00, 5};

//25 Bean Soup in Cart
Item itemFourthCanOfSoup = {fourthCanOfSoup.price, 0, (itemFourthCanOfSoup.price * itemFourthCanOfSoup.quantity)};

//Meat Lovers Soup
Product fifthCanOfSoup = {"Meat Lovers Soup","MEAT","Chicken? We got it. Pork? We got it. Beef? we got it. Fish? We got that too! Get ready to eat all of our meat. Trust me, It's a treat!", 1000.00, 5};

//Meat Lovers Soup in Cart
Item itemFifthCanOfSoup = {fifthCanOfSoup.price,0,(itemFifthCanOfSoup.price * itemFifthCanOfSoup.quantity)};

 

void addToCart(){

  char customerInput;
  
  cout << "What type of soup are you interested in?"<< endl;
  cout << endl;
  cout <<"Name: " << canOfSoup.Name << endl;
  cout <<"Description: " << canOfSoup.Description << endl;
  cout <<"Price: " << canOfSoup.price << endl;

  cout << endl;

  cout <<"Name: " << secondCanOfSoup.Name << endl;
  cout <<"Description: " << secondCanOfSoup.Description << endl;
  cout <<"Price: " << secondCanOfSoup.price << endl;
 
  cout << endl;

  cout <<"Name: " << thirdCanOfSoup.Name << endl;
  cout <<"Description: " << thirdCanOfSoup.Description << endl;
  cout <<"Price: " << thirdCanOfSoup.price << endl;

  cout << endl;

  cout <<"Name: " << fourthCanOfSoup.Name << endl;
  cout <<"Description: " << fourthCanOfSoup.Description << endl;
  cout <<"Price: " << fourthCanOfSoup.price << endl;

  cout << endl;

  cout <<"Name: " << fifthCanOfSoup.Name << endl;
  cout <<"Description: " << fifthCanOfSoup.Description << endl;
  cout <<"Price: " << fifthCanOfSoup.price << endl;

  cout << endl;

  //This chunk of code is going to allow the user to select the type of soup they want to add to their cart, and regulate the amount they can have in it.

  cout << "Enter [1] for " << canOfSoup.Name << endl;
  cout << "Enter [2] for "<< secondCanOfSoup.Name <<endl;
  cout << "Enter [3] for "<< thirdCanOfSoup.Name << endl; 
  cout << "Enter [4] for "<< fourthCanOfSoup.Name <<endl;
  cout << "Enter [5] for "<< fifthCanOfSoup.Name << endl;
  cout << "Enter [H] to go back to the home menu." << endl;

  cin >> customerInput;

    if (customerInput == '1'){
      int amountOfSoup;
      cout << "How many cans of "<< canOfSoup.Name<< " would you like?" << endl;
      cin >> amountOfSoup;
      while (amountOfSoup > 3 || amountOfSoup < 1){
        cout << "Please pick  1, 2, or 3." << endl;
        cin >> amountOfSoup;
      }
      while (itemCanOfSoup.quantity + amountOfSoup > 3){
        cout << "You already have " << itemCanOfSoup.quantity << " cans of "<< canOfSoup.Name << endl;
        cout << "You can only have 3. Don't be greedy." << endl;
        cout << "Please pick less can."<< endl;
        cout << "If you have 3 pick 0, otherwise please pick 1, 2, or 3." << endl;
        cin >> amountOfSoup;
      }
      itemCanOfSoup.quantity = (itemCanOfSoup.quantity + amountOfSoup);
      canOfSoup.stock = canOfSoup.stock - amountOfSoup;
      cout << "You have " << itemCanOfSoup.quantity << " cans of "<< canOfSoup.Name << "in your cart." << endl;
      cout << endl; 
      itemCanOfSoup.totalPrice = (itemCanOfSoup.price * itemCanOfSoup.quantity);


    }

    if (customerInput == '2'){
      int amountOfSoup;
      cout << "How many cans of "<< secondCanOfSoup.Name << " would you like?" << endl;
      cin >> amountOfSoup;
      while (amountOfSoup > 3 || amountOfSoup < 1){
        cout << "Please pick 1, 2, or 3." << endl;
        cin >> amountOfSoup;
      }
      while (itemSecondCanOfSoup.quantity + amountOfSoup > 3){
        cout << "You already have " << itemSecondCanOfSoup.quantity << " cans of "<< secondCanOfSoup.Name<< "." << endl;
        cout << "You can only have 3. Don't be greedy." << endl;
        cout << "Please pick less." << endl;
        cout << "If you have 3 pick 0, otherwise please pick 1, 2, or 3." << endl;
        cin >> amountOfSoup;
      }
      itemSecondCanOfSoup.quantity = (itemSecondCanOfSoup.quantity + amountOfSoup);
      secondCanOfSoup.stock = secondCanOfSoup.stock - amountOfSoup;
      cout << "You have " << itemSecondCanOfSoup.quantity << " cans of "<< secondCanOfSoup.Name<< " in your cart." << endl;
      cout << endl; 
      itemSecondCanOfSoup.totalPrice=(itemSecondCanOfSoup.price * itemSecondCanOfSoup.quantity);

    }

    if (customerInput == '3'){
      int amountOfSoup;
      cout << "How many cans of "<< thirdCanOfSoup.Name << " would you like?" << endl;
      cin >> amountOfSoup;
      while (amountOfSoup > 3 || amountOfSoup < 1){
        cout << "Please pick 1, 2, or 3." << endl;
        cin >> amountOfSoup;
      }
      while (itemThirdCanOfSoup.quantity + amountOfSoup > 3){
        cout << "You already have " << itemThirdCanOfSoup.quantity << " cans of "<< thirdCanOfSoup.Name <<"." << endl;
        cout << "You can only have 3. Don't be greedy." << endl;
        cout << "Please pick less." << endl;
        cout << "If you have 3 pick 0, otherwise please pick 1, 2, or 3." << endl;
        cin >> amountOfSoup;
      }
      itemThirdCanOfSoup.quantity = (itemThirdCanOfSoup.quantity + amountOfSoup);
      thirdCanOfSoup.stock = thirdCanOfSoup.stock - amountOfSoup;
      cout << "You have " << itemThirdCanOfSoup.quantity << " cans of " << thirdCanOfSoup.Name << "in your cart." << endl;
      cout << endl; 
      itemThirdCanOfSoup.totalPrice=(itemThirdCanOfSoup.price * itemThirdCanOfSoup.quantity);

    }

    if (customerInput == '4'){
      int amountOfSoup;
      cout << "How many cans of "<< fourthCanOfSoup.Name <<" would you like?" << endl;
      cin >> amountOfSoup;
      while (amountOfSoup > 3 || amountOfSoup < 1){
        cout << "Please pick 1, 2, or 3." << endl;
        cin >> amountOfSoup;
      }
      while (itemFourthCanOfSoup.quantity + amountOfSoup > 3){
        cout << "You already have " << itemFourthCanOfSoup.quantity << " cans of "<< fourthCanOfSoup.Name << "." << endl;
        cout << "You can only have 3. Don't be greedy." << endl;
        cout << "Please pick less." << endl;
        cout << "If you have 3 pick 0, otherwise please pick 1, 2, or 3." << endl;
        cin >> amountOfSoup;
      }
      itemFourthCanOfSoup.quantity = (itemFourthCanOfSoup.quantity + amountOfSoup);
      fourthCanOfSoup.stock = canOfSoup.stock - amountOfSoup;
      cout << "You have " << itemFourthCanOfSoup.quantity << " cans of "<< fourthCanOfSoup.Name <<" in your cart." << endl;
      cout << endl;
      itemFourthCanOfSoup.totalPrice=(itemFourthCanOfSoup.price * itemFourthCanOfSoup.quantity);

    }

    if (customerInput == '5'){
      int amountOfSoup;
      cout << "How many cans of "<< fifthCanOfSoup.Name << " would you like?" << endl;
      cin >> amountOfSoup;
      while (amountOfSoup > 3 || amountOfSoup < 1){
        cout << "Please pick 1, 2, or 3." << endl;
        cin >> amountOfSoup;
      }
      while (itemFifthCanOfSoup.quantity + amountOfSoup > 3){
        cout << "You already have " << itemFifthCanOfSoup.quantity << " cans of "<< fifthCanOfSoup.Name << "."<< endl;
        cout << "You can only have 3. Don't be greedy." << endl;
        cout << "Please pick less." << endl;
        cout << "If you have 3 pick 0, otherwise please pick 1, 2, or 3." << endl;
        cin >> amountOfSoup;
      }
      itemFifthCanOfSoup.quantity = (itemFifthCanOfSoup.quantity + amountOfSoup);
      fifthCanOfSoup.stock = canOfSoup.stock - amountOfSoup;
      cout << "You have " << itemFifthCanOfSoup.quantity << " cans of "<< fifthCanOfSoup.Name << " in your cart." << endl;
      cout << endl;
      itemFifthCanOfSoup.totalPrice=(itemFifthCanOfSoup.price * itemFifthCanOfSoup.quantity); 

    }

  return;  

  };

void removeFromCart(){
  char customerInput;
  int cansToRemove;
  cout << "What item would you like to edit?" << endl;
  cout << endl;

  cout << "Enter [1] for " << canOfSoup.Name <<"." <<endl;
  cout << "Enter [2] for "<< secondCanOfSoup.Name << "." <<endl;
  cout << "Enter [3] for "<< thirdCanOfSoup.Name << "."  << endl; 
  cout << "Enter [4] for "<< fourthCanOfSoup.Name << "." <<endl;
  cout << "Enter [5] for "<< fifthCanOfSoup.Name << "." << endl;
  cout << "Enter [H] to go back to the home menu." << endl;
  cin >> customerInput;
  cout << endl;

  if (customerInput == '1'){
    cout << "You have " << itemCanOfSoup.quantity << " cans of Chicken Soup in your cart." << endl;
    cout << "How many cans would you like to remove from your cart: 1, 2, or 3" << endl;
    cin >> cansToRemove;
    if (itemCanOfSoup.quantity - cansToRemove < 0){
      itemCanOfSoup.quantity = 0;
      canOfSoup.stock = canOfSoup.stock + cansToRemove;
    }
    else{
      itemCanOfSoup.quantity = itemCanOfSoup.quantity - cansToRemove;
      canOfSoup.stock = canOfSoup.stock + cansToRemove;
    }
    itemCanOfSoup.totalPrice=(itemCanOfSoup.price * itemCanOfSoup.quantity);
    
  }

  if (customerInput == '2'){
    cout << "You have " << itemSecondCanOfSoup.quantity << " cans of Tomato Soup in your cart." << endl;
    cout << "How many cans would you like to remove from your cart: 1, 2, or 3" << endl;
    cin >> cansToRemove;
    if (itemSecondCanOfSoup.quantity - cansToRemove < 0){
      itemSecondCanOfSoup.quantity = 0;
      secondCanOfSoup.stock = secondCanOfSoup.stock + cansToRemove;
    }
    else{
      itemSecondCanOfSoup.quantity = itemSecondCanOfSoup.quantity - cansToRemove;
      secondCanOfSoup.stock = secondCanOfSoup.stock + cansToRemove;
    }
    itemSecondCanOfSoup.totalPrice=(itemSecondCanOfSoup.price * itemSecondCanOfSoup.quantity);
    
  }

  if (customerInput == '3'){
    cout << "You have " << itemThirdCanOfSoup.quantity << " cans of Vegetable Soup in your cart." << endl;
    cout << "How many cans would you like to remove from your cart: 1, 2, or 3" << endl;
    cin >> cansToRemove;
    if (itemThirdCanOfSoup.quantity - cansToRemove < 0){
      itemThirdCanOfSoup.quantity = 0;
      thirdCanOfSoup.stock = thirdCanOfSoup.stock + cansToRemove;
    }
    else{
      itemThirdCanOfSoup.quantity = itemThirdCanOfSoup.quantity - cansToRemove;
      thirdCanOfSoup.stock = thirdCanOfSoup.stock + cansToRemove;
    }
    itemThirdCanOfSoup.totalPrice=(itemThirdCanOfSoup.price * itemThirdCanOfSoup.quantity);
    
  }

  if (customerInput == '4'){
    cout << "You have " << itemFourthCanOfSoup.quantity << " cans of 25 Bean Soup in your cart." << endl;
    cout << "How many cans would you like to remove from your cart: 1, 2, or 3" << endl;
    cin >> cansToRemove;
    if (itemFourthCanOfSoup.quantity - cansToRemove < 0){
      itemFourthCanOfSoup.quantity = 0;
      fourthCanOfSoup.stock = fourthCanOfSoup.stock + cansToRemove;
    }
    else{
      itemFourthCanOfSoup.quantity = itemFourthCanOfSoup.quantity - cansToRemove;
      fourthCanOfSoup.stock = fourthCanOfSoup.stock + cansToRemove;
    }
    itemFourthCanOfSoup.totalPrice=(itemFourthCanOfSoup.price * itemFourthCanOfSoup.quantity);
    
  }

    if (customerInput == '5'){
    cout << "You have " << itemFifthCanOfSoup.quantity << " cans of Meat Lovers Soup in your cart." << endl;
    cout << "How many cans would you like to remove from your cart: 1, 2, or 3" << endl;
    cin >> cansToRemove;
    if (itemFifthCanOfSoup.quantity - cansToRemove < 0){
      itemFifthCanOfSoup.quantity = 0;
      fifthCanOfSoup.stock = fifthCanOfSoup.stock + cansToRemove;
    }
    else{
      itemFifthCanOfSoup.quantity = itemFifthCanOfSoup.quantity - cansToRemove;
      fifthCanOfSoup.stock = fifthCanOfSoup.stock + cansToRemove;
    }
    itemFifthCanOfSoup.totalPrice=(itemFifthCanOfSoup.price * itemFifthCanOfSoup.quantity);
    
  }
  return;

};
void printSubtotal(){
  

  cout << canOfSoup.Name <<":$ " << itemCanOfSoup.totalPrice << endl;
  cout << secondCanOfSoup.Name<< ":$ "<< itemSecondCanOfSoup.totalPrice << endl;
  cout << thirdCanOfSoup.Name<<":$ " << itemThirdCanOfSoup.totalPrice << endl;
  cout << fourthCanOfSoup.Name<< ":$ " << itemFourthCanOfSoup.totalPrice << endl;
  cout << fifthCanOfSoup.Name << ":$ " << itemFifthCanOfSoup.totalPrice << endl;
  cout << endl;
  cout <<"Sub Total:$ " << (itemCanOfSoup.totalPrice + itemSecondCanOfSoup.totalPrice + itemThirdCanOfSoup.totalPrice + itemFourthCanOfSoup.totalPrice + itemFifthCanOfSoup.totalPrice) << endl;

  return;


};
//Manager Function
void getProductDetails(){

  cout << "Name: " << canOfSoup.Name << endl;
  cout << "ID: " << canOfSoup.ID << endl;
  cout << "Description: " << canOfSoup.Description << endl;
  cout << "Price: " << canOfSoup.price << endl;
  cout << endl;

  cout << "Name: " << secondCanOfSoup.Name << endl;
  cout << "ID: " << secondCanOfSoup.ID << endl;
  cout << "Description: " << secondCanOfSoup.Description << endl;
  cout << "Price: " << secondCanOfSoup.price << endl;
  cout << endl;

  cout << "Name: " << thirdCanOfSoup.Name << endl;
  cout << "ID: " << thirdCanOfSoup.ID << endl;
  cout << "Description: " << thirdCanOfSoup.Description << endl;
  cout << "Price: " << thirdCanOfSoup.price << endl;
  cout << endl;

  cout << "Name: " << fourthCanOfSoup.Name << endl;
  cout << "ID: " << fourthCanOfSoup.ID << endl;
  cout << "Description: " << fourthCanOfSoup.Description << endl;
  cout << "Price: " << fourthCanOfSoup.price << endl;
  cout << endl;

  cout << "Name: " << fifthCanOfSoup.Name << endl;
  cout << "ID: " << fifthCanOfSoup.ID << endl;
  cout << "Description: " << fifthCanOfSoup.Description << endl;
  cout << "Price: " << fifthCanOfSoup.price << endl;
  cout << endl;

  return;

};

void getPrice(){
  char customerInput;
  cout << "For what item would you like a price?" << endl;
  cout << endl;

  cout << "Enter [1] for " << canOfSoup.Name << "." <<endl;
  cout << "Enter [2] for " << secondCanOfSoup.Name << "." <<endl;
  cout << "Enter [3] for " << thirdCanOfSoup.Name << "." <<endl; 
  cout << "Enter [4] for " << fourthCanOfSoup.Name << "." <<endl;
  cout << "Enter [5] for " << fifthCanOfSoup.Name << "." << endl;
  cout << "Enter [H] to go back to the home menu." << endl;
  cin >> customerInput;
  cout << endl;

  switch(customerInput){
    case '1':
    cout << canOfSoup.Name << " cost $" << canOfSoup.price << "." << endl;
    break;
    case '2':
    cout << secondCanOfSoup.Name << " cost $" << secondCanOfSoup.price << "." << endl;
    break;
    case '3':
    cout << thirdCanOfSoup.Name << "cost $" << thirdCanOfSoup.price << "." << endl;
    break;
    case '4':
    cout << fourthCanOfSoup.Name<< " cost $" << fourthCanOfSoup.price << "." << endl;
    break;
    case '5':
    cout << fifthCanOfSoup.Name << " cost $ " << fifthCanOfSoup.price << "." << endl;
    break;
  }


};
//Manager Function
void checkStock(){
  char customerInput;
  cout << "What item would you like to check?" << endl;
  cout << endl;

  cout << "Enter [1] for " << canOfSoup.Name<< "." <<endl;
  cout << "Enter [2] for "<< secondCanOfSoup.Name<< "." <<endl;
  cout << "Enter [3] for " << thirdCanOfSoup.Name << "." << endl; 
  cout << "Enter [4] for "<< fourthCanOfSoup.Name << "." <<endl;
  cout << "Enter [5] for " << fifthCanOfSoup.Name << "." << endl;
  cout << "Enter [H] to go back to the home menu." << endl;
  cin >> customerInput;
  cout << endl;

  switch(customerInput){
    case '1':
    cout << "There are " << canOfSoup.stock << " cans of Chicken Soup in stock." << endl;
    break;
    case '2':
    cout << "There are " << secondCanOfSoup.stock << " cans of Tomato Soup in stock." << endl;
    break;
    case '3':
    cout << "There are " << thirdCanOfSoup.stock << " cans of Vegetable Soup in stock." << endl;
    break;
    case '4':
    cout << "There are " << fourthCanOfSoup.stock << " cans of 25 Bean Soup in stock." << endl;
    break;
    case '5':
    cout << "There are " << fifthCanOfSoup.stock << " cans of Meat Lovers Soup in stock." << endl;
    break;
  }

};
void editProducts(){
  char customerInput;
  string newname;
  string newID;
  string newDescription;
  float newPrice;

  cout << "What product would you like to edit?" << endl;
  cout << endl;

  cout << "Enter [1] for " << canOfSoup.Name << endl;
  cout << "Enter [2] for "<< secondCanOfSoup.Name <<endl;
  cout << "Enter [3] for "<< thirdCanOfSoup.Name << endl; 
  cout << "Enter [4] for "<< fourthCanOfSoup.Name << endl;
  cout << "Enter [5] for "<< fifthCanOfSoup.Name << endl;
  cout << "Enter [6] to go back to the home menu." << endl;
  cin >> customerInput;
  cout << endl;

  switch(customerInput){
    //Edit Chicken Soup Details
    case '1':
    char input;
    cout << "Name: " << canOfSoup.Name << endl;
    cout << "ID: " << canOfSoup.ID << endl;
    cout << "Description: " << canOfSoup.Description << endl;
    cout << "Price:$ " << canOfSoup.price << endl;
    cout << endl;
    cout << "What would you like to edit?" << endl;
    cout << "Enter [N] for Name." << endl;
    cout << "Enter [I] for ID." << endl;
    cout << "Enter [D] for Description." << endl;
    cout << "Enter [P] for Price." << endl;
    cin >> input; 
    switch(input){
      case 'N':
      cout << "What would you like the new name to be?" << endl;
      cin >> newname;
      canOfSoup.Name = newname; 
      cout << "This soup is now called " << canOfSoup.Name << " soup."<< endl;
      break;

      case 'I':
      cout << "What would you like the new ID to be?" << endl;
      cin >> newID;
      canOfSoup.ID = newID;
      cout << "This soup's ID is now " << canOfSoup.ID << "." << endl;
      break;

      case 'D':
      cout << "What would you like the new Description to be?" << endl;
      cin >> newDescription;
      canOfSoup.Description = newDescription;
      cout << "New Description: " << canOfSoup.Description << endl;
      break;

      case 'P':
      cout << "What would you like the new price to be?"  << endl;
      cin >> newPrice;
      canOfSoup.price = newPrice;
      cout << "This soup costs $" << canOfSoup.price << "." << endl;
      break;
    }
    break;

    case '2':
    cout << "Name: " << secondCanOfSoup.Name << endl;
    cout << "ID: " << secondCanOfSoup.ID << endl;
    cout << "Description: " << secondCanOfSoup.Description << endl;
    cout << "Price:$ " << secondCanOfSoup.price << endl;
    cout << endl;
    cout << "What would you like to edit?" << endl;
    cout << "Enter [N] for Name." << endl;
    cout << "Enter [I] for ID." << endl;
    cout << "Enter [D] for Description." << endl;
    cout << "Enter [P] for Price." << endl;
    cin >> input; 
    switch(input){
      case 'N':
      cout << "What would you like the new name to be?" << endl;
      cin >> newname;
      secondCanOfSoup.Name = newname; 
      cout << "This soup is now called " << secondCanOfSoup.Name << " soup."<< endl;
      break;

      case 'I':
      cout << "What would you like the new ID to be?" << endl;
      cin >> newID;
      secondCanOfSoup.ID = newID;
      cout << "This soup's ID is now " << secondCanOfSoup.ID << "." << endl;
      break;

      case 'D':
      cout << "What would you like the new Description to be?" << endl;
      cin >> newDescription;
      secondCanOfSoup.Description = newDescription;
      cout << "New Description: " << secondCanOfSoup.Description << endl;
      break;

      case 'P':
      cout << "What would you like the new price to be?"  << endl;
      cin >> newPrice;
      secondCanOfSoup.price = newPrice;
      cout << "This soup costs $" << secondCanOfSoup.price << "." << endl;
      break;
    }
    break;

    case '3':
    cout << "Name: " << thirdCanOfSoup.Name << endl;
    cout << "ID: " << thirdCanOfSoup.ID << endl;
    cout << "Description: " << thirdCanOfSoup.Description << endl;
    cout << "Price:$ " << thirdCanOfSoup.price << endl;
    cout << endl;
    cout << "What would you like to edit?" << endl;
    cout << "Enter [N] for Name." << endl;
    cout << "Enter [I] for ID." << endl;
    cout << "Enter [D] for Description." << endl;
    cout << "Enter [P] for Price." << endl;
    cin >> input; 
    switch(input){
      case 'N':
      cout << "What would you like the new name to be?" << endl;
      cin >> newname;
      thirdCanOfSoup.Name = newname; 
      cout << "This soup is now called " << thirdCanOfSoup.Name << " soup."<< endl;
      break;

      case 'I':
      cout << "What would you like the new ID to be?" << endl;
      cin >> newID;
      thirdCanOfSoup.ID = newID;
      cout << "This soup's ID is now " << thirdCanOfSoup.ID << "." << endl;
      break;

      case 'D':
      cout << "What would you like the new Description to be?" << endl;
      cin >> newDescription;
      thirdCanOfSoup.Description = newDescription;
      cout << "New Description: " << thirdCanOfSoup.Description << endl;
      break;

      case 'P':
      cout << "What would you like the new price to be?"  << endl;
      cin >> newPrice;
      thirdCanOfSoup.price = newPrice;
      cout << "This soup costs $" << thirdCanOfSoup.price << "." << endl;
      break;
    }
    break;

  case '4':
    cout << "Name: " << fourthCanOfSoup.Name << endl;
    cout << "ID: " << fourthCanOfSoup.ID << endl;
    cout << "Description: " << fourthCanOfSoup.Description << endl;
    cout << "Price:$ " << fourthCanOfSoup.price << endl;
    cout << endl;
    cout << "What would you like to edit?" << endl;
    cout << "Enter [N] for Name." << endl;
    cout << "Enter [I] for ID." << endl;
    cout << "Enter [D] for Description." << endl;
    cout << "Enter [P] for Price." << endl;
    cin >> input; 
    switch(input){
      case 'N':
      cout << "What would you like the new name to be?" << endl;
      cin >> newname;
      fourthCanOfSoup.Name = newname; 
      cout << "This soup is now called " << fourthCanOfSoup.Name << " soup."<< endl;
      break;

      case 'I':
      cout << "What would you like the new ID to be?" << endl;
      cin >> newID;
      fourthCanOfSoup.ID = newID;
      cout << "This soup's ID is now " << fourthCanOfSoup.ID << "." << endl;
      break;

      case 'D':
      cout << "What would you like the new Description to be?" << endl;
      cin >> newDescription;
      fourthCanOfSoup.Description = newDescription;
      cout << "New Description: " << fourthCanOfSoup.Description << endl;
      break;

      case 'P':
      cout << "What would you like the new price to be?"  << endl;
      cin >> newPrice;
      fourthCanOfSoup.price = newPrice;
      cout << "This soup costs $" << fourthCanOfSoup.price << "." << endl;
      break;
    }
    break;

  case '5':
    cout << "Name: " << fifthCanOfSoup.Name << endl;
    cout << "ID: " << fifthCanOfSoup.ID << endl;
    cout << "Description: " << fifthCanOfSoup.Description << endl;
    cout << "Price:$ " << fifthCanOfSoup.price << endl;
    cout << endl;
    cout << "What would you like to edit?" << endl;
    cout << "Enter [N] for Name." << endl;
    cout << "Enter [I] for ID." << endl;
    cout << "Enter [D] for Description." << endl;
    cout << "Enter [P] for Price." << endl;
    cin >> input; 
    switch(input){
      case 'N':
      cout << "What would you like the new name to be?" << endl;
      cin >> newname;
      fifthCanOfSoup.Name = newname; 
      cout << "This soup is now called " << fifthCanOfSoup.Name << " soup."<< endl;
      break;

      case 'I':
      cout << "What would you like the new ID to be?" << endl;
      cin >> newID;
      fifthCanOfSoup.ID = newID;
      cout << "This soup's ID is now " << fifthCanOfSoup.ID << "." << endl;
      break;

      case 'D':
      cout << "What would you like the new Description to be?" << endl;
      cin >> newDescription;
      fifthCanOfSoup.Description = newDescription;
      cout << "New Description: " << fifthCanOfSoup.Description << endl;
      break;

      case 'P':
      cout << "What would you like the new price to be?"  << endl;
      cin >> newPrice;
      fifthCanOfSoup.price = newPrice;
      cout << "This soup costs $" << fifthCanOfSoup.price << "." << endl;
      break;
    }
    break;

  }

  



};


void checkout(/*This should take in customerInput and return it as Q, so the program will end*/ ){

  cout <<"Surprise! You're our 1,000,000,000,000th shopper. Everything in your cart is free today!" << endl;
  //customerInput = 'Q';
  return /* customerInput*/;


};

//Adding the products to the Inventory.
Product Inventory[5] = {canOfSoup,secondCanOfSoup,thirdCanOfSoup,fourthCanOfSoup,fifthCanOfSoup};






int main() {


  char customerOrManager;

  cout<< "Welcome to the store are you a customer or manager?" << endl;
  cout << "Enter [M] for manager or [C] for customer." <<endl;
  cin >> customerOrManager;

  if (customerOrManager == 'C' || customerOrManager == 'c'){

    char customerInput;

    cout << "Welcome to the soup store! There are five types of soups to choose from." <<endl<<"Enter [A] to add soup to your cart."<< endl<< "Enter [R] to remove soup from your cart." << endl <<"Enter [P] to print a Subtotal." << endl << "Enter [$] to get the price of a soup." << endl <<"Enter [C] to checkout." <<endl << "Enter [Q] to leave the store."<< endl;

    cin >> customerInput;

    while (customerInput != 'Q'){
      switch (customerInput){
        case 'A':
          cout << endl;
          addToCart();
          break;
        case 'a':
          cout << endl;
          addToCart();
          break;
        case 'R':
          cout << endl;
          removeFromCart();
          break;
        case 'r':
          cout << endl;
          removeFromCart();
          break;
        case 'P':
          cout << endl;
          printSubtotal();
          break;
        case 'p':
          cout << endl;
          printSubtotal();
          break;
        case '$':
          cout << endl;
          getPrice();
          break;
        case 'C':
          cout << endl;
          checkout();
          break;
        case 'c':
          cout << endl;
          checkout();
          break;
        default:
          cout << "Your input is invalid." << endl;

      }
      cout << "Welcome to the soup store! There are five types of soups to choose from." <<endl<<"Enter [A] to add soup to your cart."<< endl<< "Enter [R] to remove soup from your cart." << endl <<"Enter [P] to print a Subtotal." << endl << "Enter [$] to get the price of a soup." << endl <<"Enter [C] to checkout." <<endl << "Enter [Q] to leave the store."<< endl;

    cin >> customerInput;
    }
      
    cout << "Thanks for shopping with us." << endl;
  }
  
  if (customerOrManager == 'M'|| customerOrManager == 'm'){
    char managerInput;
    cout << "Welcome Back Manager!" << endl;
    cout << "What would you like to do today?" << endl;
    cout << endl;
    cout << "Enter [D] to see product details. " << endl;
    cout << "Enter [E] to edit product details." << endl;
    cout << "Enter [S] to check your stock." << endl;
    cout << "Enter [Q] to logoff." << endl;
    cin >> managerInput;
    
     
     while (managerInput != 'Q'){
       switch (managerInput){
         case 'D':
         cout << endl;
         getProductDetails();
         break;
         case 'E':
         cout << endl;
         editProducts();
         break;
         case 'S':
         cout << endl;
         checkStock();
         break;
         default:
          cout << "Your input is invalid." << endl;
       }
      cout << "Welcome Back Manager!" << endl;
      cout << "What would you like to do today?" << endl;
      cout << endl;
      cout << "Enter [D] to see product details. " << endl;
      cout << "Enter [E] to edit product details." << endl;
      cout << "Enter [S] to check your stock." << endl;
      cout << "Enter [Q] to logoff." << endl;
      cin >> managerInput;
     }
    cout << "Thanks for shopping with us." << endl;
  }
}




