/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$OpenStartDelayed
void Dino_BusSand_App_UI_YachtRacingUi__OpenStartDelayed (bool isGuide, System_Action_o* done, float delaySeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingUi$$OpenStartDelayed
   void Dino_BusSand_App_UI_YachtRacingUi__OpenStartDelayed (bool isGuide, System_Action_o* done,
   float delaySeconds, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingUi__OpenStartDelayed_21f7fbc
               (float param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = Dino_BusSand_App_UI_YachtRacingUi__Once_21f7ef4(param_3);
  uVar3 = Dino_BusSand_App_UI_YachtRacingUi__CanOpenStart_21f809c();
  if ((uVar3 & 1) != 0) {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    if (0.0 < param_1) {
      lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      if (lVar7 == 0) goto LAB_022f8098;
      uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar7,0);
      if ((uVar3 & 1) != 0) {
        lVar2 = Dino_BusSand_App_UI_YachtRacingUi__DelayedStart_21f81e8(param_1,param_2 & 1,lVar2);
        if (lVar2 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar4 = thunk_FUN_0216e89c();
          uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar4,uVar5,0);
        }
        else {
          uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar3 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (lVar7 != 0) {
              lVar6 = *(long *)(lVar7 + 0x10);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
              }
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar6,lVar2);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar4 = thunk_FUN_0216e89c();
          uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar4,uVar5,0);
        }
        uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar4,uVar5);
      }
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
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    Dino_BusSand_App_UI_YachtRacingStartPanel_Param___ctor_21f2d50(lVar7,0);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x18) = lVar2;
      *(byte *)(lVar7 + 0x10) = param_2 & 1;
      thunk_FUN_02134474((long *)(lVar7 + 0x18),lVar2);
      puVar1 = PTR_DAT_04ca9ae8;
      if (lVar6 != 0) {
        uVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar6,*(undefined8 *)PTR_DAT_04cb1800,2,lVar7,
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
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022f807c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
LAB_022f8098:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

