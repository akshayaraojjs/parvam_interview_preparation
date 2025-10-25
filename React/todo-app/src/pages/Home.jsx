import React from 'react';
import { Link } from 'react-router-dom';
import Header from '../components/Header';
import Button from '../components/Button';
import './Home.css';

const Home = () => {
  return (
    <div className="home-page">
      <Header
        title="React Todo App"
        subtitle="Simple todo application with React components and pages"
      />
      
      <div className="home-content">
        <div className="options">
          <div className="option-card">
            <h3>📝 HTML/CSS Version</h3>
            <p>Custom styled todo app with pure CSS</p>
            <Link to="/html-todo">
              <Button variant="primary">
                Try HTML Version
              </Button>
            </Link>
          </div>
          
          <div className="option-card">
            <h3>🎨 Bootstrap Version</h3>
            <p>Bootstrap styled todo app</p>
            <Link to="/bootstrap-todo">
              <Button variant="primary">
                Try Bootstrap Version
              </Button>
            </Link>
          </div>
        </div>
        
        <div className="info-section">
          <h2>About This Project</h2>
          <div className="info-grid">
            <div className="info-item">
              <h4>Components</h4>
              <p>Reusable UI pieces like Button, Input, TodoItem</p>
            </div>
            <div className="info-item">
              <h4>Pages</h4>
              <p>Complete screens that use components</p>
            </div>
          </div>
        </div>
      </div>
    </div>
  );
};

export default Home;