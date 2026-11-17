/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingGuide$$OnBoot
void Dino_BusSand_App_UI_PlayerSettingGuide__OnBoot (Dino_BusSand_App_UI_PlayerSettingGuide_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingGuide$$OnBoot
   void Dino_BusSand_App_UI_PlayerSettingGuide__OnBoot (Dino_BusSand_App_UI_PlayerSettingGuide_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingGuide__OnBoot_22ffa14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cb7b60;
  if ((bRam0000000004f9c4cd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacd28);
    FUN_02132f7c(PTR_DAT_04cb7b68);
    FUN_02132f7c(PTR_DAT_04cb7b60);
    bRam0000000004f9c4cd = 1;
  }
  puVar1 = PTR_DAT_04cacd28;
  if (**(char **)(*(long *)puVar2 + 0xb8) != '\0') {
    return;
  }
  **(char **)(*(long *)puVar2 + 0xb8) = '\x01';
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action_object____ctor_35f0008(uVar6,0,*(undefined8 *)PTR_DAT_04cb7b68,0);
  puVar2 = PTR_DAT_04cb1b68;
  if ((bRam0000000004f9bc8a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacd28,0);
    FUN_02132f7c(PTR_DAT_04cb1b68);
    bRam0000000004f9bc8a = 1;
  }
  puVar1 = PTR_DAT_04cacd28;
  lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  do {
    lVar4 = System_Delegate__Combine_4872324(lVar7,uVar6,0);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar8 = *(undefined8 *)puVar1;
      lVar5 = thunk_FUN_0216e7a0(lVar4,uVar8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar4,uVar8);
      }
    }
    lVar4 = FUN_0216aff4(*(long *)(*(long *)puVar2 + 0xb8) + 8,lVar5,lVar7);
    bVar3 = lVar4 != lVar7;
    lVar7 = lVar4;
  } while (bVar3);
  return;
}

