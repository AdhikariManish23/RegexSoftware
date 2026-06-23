function Abc({ students, deleteStudent, editData }) {
  return (
    <div>
      <h2>Student Details</h2>

      {students.length === 0 ? (
        <p>No Student Added</p>
      ) : (
        students.map((student, index) => (
          <div key={index}>
            <p>Name: {student.name}</p>
            <p>Age: {student.age}</p>
            <p>Course: {student.course}</p>

            {/* this is Edit Button */}
            <button onClick={()=> editData(index)}>
              Edit
            </button>

          {/* this is DELETE Button */}
          <button onClick={() => deleteStudent(index)}>
            Delete
          </button>
            <hr />
          </div>
        ))
      )}
    </div>
  );
}

export default Abc;