import React, { useState } from 'react';
import Input from './Input';
import Button from './Button';
import './TodoForm.css';

const TodoForm = ({ onAddTodo }) => {
  const [inputValue, setInputValue] = useState('');

  const handleSubmit = (e) => {
    e.preventDefault();
    const text = inputValue.trim();
    
    if (text) {
      onAddTodo(text);
      setInputValue('');
    }
  };

  const handleKeyPress = (e) => {
    if (e.key === 'Enter') {
      handleSubmit(e);
    }
  };

  return (
    <form className="todo-form" onSubmit={handleSubmit}>
      <div className="form-row">
        <Input
          type="text"
          placeholder="What needs to be done?"
          value={inputValue}
          onChange={(e) => setInputValue(e.target.value)}
          onKeyPress={handleKeyPress}
          className="todo-input"
        />
        <Button
          type="submit"
          variant="primary"
          disabled={!inputValue.trim()}
        >
          Add Task
        </Button>
      </div>
    </form>
  );
};

export default TodoForm;