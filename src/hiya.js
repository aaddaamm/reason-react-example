import React from 'react';

class Hiya extends React.Component {
  render() {
    return (
      <div>
        {this.props.name}
        {this.props.age}
      </div>
    );
  }
}

export default Hiya;
