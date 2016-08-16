/*
 * File: mirror.cpp
 * --------------------------
 * Name: Arshad Khan
 *
 * Transform {1,2,3} to {1,2,3,3,2,1}
 */

#include <iostream>
#include <string>
#include "console.h"
#include "stack.h"
#include "queue.h"
using namespace std;

void mirrorProblem();
void stutterProblem();
void mirrorStack(Stack<int>& s);
void mirrorQueue(Queue<int>& q);
void stutterStack(Stack<int>& s);
void stutterQueue(Queue<int>& q);

int main() {
    mirrorProblem();
    stutterProblem();
    return 0;
}

void mirrorProblem() {
    cout << "Mirror Problem" << endl;
    Stack<int> stack;
    Queue<int> queue;
    for(int i = 1; i < 4; i++) {
        stack.push(i);
        queue.enqueue(i);
    }
    mirrorStack(stack);
    mirrorQueue(queue);
    cout << "Stack is " << stack << endl;
    cout << "Queue is " << queue << endl;
    cout << "----------------------------" << endl;
}

void mirrorStack(Stack<int>& stack) {
    Stack<int> ns = stack;
    while(!stack.isEmpty()) {
        ns.push(stack.pop());
    }
    stack = ns;
}

void mirrorQueue(Queue<int>& queue) {
    Stack<int> s;
    Queue<int> q = queue;
    while(!q.isEmpty()) {
        s.push(q.dequeue());
    }
    while(!s.isEmpty()) {
        queue.enqueue(s.pop());
    }
}

void stutterProblem() {
    cout << "stutter Problem" << endl;
    Stack<int> stack;
    Queue<int> queue;
    for(int i = 1; i < 4; i++) {
        stack.push(i);
        queue.enqueue(i);
    }
    stutterStack(stack);
    stutterQueue(queue);
    cout << "Stack is " << stack << endl;
    cout << "Queue is " << queue << endl;
    cout << "----------------------------" << endl;
}

void stutterStack(Stack<int>& stack) {
    Stack<int> ns;
    while(!stack.isEmpty()) {
        ns.push(stack.pop());
    }
    while(!ns.isEmpty()) {
        int elem = ns.pop();
        stack.push(elem);
        stack.push(elem);
    }
}

void stutterQueue(Queue<int>& queue) {
    for(int i = queue.size() - 1; i >= 0; i--) {
        int elem = queue.dequeue();
        queue.enqueue(elem);
        queue.enqueue(elem);
    }
}

