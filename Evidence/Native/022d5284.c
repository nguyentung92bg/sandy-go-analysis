/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$get_LastUnlocked
int32_t Dino_BusSand_App_UI_PassportPanel__get_LastUnlocked (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$get_LastUnlocked
   int32_t Dino_BusSand_App_UI_PassportPanel__get_LastUnlocked (Dino_BusSand_App_UI_PassportPanel_o*
   __this, const MethodInfo* method); */

int Dino_BusSand_App_UI_PassportPanel__get_LastUnlocked_21d5284(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar1 = Dino_BusSand_App_Meta_PassportFeature__get_CurrentStageIndex_22468d0
                      (*(long *)(param_1 + 0x40),0);
    if (*(long *)(param_1 + 0x40) != 0) {
      iVar2 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0
                        (*(long *)(param_1 + 0x40),0);
      if (iVar2 <= iVar1) {
        iVar1 = iVar2;
      }
      return iVar1 + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

