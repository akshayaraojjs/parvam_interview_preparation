import React from 'react';
import Button from './Button';
import './TodoFilter.css';

const TodoFilter = ({ currentFilter, onFilterChange }) => {
  const filters = [
    { key: 'all', label: 'All' },
    { key: 'active', label: 'Active' },
    { key: 'completed', label: 'Completed' }
  ];

  return (
    <div className="todo-filter">
      {filters.map(filter => (
        <Button
          key={filter.key}
          variant={currentFilter === filter.key ? 'primary' : 'secondary'}
          onClick={() => onFilterChange(filter.key)}
        >
          {filter.label}
        </Button>
      ))}
    </div>
  );
};

export default TodoFilter;