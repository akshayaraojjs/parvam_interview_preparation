import React, { useState, useEffect } from 'react';
import Header from '../components/Header';
import TodoForm from '../components/TodoForm';
import TodoList from '../components/TodoList';
import TodoFilter from '../components/TodoFilter';
import Button from '../components/Button';
import 'bootstrap/dist/css/bootstrap.min.css';
import './BootstrapTodo.css';

const BootstrapTodo = () => {
  const [todos, setTodos] = useState([]);
  const [filter, setFilter] = useState('all');

  // Load from localStorage
  useEffect(() => {
    const savedTodos = localStorage.getItem('bootstrapTodos');
    if (savedTodos) {
      setTodos(JSON.parse(savedTodos));
    }
  }, []);

  // Save to localStorage
  useEffect(() => {
    localStorage.setItem('bootstrapTodos', JSON.stringify(todos));
  }, [todos]);

  const addTodo = (text) => {
    const newTodo = {
      id: Date.now(),
      text,
      completed: false,
      createdAt: new Date().toLocaleDateString()
    };
    setTodos([newTodo, ...todos]);
  };

  const toggleTodo = (id) => {
    setTodos(todos.map(todo =>
      todo.id === id ? { ...todo, completed: !todo.completed } : todo
    ));
  };

  const deleteTodo = (id) => {
    setTodos(todos.filter(todo => todo.id !== id));
  };

  const clearCompleted = () => {
    setTodos(todos.filter(todo => !todo.completed));
  };

  const filteredTodos = todos.filter(todo => {
    switch (filter) {
      case 'active':
        return !todo.completed;
      case 'completed':
        return todo.completed;
      default:
        return true;
    }
  });

  const completedCount = todos.filter(todo => todo.completed).length;

  return (
    <div className="bootstrap-todo-page">
      <Header
        title="🎨 Bootstrap Todo App"
        subtitle="Built with React components and Bootstrap styling"
      />
      
      <div className="container mt-4">
        <div className="row justify-content-center">
          <div className="col-12 col-md-10 col-lg-8">
            <div className="card shadow">
              <div className="card-body">
                <TodoForm onAddTodo={addTodo} />
                
                <div className="d-flex justify-content-between align-items-center mb-3 flex-wrap">
                  <TodoFilter currentFilter={filter} onFilterChange={setFilter} />
                  {completedCount > 0 && (
                    <Button className="btn-danger" onClick={clearCompleted}>
                      Clear Completed ({completedCount})
                    </Button>
                  )}
                </div>
                
                <div className="card bg-light mb-3">
                  <div className="card-body text-center">
                    <div className="row">
                      <div className="col-4">
                        <strong>Total: {todos.length}</strong>
                      </div>
                      <div className="col-4">
                        <strong>Active: {todos.filter(t => !t.completed).length}</strong>
                      </div>
                      <div className="col-4">
                        <strong>Completed: {completedCount}</strong>
                      </div>
                    </div>
                  </div>
                </div>
                
                <TodoList
                  todos={filteredTodos}
                  onToggle={toggleTodo}
                  onDelete={deleteTodo}
                />
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default BootstrapTodo;