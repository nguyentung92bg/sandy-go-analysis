/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel$$Claim
System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BonusBankOpenPanel__Claim (Dino_BusSand_App_UI_BonusBankOpenPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel$$Claim
   System_Collections_IEnumerator_o* Dino_BusSand_App_UI_BonusBankOpenPanel__Claim
   (Dino_BusSand_App_UI_BonusBankOpenPanel_o* __this, const MethodInfo* method); */

long Dino_BusSand_App_UI_BonusBankOpenPanel__Claim_21cc080(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb0178;
  if ((bRam0000000004f9bb1d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0178);
                    /* try { // try from 022cc0b0 to 023cc0bf has its CatchHandler @ 022cc124 */
    bRam0000000004f9bb1d = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
                    /* try { // try from 022cc0d8 to 023cc0df has its CatchHandler @ 022cc108 */
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* try { // try from 022cc0e0 to 023cc147 has its CatchHandler @ 022cbfdc */
  return lVar2;
}

