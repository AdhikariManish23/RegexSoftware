import { useState } from "react";
import Form from "./Form";
import Abc from "./Abc";

function App() {
  // Store all students
  const [students, setStudents] = useState([]);

  // Store edit student index
  const [editIndex, setEditIndex] = useState(null);

  // Store current edit data
  const [editStudent, setEditStudent] = useState(null);

  // Add or Update student
  const addStudent = (studentData) => {
    // UPDATE
    if (editIndex !== null) {
      const updatedStudents = [...students];

      updatedStudents[editIndex] = studentData;

      setStudents(updatedStudents);

      setEditIndex(null);
      setEditStudent(null);
    }

    // ADD
    else {
      setStudents([...students, studentData]);
    }
  };

  // DELETE
  const deleteStudent = (index) => {
    const filteredStudents = students.filter(
      (_, studentIndex) => studentIndex !== index
    );

    setStudents(filteredStudents);
  };

  // EDIT
  const editData = (index) => {
    setEditIndex(index);

    setEditStudent(students[index]);
  };

  return (
    <div>
      <h1>Student App</h1>

      <Form
        addStudent={addStudent}
        editStudent={editStudent}
      />

      <Abc
        students={students}
        deleteStudent={deleteStudent}
        editData={editData}
      />
    </div>
  );
}

export default App;