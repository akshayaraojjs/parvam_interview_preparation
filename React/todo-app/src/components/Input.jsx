import React from 'react';
import './Input.css';

const Input = ({
  type = 'text',
  placeholder = '',
  value,
  onChange,
  onKeyPress,
  className = ''
}) => {
  return (
    <input
      type={type}
      className={`input ${className}`}
      placeholder={placeholder}
      value={value}
      onChange={onChange}
      onKeyPress={onKeyPress}
    />
  );
};

export default Input;