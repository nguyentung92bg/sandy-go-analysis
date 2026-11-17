/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$UnlockEffect
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportPanel__UnlockEffect (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$UnlockEffect
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_PassportPanel__UnlockEffect
   (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_PassportPanel__UnlockEffect_21d436c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0648;
  if ((bRam0000000004f9bb6b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0648);
    bRam0000000004f9bb6b = 1;
  }
                    /* try { // try from 022d43a0 to 023d43b3 has its CatchHandler @ 022d43e0 */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
                    /* try { // try from 022d43b4 to 023d43f7 has its CatchHandler @ 022d4358 */
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
  return lVar2;
}

