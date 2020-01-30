[@react.component]
let make = () => {
  let date = Hooks.useAnyHooksClock();

  let constant = Constant.useConstant(() => 23);
  Js.log2("constant", constant);
  let anotherConstant = constant + 1;
  Js.log2("anotherConstant", anotherConstant);
  <>
    <h1> "Using AnyHooks"->React.string </h1>

    <h1>
      {"Using UseConstant, constant is: "
       ++ string_of_int(anotherConstant)
       |> React.string}
    </h1>
    <AnalogClock date />
  </>;
};