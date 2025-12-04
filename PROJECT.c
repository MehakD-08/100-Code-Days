#include <stdio.h>
#include <string.h>

int MAX_PRODUCTS=100;
int MAX_CUSTOMERS=100;
int MAX_ORDERS=100;

//STRUCT DEFINITIONS 

struct Product{
    int productID;
    char name[100];
    float price;
    int quantity;
};

struct Customer{
    int customerID;
    char name[100];
    char email[100];
    char phone[20];
};

struct Order{
    int orderID;
    int customerID;
    int productID;
    int quantity;
    float totalPrice;
} ;

//GLOBAL ARRAYS

struct Product products[100];
int productCount = 0;

struct Customer customers[100];
int customerCount = 0;

struct Order orders[100];
int orderCount = 0;

//FUNCTION DECLARATIONS
void menu();
void addProduct();
void viewProducts();
void updateProduct();
void deleteProduct();

void addCustomer();
void viewCustomers();

void placeOrder();
void viewOrders();

// ---------------------------------------------

int main() {
    menu();
    return 0;
}

// ---------------------------------------------
void menu() {

    int choice;

    while (1) {

        printf("\n---------------------------------------------\n");
        printf(" ONLINE SHOPPING MANAGEMENT SYSTEM\n");
        printf("---------------------------------------------\n");
        printf("1. ADD PRODUCT\n");
        printf("2. VIEW ALL PRODUCTS\n");
        printf("3. UPDATE PRODUCT\n");
        printf("4. DELETE PRODUCT\n");
        printf("5. ADD CUSTOMER\n");
        printf("6. VIEW ALL CUSTOMERS\n");
        printf("7. PLACE ORDER\n");
        printf("8. VIEW ALL ORDERS\n");
        printf("9. EXIT\n");
        printf("---------------------------------------------\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addProduct(); break;
            case 2: viewProducts(); break;
            case 3: updateProduct(); break;
            case 4: deleteProduct(); break;
            case 5: addCustomer(); break;
            case 6: viewCustomers(); break;
            case 7: placeOrder(); break;
            case 8: viewOrders(); break;
            case 9: 
                printf("Thank you for using the system.\n");
                return;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

// ---------------------------------------------
void addProduct() {

    if (productCount >= MAX_PRODUCTS) {
        printf("Product list full!\n");
        return;
    }

    struct Product p;

    printf("Enter Product ID: ");
    scanf("%d", &p.productID);

    printf("Enter Product Name: ");
    scanf("%s", p.name);

    printf("Enter Product Price: ");
    scanf("%f", &p.price);

    printf("Enter Product Quantity: ");
    scanf("%d", &p.quantity);

    products[productCount++] = p;

    printf("Product added successfully.\n");
}

// ---------------------------------------------
void viewProducts() {
    printf("\n--- Product List ---\n");
    for (int i = 0; i < productCount; i++) {
        printf("ID: %d | Name: %s | Price: %.2f | Qty: %d\n",
            products[i].productID, products[i].name,
            products[i].price, products[i].quantity);
    }
}

// ---------------------------------------------
void updateProduct() {
    int id, choice;
    printf("Enter Product ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < productCount; i++) {
        if (products[i].productID == id) {

            printf("1. Update Name\n2. Update Price\n3. Update Quantity\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Enter new name: ");
                scanf("%s", products[i].name);
            } 
            else if (choice == 2) {
                printf("Enter new price: ");
                scanf("%f", &products[i].price);
            }
            else if (choice == 3) {
                printf("Enter new quantity: ");
                scanf("%d", &products[i].quantity);
            } 
            else {
                printf("Invalid choice.\n");
                return;
            }

            printf("Product updated successfully.\n");
            return;
        }
    }

    printf("Product not found.\n");
}

// ---------------------------------------------
void deleteProduct() {
    int id;
    printf("Enter Product ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < productCount; i++) {
        if (products[i].productID == id) {

            for (int j = i; j < productCount - 1; j++)
                products[j] = products[j + 1];

            productCount--;

            printf("Product deleted.\n");
            return;
        }
    }

    printf("Product not found.\n");
}

// ---------------------------------------------
void addCustomer() {

    if (customerCount >= MAX_CUSTOMERS) {
        printf("Customer list full!\n");
        return;
    }

    struct Customer c;

    printf("Enter Customer ID: ");
    scanf("%d", &c.customerID);

    printf("Enter Customer Name: ");
    scanf("%s", c.name);

    printf("Enter Email: ");
    scanf("%s", c.email);

    printf("Enter Phone: ");
    scanf("%s", c.phone);

    customers[customerCount++] = c;

    printf("Customer added successfully.\n");
}

// ---------------------------------------------
void viewCustomers() {
    printf("\n--- Customer List ---\n");
    for (int i = 0; i < customerCount; i++) {
        printf("ID: %d | Name: %s | Email: %s | Phone: %s\n",
            customers[i].customerID, customers[i].name,
            customers[i].email, customers[i].phone);
    }
}

// ---------------------------------------------
void placeOrder() {

    if (orderCount >= MAX_ORDERS) {
        printf("Order list full!\n");
        return;
    }

    struct Order o;

    printf("Enter Order ID: ");
    scanf("%d", &o.orderID);

    printf("Enter Customer ID: ");
    scanf("%d", &o.customerID);

    printf("Enter Product ID: ");
    scanf("%d", &o.productID);

    printf("Enter Quantity: ");
    scanf("%d", &o.quantity);

    // Find product
    for (int i = 0; i < productCount; i++) {
        if (products[i].productID == o.productID) {

            if (o.quantity > products[i].quantity) {
                printf("Insufficient stock.\n");
                return;
            }

            products[i].quantity -= o.quantity;
            o.totalPrice = o.quantity * products[i].price;

            orders[orderCount++] = o;

            printf("Order placed successfully.\n");
            return;
        }
    }

    printf("Product not found.\n");
}
// ---------------------------------------------
void viewOrders() {
    printf("\n--- Order List ---\n");
    for (int i = 0; i < orderCount; i++) {
        printf("OrderID: %d | CustomerID: %d | ProductID: %d | Qty: %d | Total: %.2f\n",
            orders[i].orderID, orders[i].customerID,
            orders[i].productID, orders[i].quantity,
            orders[i].totalPrice);
    }
}
