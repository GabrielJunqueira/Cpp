#include "queue.h"

struct Node {
	int key;
	Node *next;
};

Queue::Queue() {
	this->front_ = nullptr;
	this->back_ = nullptr;
	this->elements = 0;
}

void Queue::push(int k) {
	//se estiver vazia
	if (this->elements == 0) {
		Node *newNode = new Node;
		this->front_ = newNode;
		this->front_->key = k;
		this->back_ = newNode;
		this->front_->next = this->back_;
		this->elements++;
	} else {
		Node *newNode = new Node;
		this->back_->next = newNode;
		this->back_ = newNode;
		this->back_->key = k;
		this->elements++;
	}
}

void Queue::pop() {
	if (this->front_ == nullptr)
		throw EmptyException { };
	Node *temp = this->front_;
	this->front_ = this->front_->next;
	this->elements--;

	delete temp;
}

int Queue::front() const {
	if (this->front_ == nullptr)
		throw EmptyException { };

	return this->front_->key;

}

int Queue::back() const {
	if (this->front_ == nullptr)
		throw EmptyException { };

	return this->back_->key;
}

int Queue::count() const {
	return this->elements;
}
