/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$RefreshRestoreTime
void Dino_BusSand_App_UI_PowerBuyPanel__RefreshRestoreTime (Dino_BusSand_App_UI_PowerBuyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PowerBuyPanel$$RefreshRestoreTime
   void Dino_BusSand_App_UI_PowerBuyPanel__RefreshRestoreTime (Dino_BusSand_App_UI_PowerBuyPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PowerBuyPanel__RefreshRestoreTime_22b0b44(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c2ca & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c2ca = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  puVar1 = PTR_DAT_04cabaf8;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
    iVar3 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
    if (iVar2 < iVar3) {
      plVar5 = *(long **)(param_1 + 0x48);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar2 = Dino_BusSand_App_Meta_Profile__SecondsToNextHeart_2272b38(0);
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
      }
      uVar6 = Dino_BusSand_App_UI_CommerceUi__TimeString_22aae80((float)iVar2,1,1);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023b0c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x518))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x520));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

