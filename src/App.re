let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
  <div>
    <div className="container-row1" style={ReactDOMRe.Style.make(~display="flex", ~flexDirection="row", ())}>
      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="red", ())}></div>
      
      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="red", ())}></div>

      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="red", ())}></div>
    </div>

    <div className="container-row2" style={ReactDOMRe.Style.make(~display="flex", ~flexDirection="row", ())}>
      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="red", ())}></div>

      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="red", ())}></div>

      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="red", ())}></div>
    </div>

    <div className="container-row3" style={ReactDOMRe.Style.make(~display="flex", ~flexDirection="row", ())}>
      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="red", ())}></div>

      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="red", ())}></div>

      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="red", ())}></div>
    </div>
  </div>
};
