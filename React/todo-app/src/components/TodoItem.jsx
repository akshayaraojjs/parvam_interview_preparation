import React from 'react';
import Button from './Button';
import './TodoItem.css';

const TodoItem = ({ todo, onToggle, onDelete }) => {
  return (
    <div className={`todo-item ${todo.completed ? 'completed' : ''}`}>
      <div className="todo-content">
        <input
          type="checkbox"
          className="todo-checkbox"
          checked={todo.completed}
          onChange={() => onToggle(todo.id)}
        />
        <span className="todo-text">{todo.text}</span>
      </div>
      <Button
        variant="danger"
        onClick={() => onDelete(todo.id)}
      >
        Delete
      </Button>
    </div>
  );
};

export default TodoItem;