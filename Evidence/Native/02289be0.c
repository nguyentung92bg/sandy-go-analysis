/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$TileNode
System_String_o* Dino_BusSand_App_UI_SimpleActivityContinuePanel__TileNode (int32_t id, System_String_o** textPath, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$TileNode
   System_String_o* Dino_BusSand_App_UI_SimpleActivityContinuePanel__TileNode (int32_t id,
   System_String_o** textPath, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_SimpleActivityContinuePanel__TileNode_2189be0(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f9b970 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadb48);
    FUN_02132f7c(PTR_DAT_04cadbb8);
    FUN_02132f7c(PTR_DAT_04cadb50);
    FUN_02132f7c(PTR_DAT_04cadbc0);
    FUN_02132f7c(PTR_DAT_04cadb58);
    FUN_02132f7c(PTR_DAT_04cadb60);
    FUN_02132f7c(PTR_DAT_04cadbc8);
    FUN_02132f7c(PTR_DAT_04cadbd0);
    bRam0000000004f9b970 = 1;
  }
  if (param_1 < 4) {
    if (param_1 == 2) {
                    /* try { // try from 02289cf0 to 02389d47 has its CatchHandler @ 02289c88 */
      *param_2 = *(undefined8 *)PTR_DAT_04cadbc8;
      thunk_FUN_02134474(param_2);
      puVar1 = (undefined8 *)PTR_DAT_04cadb50;
    }
    else {
      if (param_1 != 3) {
LAB_02289cd4:
                    /* try { // try from 02289cdc to 02389cef has its CatchHandler @ 02289d2c */
        *param_2 = 0;
        thunk_FUN_02134474(param_2,0);
        return 0;
      }
                    /* try { // try from 02289c88 to 02389cdb has its CatchHandler @ 02289c88
                       catch() { ... } // from try @ 02289c88 with catch @ 02289c88
                       catch() { ... } // from try @ 02289cf0 with catch @ 02289c88 */
      *param_2 = *(undefined8 *)PTR_DAT_04cadbd0;
      thunk_FUN_02134474(param_2);
      puVar1 = (undefined8 *)PTR_DAT_04cadb48;
    }
  }
  else if (param_1 == 4) {
    *param_2 = *(undefined8 *)PTR_DAT_04cadbc0;
    thunk_FUN_02134474(param_2);
                    /* catch() { ... } // from try @ 02289cdc with catch @ 02289d2c */
    puVar1 = (undefined8 *)PTR_DAT_04cadb58;
  }
  else {
    if (param_1 != 5) goto LAB_02289cd4;
    *param_2 = *(undefined8 *)PTR_DAT_04cadbb8;
    thunk_FUN_02134474(param_2);
    puVar1 = (undefined8 *)PTR_DAT_04cadb60;
  }
  return *puVar1;
}

