import React, { useState, useEffect } from 'react';
import Header from '../components/Header';
import TodoForm from '../components/TodoForm';
import TodoList from '../components/TodoList';
import TodoFilter from '../components/TodoFilter';
import Button from '../components/Button';
import './HTMLTodo.css';

const HTMLTodo = () => {
  const [todos, setTodos] = useState([]);
  const [filter, setFilter] = useState('all');

  // Load from localStorage
  useEffect(() => {
    const savedTodos = localStorage.getItem('htmlTodos');
    if (savedTodos) {
      setTodos(JSON.parse(savedTodos));
    }
  }, []);

  // Save to localStorage
  useEffect(() => {
    localStorage.setItem('htmlTodos', JSON.stringify(todos));
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
    <div className="html-todo-page">
      <Header
        title="📝 HTML/CSS Todo App"
        subtitle="Built with React components and custom CSS"
      />
      
      <div className="todo-container">
        <TodoForm onAddTodo={addTodo} />
        
        <div className="todo-controls">
          <TodoFilter currentFilter={filter} onFilterChange={setFilter} />
          {completedCount > 0 && (
            <Button variant="danger" onClick={clearCompleted}>
              Clear Completed ({completedCount})
            </Button>
          )}
        </div>
        
        <div className="todo-stats">
          <span>Total: {todos.length}</span>
          <span>Active: {todos.filter(t => !t.completed).length}</span>
          <span>Completed: {completedCount}</span>
        </div>
        
        <TodoList
          todos={filteredTodos}
          onToggle={toggleTodo}
          onDelete={deleteTodo}
        />
      </div>
    </div>
  );
};

export default HTMLTodo;