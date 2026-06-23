import { useState, useEffect } from "react";

function Form({ addStudent,editStudent }) {
  const [name, setName] = useState("");
  const [age, setAge] = useState("");
  const [course, setCourse] = useState("");

  // When you want to edit Details :
  useEffect(() =>{
    if(editStudent){
      setName(editStudent.name);
      setAge(editStudent.age);
      setCourse(editStudent.course);
    }
  },[editStudent]);



  const handleSubmit = (e) => {
    e.preventDefault();

    // Create object
    const student = {
      name,
      age,
      course,
    };

    // Send data to App.jsx
    addStudent(student);

    // Clear form
    setName("");
    setAge("");
    setCourse("");
  };

  return (
    <form onSubmit={handleSubmit}>
      <input
        type="text"
        placeholder="Enter Name"
        value={name}
        onChange={(e) => setName(e.target.value)}
      />

      <input
        type="number"
        placeholder="Enter Age"
        value={age}
        onChange={(e) => setAge(e.target.value)}
      />

      <input
        type="text"
        placeholder="Enter Course"
        value={course}
        onChange={(e) => setCourse(e.target.value)}
      />

      <button type="submit">
        {editStudent ? "Update Student" : "Add Student"}
      </button>
    </form>
  );
}

export default Form;