import React from "react";
import Accordian from "./Accordian";
function App() {
  return (
    <div className="App">
      <Accordian
        title="What is your return policy?"
        content="Lorem ipsum dolor sit amet consectetur adipisicing elit. Placeat, aperiam repellat! Facere commodi ab nesciunt aut esse laboriosam incidunt a!"
      />
      <Accordian
        title="How do I track my order?"
        content="Lorem ipsum dolor sit amet consectetur adipisicing elit. Placeat, aperiam repellat! Facere commodi ab nesciunt aut esse laboriosam incidunt a!"
      />
      <Accordian
        title="Can i purchase items again?"
        content="Lorem ipsum dolor sit amet consectetur adipisicing elit. Placeat, aperiam repellat! Facere commodi ab nesciunt aut esse laboriosam incidunt a!"
      />
    </div>
  );
}

export default App;
