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
      ~backgroundColor="blue", ())}></div>

      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="green", ())}></div>
    </div>

    <div className="container-row2" style={ReactDOMRe.Style.make(~display="flex", ~flexDirection="row", ())}>
      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="yellow", ())}></div>

      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="pink", ())}></div>

      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="purple", ())}></div>
    </div>

    <div className="container-row3" style={ReactDOMRe.Style.make(~display="flex", ~flexDirection="row", ())}>
      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="black", ())}></div>

      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="gray", ())}></div>

      <div style={ReactDOMRe.Style.make(~height="100px", ~width="100px",
      ~marginLeft="100px", ~marginBottom="50px",
      ~backgroundColor="gold", ())}></div>
    </div>
  </div>
};