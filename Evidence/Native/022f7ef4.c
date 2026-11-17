/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$Once
System_Action_o* Dino_BusSand_App_UI_YachtRacingUi__Once (System_Action_o* a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$Once
   System_Action_o* Dino_BusSand_App_UI_YachtRacingUi__Once (System_Action_o* a, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04cb17e8;
  if ((bRam0000000004f9bc4c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb17f0);
    FUN_02132f7c(PTR_DAT_04cb17e8);
    bRam0000000004f9bc4c = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  puVar2 = PTR_DAT_04cb17f0;
  puVar1 = PTR_DAT_04caa458;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x18) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar3 + 0x18),param_1);
    uVar4 = *(undefined8 *)puVar1;
    *(undefined1 *)(lVar3 + 0x10) = 0;
    uVar4 = thunk_FUN_0216e89c(uVar4);
    System_Action___ctor_47b5ed0(uVar4,lVar3,*(undefined8 *)puVar2,0);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

