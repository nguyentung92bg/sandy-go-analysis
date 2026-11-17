/* IL2CPP: Dino.BusSand.App.UI.PassportContinuePanel$$OnClose
void Dino_BusSand_App_UI_PassportContinuePanel__OnClose (Dino_BusSand_App_UI_PassportContinuePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportContinuePanel$$OnClose
   void Dino_BusSand_App_UI_PassportContinuePanel__OnClose
   (Dino_BusSand_App_UI_PassportContinuePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportContinuePanel__OnClose_21cf27c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_DAT_04cb02f8;
  puVar2 = PTR_DAT_04cac7e0;
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bb2e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cb02f8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bb2e = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Action_int____ctor_35ef18c(uVar4,param_1,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__remove_ItemChanged_226f714(uVar4,0);
  if (cRam0000000004f9bba2 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb0350);
    cRam0000000004f9bba2 = '\x01';
  }
  puVar5 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04cb0350 + 0xb8) + 8);
  *puVar5 = 0;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

