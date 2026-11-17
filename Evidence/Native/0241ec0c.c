/* IL2CPP: Dino.BusSand.App.UI.ForceUpdatePanel$$set_Blocking
void Dino_BusSand_App_UI_ForceUpdatePanel__set_Blocking (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ForceUpdatePanel$$set_Blocking
   void Dino_BusSand_App_UI_ForceUpdatePanel__set_Blocking (bool value, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_ForceUpdatePanel__set_Blocking_231ec0c(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cb1b88;
                    /* try { // try from 0241ec24 to 0251ec27 has its CatchHandler @ 0241ed10 */
                    /* try { // try from 0241ec28 to 0251ec33 has its CatchHandler @ 0241ed28 */
  if ((bRam0000000004f9c5a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b88);
    bRam0000000004f9c5a3 = 1;
  }
                    /* try { // try from 0241ec44 to 0251ec63 has its CatchHandler @ 0241ed24 */
  **(byte **)(*(long *)puVar1 + 0xb8) = param_1 & 1;
  return;
}

