const Nav = ({ children }) => {
  
  return (
    <div>
      <nav>
        <div className="left">
          <div className="menu">
            <i className="bi bi-list"></i>
          </div>

          <a href="#" className="logo">
            { <img src="logo_square_rounded.svg" alt="logo" /> }
            <h2 className="border-[]">Classroom</h2>
          </a>
        </div>

        <div className="right">
          <a href="#" className="add">
            <i className="bi bi-plus-lg"></i>
          </a>

          <a href="#" className="more">
            <i className="bi bi-grid-3x3-gap-fill"></i>
          </a>

          <a href="#" className="profile">
            <i className="bi bi-person-circle"></i>
          </a>
        </div>
      </nav>

      {/* Render children if passed */}
      {children}
    </div>
  );
};

export default Nav;

