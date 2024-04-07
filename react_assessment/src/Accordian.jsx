import React, { useState } from "react";
import "./App.css";

// Define a functional component named "Accordion" which takes title and content as props
function Accordian({ title, content }) {
  const [isOpen, setIsOpen] = useState(false);

  // Define a function named "toggleAccordion" to toggle the value of "isOpen" state variable
  const toggleAccordion = () => {
    setIsOpen(!isOpen);
  };
  return (
    <div className="accordion">
      <div className="accordion-header" onClick={toggleAccordion}>
        <h3>{title}</h3>
        {/* Icon to indicate whether the accordion is open or closed */}
        <span className={`accordion-icon ${isOpen ? "open" : ""}`}>
          {isOpen ? "˅" : ">"}
        </span>
      </div>
      {/* Render content only if isOpen is true */}
      {isOpen && (
        <div className="accordion-content">
          <p>{content}</p>
        </div>
      )}
    </div>
  );
}

export default Accordian;
