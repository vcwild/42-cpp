#include <iostream>
using std::cout;
using std::endl;
using std::string;

/**
 * @brief The Creator product interface which all
 * of the concrete products should implement.
 */
class Product
{
  public:
    virtual ~Product() {}
    virtual string Operation() const = 0;
};

class GaiusProduct: public Product {
  public:
    string Operation() const override
    {
      return "Result of GaiusProduct";
    }
};

class OvercastProduct: public Product
{
  public:
    string Operation() const override
    {
      return "Result of OvercastProduct";
    }
};

/**
 * @brief The Creator interface to create objects.
 * Concrete factories should implement using this interface definition.
 */
class Creator
{
  public:
    virtual ~Creator() {};
    virtual Product *CreatorMethod() const = 0;

    string RandomOperation() const
    {
      Product *product = this->CreatorMethod();

      string result = "Created a code with the following product: " + product->Operation();
      delete product;
      return result;
    }
};

/**
 * @brief The EfraimCreator creates Gaius products.
 */
class EfraimCreator: public Creator
{
  public:
    Product *CreatorMethod() const override
    {
      return new GaiusProduct();
    }
};

/**
 * @brief The Seven x One Creator returns Overcast products.
 */
class SevenxOneCreator: public Creator
{
  public:
    Product *CreatorMethod() const override
    {
      return new OvercastProduct();
    }
};

/**
 * @brief An arbitrary piece of code from the client
 *
 * @param creator A creator interface-compliant object
 */
void ClientCode(const Creator &creator)
{
  cout << "Client is receiving a cretor object that simply works\n"
            << creator.RandomOperation() << endl;
}

void ClearFactory(const Creator *creator)
{
  delete creator;
}

int main(void)
{
  cout << "Launching app with efraim creator\n";
  Creator *efraim = new EfraimCreator();

  ClientCode(*efraim);
  cout << endl;

  cout << "Launching app with 7x1 creator\n";
  Creator *sevenXOne = new SevenxOneCreator();
  ClientCode(*sevenXOne);
  cout << endl;

  ClearFactory(efraim);
  ClearFactory(sevenXOne);

  return 0;
}
