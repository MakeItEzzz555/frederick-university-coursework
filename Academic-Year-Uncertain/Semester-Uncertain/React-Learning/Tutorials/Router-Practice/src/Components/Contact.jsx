import React, { useState } from 'react';
import './CSS/Contact.css';

const Contact = () => {
  const [copied, setCopied] = useState(false);
  const [flipped, setFlipped] = useState(false);
  const [ripple, setRipple] = useState(false);

  // Email to copy
  const email = "contact@example.com";

  // Handle copy action
  const handleCopy = () => {
    navigator.clipboard.writeText(email).then(() => {
      setRipple(true);
      setFlipped(true);
      setTimeout(() => {
        setCopied(true);
        setRipple(false); // End the ripple effect
      }, 3000); // After flip animation completes
      setTimeout(() => {
        setFlipped(false); // Reset flip animation
        setCopied(false);  // Reset copied state after some time
      }, 5000); // 5 seconds total duration of animation
    });
  };

  return (
    <div className="contact-container">
      <div className="contact-content">
        <h2>Contact Us</h2>
        <div className="contact-details">
          <p>
            Email us at: <strong>{email}</strong>
          </p>
          <button
            className={`copy-button ${flipped ? 'flipped' : ''} ${ripple ? 'ripple' : ''}`}
            onClick={handleCopy}
          >
            {copied ? (
              <span>Copied!</span>
            ) : (
              <>
                <i className="fas fa-envelope"></i> Copy
              </>
            )}
          </button>
        </div>
      </div>
    </div>
  );
};

export default Contact;