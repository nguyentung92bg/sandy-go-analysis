/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$OnDestroy
void Dino_BusSand_App_UI_CommonNamePlateView__OnDestroy (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonNamePlateView$$OnDestroy
   void Dino_BusSand_App_UI_CommonNamePlateView__OnDestroy
   (Dino_BusSand_App_UI_CommonNamePlateView_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonNamePlateView__OnDestroy_22d0a8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9c3aa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4720);
    FUN_02132f7c(PTR_DAT_04cb6c48);
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c3aa = 1;
  }
  puVar2 = PTR_DAT_04cb6c48;
  puVar1 = PTR_DAT_04cae570;
  if (*(char *)(param_1 + 0x59) != '\0') {
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4720);
    System_Action_Int32Enum____ctor_35ef240(uVar3,param_1,*(undefined8 *)puVar2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_PlayerIdentity__remove_Changed_226bcc4(uVar3,0);
  }
  *(undefined1 *)(param_1 + 0x59) = 0;
  return;
}

