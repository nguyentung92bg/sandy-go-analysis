/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$DoOpenStart
void Dino_BusSand_App_UI_YachtRacingUi__DoOpenStart (bool isGuide, System_Action_o* once, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$DoOpenStart
   void Dino_BusSand_App_UI_YachtRacingUi__DoOpenStart (bool isGuide, System_Action_o* once, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingUi__DoOpenStart_21f8278(byte param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000004f9bc49 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb1508);
    FUN_02132f7c(PTR_DAT_04cb1810);
    FUN_02132f7c(PTR_DAT_04cb1800);
    bRam0000000004f9bc49 = 1;
  }
  puVar1 = PTR_DAT_04cb1508;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar5 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_YachtRacingStartPanel_Param___ctor_21f2d50(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = param_2;
    *(byte *)(lVar2 + 0x10) = param_1 & 1;
    thunk_FUN_02134474((long *)(lVar2 + 0x18),param_2);
    puVar1 = PTR_DAT_04ca9ae8;
    if (lVar5 != 0) {
      uVar3 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar5,*(undefined8 *)PTR_DAT_04cb1800,2,lVar2,
                         *(undefined8 *)PTR_DAT_04cb1810);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f83b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2 + 0x18))
                  (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

