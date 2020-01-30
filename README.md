<div align="center">
  <h1>
    <br/>
    reason-anyhooks ⏰
    <br />
  </h1>
    <sup>
    <br />
    <br />
    <a href="https://www.npmjs.com/package/reason-anyhooks">
      <img src="https://img.shields.io/npm/v/reason-anyhooks.svg" alt="npm package" />
    </a>
    <a href="https://www.npmjs.com/package/reason-anyhooks">
      <img src="https://img.shields.io/npm/dm/reason-anyhooks.svg" alt="npm downloads" />
    </a>
  </sup>
</div>

> WIP Reason Bindings to [unihooks/any-hooks](https://github.com/unihooks/any-hooks)

## WIP

These binding only hook to `React` hooks at the moment. I went down this rabit hole when I wanted to use a hook where I wasnt using `react`. So here we are.

### Done(not tested)

- [`react`](https://ghub.io/react)

### Not Done

- [`react`](https://ghub.io/react)
- [`preact`](https://ghub.io/preact)
- [`rax`](https://ghub.io/rax)
- [`haunted`](https://ghub.io/haunted)
- [`spect`](https://ghub.io/spect)
- [`neverland`](https://ghub.io/neverland)
- [`fuco`](https://ghub.io/fuco)
- [`dom-augmentor`](https://ghub.io/dom-augmentor)
- [`augmentor`](https://ghub.io/augmentor)
- [`atomico`](https://ghub.io/atomico)
- [`tng-hooks`](https://ghub.io/tng-hooks) (manual call API)
- [`fn-with-hooks`](https://ghub.io/fn-with-hooks) (manual call API)
- [`plumejs`](https://www.npmjs.com/package/plumejs)
- [`component-register-hooks`](https://www.npmjs.com/package/component-register-hooks)
- ...

## Install

```bash
#With npm
npm install https://github.com/idkjs/reason-anyhooks --save
```

```bash
#With yarn
yarn add https://github.com/idkjs/reason-anyhooks
```

```bash
#add to bs-dependencies
  "bs-dependencies": [
   "reason-anyhooks"
  ],
```

## Usage

Create your hook using `AnyHooks` where you would have used `React`:

```reason
// Hooks.re
  let useAnyHooksClock = () => {
    let (date, setDate) = React.useState(() => Js.Date.now());
    let tick = () => {
      setDate(_ => Js.Date.now());
    };
    AnyHooks.useEffect(() => {
      let ticker = Js.Global.setInterval(() => tick(), 1000);
      Some(() => Js.Global.clearInterval(ticker));
    });
    date;
  };
```

Then call your hook in your component:

```reason

[@react.component]
let make = () => {

  let date = Hooks.useAnyHooksClock();
  <div>
    <h1> "Hello, world!"->React.string </h1>
    <h2>
      {"It is "
       ++ date->Js.Date.fromFloat->Js.Date.toLocaleTimeString
       ++ "."
       |> React.string}
    </h2>
  </div>;
};
```

See [./example](./example) for more.

See also [Constant.re](./src/Constant.re) for a `useConstant` hook. Demo at [./example/ReactHooksClock.re](./example/ReactHooksClock.re)
