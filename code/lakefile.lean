import Lake
open Lake DSL

package «dmtl4» where
  -- add package configuration options here

lean_lib «DMTL4» where
  -- add library configuration options here

@[default_target]
lean_exe «dmtl4»  where
  root := `Main
