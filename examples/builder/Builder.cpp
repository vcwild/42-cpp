#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

/**
 * It makes sense to use the Builder pattern only when your products are quite
 * complex and require extensive configuration.
 *
 * Unlike in other creational patterns, different concrete builders can produce
 * unrelated products. In other words, results of various builders may not
 * always follow the same interface.
 */
class Product {
public:
    Product() {};
    ~Product() {};

    std::vector<std::string> _parts;

    void listParts() const
    {
        for ( size_t i = 0; i < _parts.size(); i++ ) {
            if ( _parts[i] == _parts.back() ) {
                std::cout << _parts[i];
            } else {
                std::cout << _parts[i] << ", ";
            }
        }
        std::cout << std::endl << std::endl;
    };
};

class Builder {
public:
    virtual ~Builder() {};
    virtual void ProduceMeritissimo() const = 0;
    virtual void ProduceEloroots() const    = 0;
    virtual void ProduceWeslley() const     = 0;
};

/**
 * The Concrete Builder classes follow the Builder interface and provide
 * specific implementations of the building steps. Your program may have several
 * variations of Builders, implemented differently.
 */
class FontanaBuilder : public Builder {
public:
    FontanaBuilder() { this->reset(); };
    ~FontanaBuilder() { delete this->_product; };

    void reset() { this->_product = new Product(); };

    void ProduceMeritissimo() const override
    {
        this->_product->_parts.push_back( "Meritissimo Fontana" );
    };

    void ProduceEloroots() const override
    {
        this->_product->_parts.push_back( "Eloroots Fontana" );
    };

    void ProduceWeslley() const override
    {
        this->_product->_parts.push_back( "Weslley Fontana" );
    };

    Product *getProduct()
    {
        Product *result = this->_product;
        this->reset();
        return result;
    }

private:
    Product *_product;
};

/**
 * The Director is only responsible for executing the building steps in a
 * particular sequence. It is helpful when producing products according to a
 * specific order or configuration. Strictly speaking, the Director class is
 * optional, since the client can control builders directly.
 */
class Director {
public:
    void setBuilder( Builder *builder ) { this->_builder = builder; }

    void buildMVP() { this->_builder->ProduceWeslley(); }

    void buildEntireProduct()
    {
        this->_builder->ProduceEloroots();
        this->_builder->ProduceMeritissimo();
        this->_builder->ProduceWeslley();
    }

private:
    Builder *_builder;
};

void clientCode( Director &director )
{
    FontanaBuilder *builder = new FontanaBuilder();

    director.setBuilder( builder );

    {
        std::cout << "Build MVP" << std::endl;
        director.buildMVP();

        Product *product = builder->getProduct();
        product->listParts();
        delete product;
    }
    {
        std::cout << "Build entire product" << std::endl;
        director.buildEntireProduct();
        Product *product = builder->getProduct();
        product->listParts();
        delete product;
    }

    {
        std::cout << "Build na mao xD" << std::endl;
        builder->ProduceMeritissimo();
        builder->ProduceWeslley();
        Product *product = builder->getProduct();
        product->listParts();
        delete product;
    }

    delete builder;
}

int main()
{
    Director director;

    clientCode( director );

    return 0;
}
