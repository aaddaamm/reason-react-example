[@bs.module] external hiya : ReasonReact.reactClass = "./hiya.js";

let make = (~name: string, ~age: int,  children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=hiya,
    ~props={"name": name, "age": age},
    children
  );
