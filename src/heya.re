let component = ReasonReact.statelessComponent("Heya");

let make = (~name: string, ~age: int, _children) => {
  ...component,
  render: (_self) =>
      <div>
          {
            ReasonReact.stringToElement(
              "Heya " ++ name ++ "!" ++
              " You are " ++ string_of_int(age) ++ " years old."
              )
            }
      </div>
};
