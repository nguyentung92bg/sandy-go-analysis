/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$OnDestroy
void Dino_BusSand_App_UI_CommerceCoinBar__OnDestroy (Dino_BusSand_App_UI_CommerceCoinBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceCoinBar$$OnDestroy
   void Dino_BusSand_App_UI_CommerceCoinBar__OnDestroy (Dino_BusSand_App_UI_CommerceCoinBar_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommerceCoinBar__OnDestroy_22a833c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9c291 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cb5da0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c291 = 1;
  }
  puVar2 = PTR_DAT_04cb5da0;
  puVar1 = PTR_DAT_04cabaf8;
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
    System_Action_int____ctor_35ef18c(uVar3,param_1,*(undefined8 *)puVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__remove_ItemChanged_226f714(uVar3,0);
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
}

