[@react.component]
let make = () => {
  let date = Hooks.useClock();
  let constant = Constant.useConstant(() => 23);
  let anotherConstant = constant + 1;
  <> <h1> "Using React Hooks"->React.string </h1>
      <h1>
      {"Mixing Hooks!, constant from AnyHooks: "
       ++ string_of_int(anotherConstant)
       |> React.string}
    </h1>
   <AnalogClock date /> </>;
};