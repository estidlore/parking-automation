import type { FC } from "react";
import React from "react";

import { Variables } from "./views";

const App: FC = (): JSX.Element => (
  <div className={"d-f f3 jc-center py5 px3"}>
    <Variables />
  </div>
);

export { App };
