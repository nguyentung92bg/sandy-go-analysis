/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$.cctor
void Dino_BusSand_App_UI_HomePanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$.cctor
   void Dino_BusSand_App_UI_HomePanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel___cctor_22eda04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_DAT_04cb74b0;
  puVar1 = PTR_DAT_04cad330;
  if ((bRam0000000004f9c450 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb74b0);
    FUN_02132f7c(PTR_DAT_04cad330);
    bRam0000000004f9c450 = 1;
  }
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = _UNK_00e6a998;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = 0x43760000;
  uVar5 = Dino_BusSand_App_UI_UiKit__MenuButtonSize_228c630(_UNK_00e20700,0x43760000,0x3f800000,0);
  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
  *(undefined4 *)(lVar4 + 8) = uVar5;
  *(undefined4 *)(lVar4 + 0xc) = uVar3;
  return;
}

