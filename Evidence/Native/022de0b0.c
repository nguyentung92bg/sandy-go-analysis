/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$Attach
Dino_BusSand_App_UI_StreakRateGameRow_o* Dino_BusSand_App_UI_StreakRateGameRow__Attach (UnityEngine_GameObject_o* row, Dino_BusSand_App_Meta_StreakRateFeature_o* f, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateGameRow$$Attach
   Dino_BusSand_App_UI_StreakRateGameRow_o* Dino_BusSand_App_UI_StreakRateGameRow__Attach
   (UnityEngine_GameObject_o* row, Dino_BusSand_App_Meta_StreakRateFeature_o* f, float delay, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_StreakRateGameRow__Attach_21de0b0
               (undefined4 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb98 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0af8);
    FUN_02132f7c(PTR_DAT_04cb0b00);
                    /* try { // try from 022de100 to 023de163 has its CatchHandler @ 022de100
                       catch() { ... } // from try @ 022de100 with catch @ 022de100
                       catch() { ... } // from try @ 022de17c with catch @ 022de100
                       catch() { ... } // from try @ 022de23c with catch @ 022de100 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bb98 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((param_3 != 0) && ((uVar2 & 1) == 0)) {
    if (param_2 != 0) {
      lVar3 = UnityEngine_GameObject__GetComponent_object__275a5dc
                        (param_2,*(undefined8 *)PTR_DAT_04cb0b00);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 022de164 to 023de17b has its CatchHandler @ 022de23c */
        thunk_FUN_0218fdac(lVar4);
      }
      uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar3,0,0);
      if ((uVar2 & 1) != 0) {
                    /* try { // try from 022de17c to 023de237 has its CatchHandler @ 022de100 */
        lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (param_2,*(undefined8 *)PTR_DAT_04cb0af8);
      }
      if (lVar3 != 0) {
        Dino_BusSand_App_UI_StreakRateGameRow__Init_21de1c4(param_1,lVar3,param_3);
        return lVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

