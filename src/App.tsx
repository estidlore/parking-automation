import type { FC } from "react";
import React from "react";

import { Design, Development, Variables } from "./views";

const App: FC = (): JSX.Element => (
  <div className={"ai-center d-f f3 flex-col py5 px3"}>
    <Design />
    <Variables />
    <Development />
  </div>
);

export { App };
