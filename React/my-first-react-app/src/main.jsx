import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import './index.css'
import App from './App.jsx'

// JS Selector: getElementById
createRoot(document.getElementById('root')).render(
  <StrictMode>
    {/* We are injecting the App component by targetting the root element */}
    <App />
  </StrictMode>,
)
