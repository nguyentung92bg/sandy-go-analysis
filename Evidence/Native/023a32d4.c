/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$OnValidate
void Dino_BusSand_App_UI_UiTweaks__OnValidate (Dino_BusSand_App_UI_UiTweaks_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$OnValidate
   void Dino_BusSand_App_UI_UiTweaks__OnValidate (Dino_BusSand_App_UI_UiTweaks_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UiTweaks__OnValidate_22a32d4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (cRam0000000004f9c303 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb5b08);
    cRam0000000004f9c303 = '\x01';
  }
  puVar2 = PTR_DAT_04cb5b08;
  lVar3 = *(long *)(*(long *)PTR_DAT_04cb5b08 + 0xb8);
  iVar1 = *(int *)(lVar3 + 0xc);
  if (cRam0000000004f9c304 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb5b08);
    cRam0000000004f9c304 = '\x01';
    lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
  }
  *(int *)(lVar3 + 0xc) = iVar1 + 1;
  return;
}

