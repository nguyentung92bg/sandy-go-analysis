/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$SetStageNum
void Dino_BusSand_App_UI_PassportPanel__SetStageNum (Dino_BusSand_App_UI_PassportPanel_o* __this, int32_t stage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$SetStageNum
   void Dino_BusSand_App_UI_PassportPanel__SetStageNum (Dino_BusSand_App_UI_PassportPanel_o* __this,
   int32_t stage, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__SetStageNum_21d6af4(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar1 = PTR_DAT_04cad9b8;
  iStack_24 = param_2;
  if ((bRam0000000004f9bb59 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb07d8);
                    /* try { // try from 022d6b28 to 023d6b3b has its CatchHandler @ 022d7094 */
    FUN_02132f7c(PTR_DAT_04cad9b8);
    FUN_02132f7c(PTR_DAT_04cb07e0);
    FUN_02132f7c(PTR_DAT_04cb07e8);
    bRam0000000004f9bb59 = 1;
  }
  uStack_28 = 0;
  uVar5 = System_Int32__ToString_482d750(&iStack_24,0);
  Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,*(undefined8 *)puVar1,uVar5,0);
  iVar3 = iStack_24;
  puVar2 = PTR_DAT_04cb07e0;
  puVar1 = PTR_DAT_04cb07d8;
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 022d6b98 to 023d6bdf has its CatchHandler @ 022d70a0 */
    iVar4 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0
                      (*(long *)(param_1 + 0x40),0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar1,iVar3 < iVar4,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar2,iVar4 <= iVar3,0);
    puVar1 = PTR_DAT_04cb07e8;
    if (*(long *)(param_1 + 0x40) != 0) {
      uStack_28 = Dino_BusSand_App_Meta_PassportFeature__get_BonusBankCoin_22455c8
                            (*(long *)(param_1 + 0x40),0);
      uVar5 = System_Int32__ToString_482d750(&uStack_28,0);
      Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,*(undefined8 *)puVar1,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

