/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardTips$$get_Valid
bool Dino_BusSand_App_UI_YachtRacingRewardTips__get_Valid (Dino_BusSand_App_UI_YachtRacingRewardTips_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardTips$$get_Valid
   bool Dino_BusSand_App_UI_YachtRacingRewardTips__get_Valid
   (Dino_BusSand_App_UI_YachtRacingRewardTips_o* __this, const MethodInfo* method); */

uint Dino_BusSand_App_UI_YachtRacingRewardTips__get_Valid_21f1e14(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc25 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc25 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa8638 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
    bRam0000000004fa8638 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar3,0);
  return (uVar2 ^ 0xffffffff) & 1;
}

