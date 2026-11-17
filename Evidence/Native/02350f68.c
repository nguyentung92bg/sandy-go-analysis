/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$BindQuitItem
void Dino_BusSand_App_Meta_StreakRateFeature__BindQuitItem (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, UnityEngine_GameObject_o* row, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$BindQuitItem
   void Dino_BusSand_App_Meta_StreakRateFeature__BindQuitItem
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, UnityEngine_GameObject_o* row, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_StreakRateFeature__BindQuitItem_2250f68(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04ca9ae8;
  uVar1 = _UNK_00e20754;
  if ((bRam0000000004f9bb98 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0af8,param_1,0);
    FUN_02132f7c(PTR_DAT_04cb0b00);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bb98 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((param_1 != 0) && ((uVar3 & 1) == 0)) {
    if (param_2 != 0) {
      lVar4 = UnityEngine_GameObject__GetComponent_object__275a5dc
                        (param_2,*(undefined8 *)PTR_DAT_04cb0b00);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar5);
      }
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = UnityEngine_GameObject__AddComponent_object__275a54c
                          (param_2,*(undefined8 *)PTR_DAT_04cb0af8);
      }
      if (lVar4 != 0) {
        Dino_BusSand_App_UI_StreakRateGameRow__Init_21de1c4(uVar1,lVar4,param_1);
        return lVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return 0;
}

