import type { FC } from "react";
import React from "react";

import { Development, Variables } from "./views";

const App: FC = (): JSX.Element => (
  <div className={"ai-center d-f f3 flex-col py5 px3"}>
    <Variables />
    <Development />
  </div>
);

export { App };
