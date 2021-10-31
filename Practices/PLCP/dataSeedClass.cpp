#include "dataSeedClass.h"

using namespace std;

void dataSeedClass::seed(storeClass *&store) {
  productClass *product_1;
  productsListClass *auxProducts;
  clientClass *client_1, *client_2;
  clientsListClass *auxClients;

  store->setName("Don Lopez");
  store->setAddress("Calle Bolognesi 867, Chiclayo");
  store->setRuc("20217832040");

  product_1 = new productClass("44780449", "Bolivar", "Kimberly Clark", 100,
                               1.5, "Detergente");

  client_1 = new clientClass("Liz", "Rios", "Maz", "44780449", "José Díaz Maz",
                             "960024028", "liz@rios.com");
  client_2 =
      new clientClass("Betty", "Sanchez", "Ruiz", "16459212",
                      "Luis Atarama Ríos", "910522841", "betty@sanchez.com");

  auxProducts = store->getProducts();
  auxProducts->insert(product_1);
  store->setProducts(auxProducts);

  auxClients = store->getClients();
  auxClients->insert(client_1);
  auxClients->insert(client_2);
  store->setClients(auxClients);
}
