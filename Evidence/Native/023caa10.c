/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$RestoreExtra
void Dino_BusSand_App_UI_GuidePanel__RestoreExtra (Dino_BusSand_App_UI_GuidePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$RestoreExtra
   void Dino_BusSand_App_UI_GuidePanel__RestoreExtra (Dino_BusSand_App_UI_GuidePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__RestoreExtra_22caa10(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c376 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c376 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar3,0);
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  thunk_FUN_02134474(param_1 + 0x100,0);
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_UI_UiKit__StopBreathing_228972c(uVar3,0);
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (param_1 + 0x108U >> 0xc & 0x3f),
                 (param_1 + 0x108U >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

