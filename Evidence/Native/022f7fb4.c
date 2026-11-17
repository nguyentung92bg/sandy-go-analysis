/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$OpenStart
void Dino_BusSand_App_UI_YachtRacingUi__OpenStart (bool isGuide, System_Action_o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022f800c) */
/* WARNING: Removing unreachable block (ram,0x022f8024) */
/* WARNING: Removing unreachable block (ram,0x022f8034) */
/* WARNING: Removing unreachable block (ram,0x044c3ce4) */
/* WARNING: Removing unreachable block (ram,0x044c3cc0) */
/* WARNING: Removing unreachable block (ram,0x044c3cd0) */
/* WARNING: Removing unreachable block (ram,0x044c3d7c) */
/* WARNING: Removing unreachable block (ram,0x044c3d90) */
/* WARNING: Removing unreachable block (ram,0x044c3ddc) */
/* WARNING: Removing unreachable block (ram,0x044c3d94) */
/* WARNING: Removing unreachable block (ram,0x044c3da8) */
/* WARNING: Removing unreachable block (ram,0x044c3db4) */
/* WARNING: Removing unreachable block (ram,0x044c3dc8) */
/* WARNING: Removing unreachable block (ram,0x044c3d9c) */
/* WARNING: Removing unreachable block (ram,0x044c3d18) */
/* WARNING: Removing unreachable block (ram,0x044c3d48) */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$OpenStart
   void Dino_BusSand_App_UI_YachtRacingUi__OpenStart (bool isGuide, System_Action_o* done, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingUi__OpenStart_21f7fb4(byte param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(param_2);
  uVar3 = Dino_BusSand_App_UI_YachtRacingUi__CanOpenStart_21f809c();
  if ((uVar3 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* WARNING: Could not recover jumptable at 0x022f807c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
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
  lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_UI_YachtRacingStartPanel_Param___ctor_21f2d50(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = lVar2;
    *(byte *)(lVar4 + 0x10) = param_1 & 1;
    thunk_FUN_02134474((long *)(lVar4 + 0x18),lVar2);
    puVar1 = PTR_DAT_04ca9ae8;
    if (lVar6 != 0) {
      uVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar6,*(undefined8 *)PTR_DAT_04cb1800,2,lVar4,
                         *(undefined8 *)PTR_DAT_04cb1810);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f83b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

