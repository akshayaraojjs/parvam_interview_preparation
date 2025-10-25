import React from 'react';
import { BrowserRouter as Router, Routes, Route, Navigate } from 'react-router-dom';
import Home from './pages/Home';
import HTMLTodo from './pages/HTMLTodo';
import BootstrapTodo from './pages/BootstrapTodo';
import './App.css';

function App() {
  return (
    <Router>
      <div className="App">
        <Routes>
          <Route path="/" element={<Home />} />
          <Route path="/html-todo" element={<HTMLTodo />} />
          <Route path="/bootstrap-todo" element={<BootstrapTodo />} />
          <Route path="*" element={<Navigate to="/" replace />} />
        </Routes>
      </div>
    </Router>
  );
}

export default App;