#include <iostream>
#include <conio.h>
using namespace std;
void printHeader();
void printMenu();
void menuSelection(char character);
void menSection(char men);
void menShirtsDetails(char menS);
void menTrousersDetails(char menT);
void menHoodiesDetails(char menH);
void menShortsDetails(char menShort);
void menTankTopDetails(char menTank);
void womenSection(char women);
// void accessoriesSection(char accessories);
main()
{
    // system("color 07");
    system("cls");
    printHeader();
    printMenu();
    cout << "Select an option using number:" << endl;
    cout << "               " << endl;
    char character = getche();
    menuSelection(character);
}

void printHeader()
{
    cout << " ________________________________________________________________________________________________________________________________________________________________________  " << endl;
    cout << "|                                                                                                                                                                        | " << endl;
    cout << "|                                                      ****    **    **                       *******    ******   ********                                               | " << endl;
    cout << "|                                                     **  **    **  **                        **           **        **                                                  | " << endl;
    cout << "|                                                     ******      **      _____________       *******      **        **                                                  | " << endl;
    cout << "|                                                     **  **      **                          **           **        **                                                  | " << endl;
    cout << "|                                                     **  **      **                          **         ******      **                                                  | " << endl;
    cout << "|                                                                                                                                                                        | " << endl;
    cout << "|                                                                                                                                                                        | " << endl;
    cout << "|                                                     *******    ****    *******   **   **   ******    ***     ***    **                                                 | " << endl;
    cout << "|                                                     **        **  **   *         **   **     **    **   **   ** *   **                                                 | " << endl;
    cout << "|                                                     *******   ******   *******   *******     **    *     *   **  *  **                                                 | " << endl;
    cout << "|                                                     **        **  **         *   **   **     **    **   **   **   * **                                                 | " << endl;
    cout << "|                                                     **        **  **   *******   **   **   ******    ***     **    ***                                                 | " << endl;
    cout << "|________________________________________________________________________________________________________________________________________________________________________| " << endl;
}
void printMenu()
{
    cout << "                            " << endl;
    cout << "                            " << endl;
    cout << "1. MEN" << endl;
    cout << "                            " << endl;
    cout << "2. WOMEN " << endl;
    cout << "                            " << endl;
    cout << "3. ACCESSORIES " << endl;
    cout << "                            " << endl;
    cout << "4. GYM EQUIPMENTS " << endl;
    cout << "                            " << endl;
    cout << "5. SUPPLEMENTS " << endl;
    cout << "                            " << endl;
}
void menuSelection(char character)
{
    switch (character)
    {
    case '1':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. T-Shirts." << endl;
        cout << "               " << endl;
        cout << "2. Trousers." << endl;
        cout << "               " << endl;
        cout << "3. Hoodies & SweatShirts." << endl;
        cout << "               " << endl;
        cout << "4. Shorts." << endl;
        cout << "               " << endl;
        cout << "5. Tank-Tops." << endl;
        cout << "               " << endl;
        cout << "6. Back." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "Select an option from the following:" << endl;
        cout << "            " << endl;
        char men = getch();
        menSection(men);
    }
    break;
    case '2':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. Women Tees." << endl;
        cout << "               " << endl;
        cout << "2. Women Trousers." << endl;
        cout << "               " << endl;
        cout << "3. Hoodies." << endl;
        cout << "               " << endl;
        cout << "4. Back." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "Select an option from the following:" << endl;
        cout << "            " << endl;
        char women = getch();
        womenSection(women);
    }
    break;
    case '3':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. Towels." << endl;
        cout << "               " << endl;
        cout << "2. Bag." << endl;
        cout << "               " << endl;
        cout << "3. Wrist Bands." << endl;
        cout << "               " << endl;
        cout << "4. Head Bands." << endl;
        cout << "               " << endl;
        cout << "5. Back." << endl;
    }
    break;
    case '4':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. Dumbells." << endl;
        cout << "               " << endl;
        cout << "2. Plates." << endl;
        cout << "               " << endl;
        cout << "3. Adjustable Bench." << endl;
        cout << "               " << endl;
        cout << "4. Barbell." << endl;
        cout << "               " << endl;
        cout << "5. Back." << endl;
    }
    break;
    case '5':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. Anabolic Mass Gainer." << endl;
        cout << "               " << endl;
        cout << "2. Creatine." << endl;
        cout << "               " << endl;
        cout << "3. Protein Powder." << endl;
        cout << "               " << endl;
        cout << "4. Multivitamins." << endl;
        cout << "               " << endl;
        cout << "5. Back." << endl;
    }
    break;
    }
}
void womenSection(char women)
{
    switch (women)
    {
    case '1':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. AF - Full Sleeves Women Tee" << endl;
        cout << "               " << endl;
        cout << "2. AF - Half Sleeves Women PREMIUM POLO TEE" << endl;
        cout << "               " << endl;
        cout << "3. Olive Cut Women Sleeveless Tee" << endl;
        cout << "               " << endl;
    }
    break;
    case '2':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. AF - Basic Sea Top Cut High Waisted Women Tracksuit" << endl;
        cout << "               " << endl;
        cout << "2. AF - Basic Pink Top Cut High Waisted Women Tracksuit" << endl;
        cout << "               " << endl;
    }
    break;
    case '3':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. Baby Pink Oversized Women Hoodie" << endl;
        cout << "               " << endl;
        cout << "1. Yellow Printed Women Hoodie" << endl;
        cout << "               " << endl;
    }
    break;
    default:
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "Invalid Number:-" << endl;
        cout << "Enter a valid number:-" << endl;
    }
    }
}
void menSection(char men)
{
    switch (men)
    {
    case '1':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. AF - Black Oversized Shirt" << endl;
        cout << "               " << endl;
        cout << "2. AF - PREMIUM POLO TEE" << endl;
        cout << "               " << endl;
        cout << "3. Black Full Sleeve Quarter Zip Shirt" << endl;
        cout << "               " << endl;
        cout << "4. To see the details of the following: ";
        cout << "            " << endl;
        char menS = getch();
        menShirtsDetails(menS);
    }
    break;
    case '2':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. AF - Ultimate Training Bottoms" << endl;
        cout << "               " << endl;
        cout << "2. AF - Perfect Navy Fitted Bottoms" << endl;
        cout << "               " << endl;
        cout << "3. Maroon Hawk Bottoms With Half White Panel" << endl;
        cout << "               " << endl;
        cout << "4. To see the details of the following: ";
        cout << "            " << endl;
        char menT = getch();
        menTrousersDetails(menT);
    }
    break;
    case '3':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. All Black Fleece Tracksuit" << endl;
        cout << "               " << endl;
        cout << "2. AF - Premium Black Puffer Jacket" << endl;
        cout << "               " << endl;
        cout << "3. Black And Red Zipper Top Tracksuit" << endl;
        cout << "               " << endl;
        cout << "4. Black Sweatshirt With Contrast Piping" << endl;
        cout << "               " << endl;
        cout << "5. To see the details of the following: ";
        cout << "            " << endl;
        char menH = getch();
        menHoodiesDetails(menH);
    }
    break;
    case '4':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. AF - Olive Running Utility Shorts" << endl;
        cout << "               " << endl;
        cout << "2. AF - Grey Full Compression Shorts With White Panel " << endl;
        cout << "               " << endl;
        cout << "3. To see the details of the following: ";
        cout << "            " << endl;
        char menShort = getch();
        menShortsDetails(menShort);
    }
    break;
    case '5':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. AF - Lion Sleeveless TankTop" << endl;
        cout << "               " << endl;
        cout << "2. Beast Mode TankTop" << endl;
        cout << "               " << endl;
        cout << "3. Royal Blue Mesh Sleeveless Top" << endl;
        cout << "               " << endl;
        cout << "4. To see the details of the following: ";
        cout << "            " << endl;
        char menTank = getch();
        menTankTopDetails(menTank);
    }
    default:
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "Invalid Number:-" << endl;
        cout << "Enter a valid number:-" << endl;
    }
    }
}
void menShirtsDetails(char menS)
{

    switch (menS)
    {
    case '4':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. AF - Black Oversized Shirt" << endl;
        cout << "               " << endl;
        cout << "Medium and large available. " << endl;
        cout << "Price is 1500.  " << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "2. AF - PREMIUM POLO TEE" << endl;
        cout << "               " << endl;
        cout << "Small , Medium and large available. " << endl;
        cout << "Price is 1300.  " << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "3. Black Full Sleeve Quarter Zip Shirt" << endl;
        cout << "               " << endl;
        cout << "Only Excel is available right now." << endl;
        cout << "Price is 1700.  " << endl;
        cout << "               " << endl;
        cout << "Press 4 to Go Back:-" << endl;
        cout << "               " << endl;
        char B = getch();
        if (B == '4')
        {
            system("cls");
            printHeader();
            cout << "               " << endl;
            cout << "               " << endl;
            cout << "1. T-Shirts." << endl;
            cout << "               " << endl;
            cout << "2. Trousers." << endl;
            cout << "               " << endl;
            cout << "3. Hoodies & SweatShirts." << endl;
            cout << "               " << endl;
            cout << "4. Shorts." << endl;
            cout << "               " << endl;
            cout << "5. Tank-Tops." << endl;
            cout << "               " << endl;
            cout << "6. Back." << endl;
            cout << "               " << endl;
            cout << "               " << endl;

            cout << "Select option" << endl;
            char C = getch();
            menSection(C);
        }
    }
    break;
    }
}
void menTrousersDetails(char menT)
{

    switch (menT)
    {
    case '4':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. AF - Ultimate Training Bottoms" << endl;
        cout << "               " << endl;
        cout << "All Sizes Available from 28 to 40 waists." << endl;
        cout << "Price is 2000." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "2. AF - Perfect Navy Fitted Bottoms" << endl;
        cout << "               " << endl;
        cout << "only small size is Available." << endl;
        cout << "Price is 2300." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "3. Maroon Hawk Bottoms With Half White Panel" << endl;
        cout << "               " << endl;
        cout << "only large size is Available." << endl;
        cout << "Price is 2400." << endl;
        cout << "               " << endl;
        cout << "Press 4 to Go Back:-" << endl;
        cout << "               " << endl;
        char B = getch();
        if (B == '4')
        {
            system("cls");
            printHeader();
            cout << "               " << endl;
            cout << "               " << endl;
            cout << "1. T-Shirts." << endl;
            cout << "               " << endl;
            cout << "2. Trousers." << endl;
            cout << "               " << endl;
            cout << "3. Hoodies & SweatShirts." << endl;
            cout << "               " << endl;
            cout << "4. Shorts." << endl;
            cout << "               " << endl;
            cout << "5. Tank-Tops." << endl;
            cout << "               " << endl;
            cout << "6. Back." << endl;
            cout << "               " << endl;
            cout << "               " << endl;
            cout << "Select option" << endl;
            char C = getch();
            menSection(C);
        }
    }
    break;
    }
}
void menHoodiesDetails(char menH)
{
    switch (menH)
    {
    case '5':
    {
        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. All Black Fleece Tracksuit" << endl;
        cout << "               " << endl;
        cout << "Available in different sizes." << endl;
        cout << "Price is 3500." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "2. AF - Premium Black Puffer Jacket" << endl;
        cout << "               " << endl;
        cout << "Available in all sizes." << endl;
        cout << "Price is 3000." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "3. Black And Red Zipper Top Tracksuit" << endl;
        cout << "               " << endl;
        cout << "Available." << endl;
        cout << "Price is 2900." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "4. Black Sweatshirt With Contrast Piping" << endl;
        cout << "               " << endl;
        cout << "Available in large size." << endl;
        cout << "Price is 1800." << endl;
        cout << "               " << endl;
        cout << "Press 5 to Go Back:-" << endl;
        cout << "               " << endl;
        char B = getch();
        if (B == '5')
        {
            system("cls");
            printHeader();
            cout << "               " << endl;
            cout << "               " << endl;
            cout << "1. T-Shirts." << endl;
            cout << "               " << endl;
            cout << "2. Trousers." << endl;
            cout << "               " << endl;
            cout << "3. Hoodies & SweatShirts." << endl;
            cout << "               " << endl;
            cout << "4. Shorts." << endl;
            cout << "               " << endl;
            cout << "5. Tank-Tops." << endl;
            cout << "               " << endl;
            cout << "6. Back." << endl;
            cout << "               " << endl;
            cout << "               " << endl;
            cout << "Select option" << endl;
            char C = getch();
            menSection(C);
        }
    }
    }
}
void menShortsDetails(char menShort)
{
    switch (menShort)
    {
    case '3':
    {

        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. AF - Olive Running Utility Shorts" << endl;
        cout << "               " << endl;
        cout << "Not available right now" << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "2. AF - Grey Full Compression Shorts With White Panel " << endl;
        cout << "               " << endl;
        cout << "Only 1 article is available right now." << endl;
        cout << "Price 1350." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "Press 5 to Go Back:-" << endl;
        cout << "               " << endl;
        char B = getch();
        if (B == '5')
        {
            system("cls");
            printHeader();
            cout << "               " << endl;
            cout << "               " << endl;
            cout << "1. T-Shirts." << endl;
            cout << "               " << endl;
            cout << "2. Trousers." << endl;
            cout << "               " << endl;
            cout << "3. Hoodies & SweatShirts." << endl;
            cout << "               " << endl;
            cout << "4. Shorts." << endl;
            cout << "               " << endl;
            cout << "5. Tank-Tops." << endl;
            cout << "               " << endl;
            cout << "6. Back." << endl;
            cout << "               " << endl;
            cout << "               " << endl;
        }
        cout << "Select option" << endl;
        char C = getch();
        menSection(C);
    }
    }
}
void menTankTopDetails(char menTank)
{
    switch (menTank)
    {
    case '4':
    {

        system("cls");
        printHeader();
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "1. AF - Lion Sleeveless TankTop" << endl;
        cout << "               " << endl;
        cout << "Out of stock." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "2. Beast Mode TankTop" << endl;
        cout << "               " << endl;
        cout << "Out of stock." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "3. Royal Blue Mesh Sleeveless Top" << endl;
        cout << "               " << endl;
        cout << "Avaiable." << endl;
        cout << "Price 2100." << endl;
        cout << "               " << endl;
        cout << "               " << endl;
        cout << "Press 4 to go back:-";
        char B = getch();
        if (B == 4)
        {
            system("cls");
            printHeader();
            cout << "               " << endl;
            cout << "               " << endl;
            cout << "1. T-Shirts." << endl;
            cout << "               " << endl;
            cout << "2. Trousers." << endl;
            cout << "               " << endl;
            cout << "3. Hoodies & SweatShirts." << endl;
            cout << "               " << endl;
            cout << "4. Shorts." << endl;
            cout << "               " << endl;
            cout << "5. Tank-Tops." << endl;
            cout << "               " << endl;
            cout << "6. Back." << endl;
            cout << "               " << endl;
            cout << "               " << endl;
        }
        cout << "Select option" << endl;
        char C = getch();
        menSection(C);
    }
    }
}