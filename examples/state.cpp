#include <iostream>
#include <typeinfo>

class Context;

class State
{
	protected:
		Context *context_;
	public:
		virtual ~State() {};

	void setContext(Context *context) {
		this->context_ = context;
	}

	virtual void handleMeritissimo() = 0;
	virtual void handleAluandalee() = 0;
};

class Context
{
	private:
		State *state_;

	public:
		Context(State *state): state_(nullptr) {
			this->transitionTo(state);
		}

		void transitionTo(State *state) {
			std::cout << "Context has transitioned to " << typeid(*state).name() << std::endl;
			if (this->state_ != nullptr)
				delete this->state_;
			this->state_ = state;
			this->state_->setContext(this);
		}

		void requestMeritissimo() {
			this->state_->handleMeritissimo();
		}

		void requestAluandalee() {
			this->state_->handleAluandalee();
		}
};

class SevenState;

class GrandeState: public State {
	public:
		void handleMeritissimo() override {
			std::cout << "`Meritissimo` handled `Grande` request\n";
		}

		void handleAluandalee() override {
			std::cout << "Aluan handled the state of `Grande` request\n";
		}
};

class SevenState: public State {
	public:
		void handleMeritissimo() override {
			std::cout << "`Meritissimo` handled for`Seven` state request\n";
		}

		void handleAluandalee() override {
			std::cout << "Aluan handled `Seven` state request\n";
		}
};


void handleRequests(Context *context)
{
	context->requestMeritissimo();
	context->requestAluandalee();
}

void clientCode() {
	Context *context = new Context(new GrandeState);

	handleRequests(context);
	context->transitionTo(new SevenState);
	std::cout << std::endl;
	handleRequests(context);
	delete context;
}

int main(void)
{
	clientCode();
	return 0;
}

