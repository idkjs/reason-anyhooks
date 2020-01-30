module Clocks = {
  [@react.component]
  let make = () => {
    <> <ReactHooksClock /> <AnyHooksClock /> </>;
  };
};
ReactDOMRe.renderToElementWithId(<Clocks />, "use-clock");
