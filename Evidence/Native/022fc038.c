/* IL2CPP: Dino.BusSand.App.UI.RescueTimerWidget$$Update
void Dino_BusSand_App_UI_RescueTimerWidget__Update (Dino_BusSand_App_UI_RescueTimerWidget_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RescueTimerWidget$$Update
   void Dino_BusSand_App_UI_RescueTimerWidget__Update (Dino_BusSand_App_UI_RescueTimerWidget_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_RescueTimerWidget__Update_21fc038(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iStack_34;
  
  puVar2 = PTR_DAT_04cac868;
  if ((bRam0000000004f9bc68 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caccc8);
    FUN_02132f7c(PTR_DAT_04cacdd0);
    bRam0000000004f9bc68 = 1;
  }
  iStack_34 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar7 = *(long *)puVar1;
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (lVar4 == 0) goto LAB_022fc4a4;
    uVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_RescuePending_229c0e0(lVar4,0);
    uVar3 = uVar3 & 1;
  }
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 == 0) goto LAB_022fc4a4;
  fVar10 = (float)UnityEngine_CanvasGroup__get_alpha_467ac88(lVar7,0);
  fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar12 = 0.0;
  if (uVar3 != 0) {
    fVar12 = 1.0;
  }
  fVar13 = -(fVar11 * 4.0);
  if (0.0 <= fVar12 - fVar10) {
    fVar13 = fVar11 * 4.0;
  }
  fVar13 = fVar10 + fVar13;
  if (ABS(fVar12 - fVar10) <= fVar11 * 4.0) {
    fVar13 = fVar12;
  }
  UnityEngine_CanvasGroup__set_alpha_467ad3c(fVar13,lVar7,0);
  if (uVar3 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
    if ((uVar5 & 1) == 0) {
      if (lVar4 != 0) {
        fVar10 = (float)Dino_BusSand_App_Gameplay_GameplayController__get_RescueSecondsLeft_229c080
                                  (lVar4,0);
        fVar12 = 0.0;
        if (0.0 <= fVar10) {
          fVar12 = fVar10;
        }
        if (cRam0000000004f9ba93 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa200);
          cRam0000000004f9ba93 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iStack_34 = -0x80000000;
        if ((float)(int)fVar12 != INFINITY) {
          iStack_34 = (int)fVar12;
        }
        if (iStack_34 != *(int *)(param_1 + 0x30)) {
          plVar8 = *(long **)(param_1 + 0x28);
          *(int *)(param_1 + 0x30) = iStack_34;
          uVar9 = Dino_BusSand_App_UI_RescueTimerWidget__Name_21fc4a8();
          uVar6 = System_Int32__ToString_482d750(&iStack_34,0);
          uVar9 = System_String__Concat_46d30e8
                            (uVar9,*(undefined8 *)PTR_DAT_04caccc8,uVar6,
                             *(undefined8 *)PTR_DAT_04cacdd0,0);
          if (plVar8 == (long *)0x0) goto LAB_022fc4a4;
          (**(code **)(*plVar8 + 0x518))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x520));
          if ((iStack_34 < 0x10) &&
             (*(undefined4 *)(param_1 + 0x34) = 0x3f800000, puVar2 = PTR_DAT_04cad568, 0 < iStack_34
             )) {
            if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b94e == '\0') {
              FUN_02132f7c(PTR_DAT_04cad568);
              cRam0000000004f9b94e = '\x01';
            }
            lVar4 = *(long *)puVar2;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar4 = *(long *)puVar2;
            }
            if (**(long **)(lVar4 + 0xb8) != 0) {
              Dino_BusSand_GameAudio__ClockTick_23837b0
                        ((float)iStack_34 / -15.0 + 1.0,**(long **)(lVar4 + 0xb8),0);
            }
          }
        }
        fVar10 = *(float *)(param_1 + 0x34);
        fVar12 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
        fVar10 = fVar10 + fVar12 * -3.0;
        fVar12 = 0.0;
        if (0.0 <= fVar10) {
          fVar12 = fVar10;
        }
        *(float *)(param_1 + 0x34) = fVar12;
        lVar4 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        if (cRam0000000004f9b65e == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65e = '\x01';
        }
        if (lVar4 != 0) {
          fVar13 = *(float *)(param_1 + 0x20);
          lVar7 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
          fVar12 = *(float *)(lVar7 + 0x14);
          fVar10 = (float)func_0x049b5320(*(float *)(param_1 + 0x34) * _UNK_00e2082c);
          uVar9 = *(undefined8 *)(lVar7 + 0xc);
          fVar11 = fVar10 * _UNK_00e201f4 + 1.0;
                    /* try { // try from 022fc47c to 023fc50b has its CatchHandler @ 022fc47c
                       catch(type#1 @ 00000000) { ... } // from try @ 022fc47c with catch @ 022fc47c
                       catch(type#1 @ 00000000) { ... } // from try @ 022fc530 with catch @ 022fc47c
                       catch(type#1 @ 00000000) { ... } // from try @ 022fc5a0 with catch @ 022fc47c
                       catch(type#1 @ 00000000) { ... } // from try @ 022fc644 with catch @ 022fc47c
                       catch(type#1 @ 00000000) { ... } // from try @ 022fc6b4 with catch @ 022fc47c
                       catch(type#1 @ 00000000) { ... } // from try @ 022fc744 with catch @ 022fc47c
                       catch(type#1 @ 00000000) { ... } // from try @ 022fc7c4 with catch @ 022fc47c
                        */
          fVar10 = (float)((ulong)uVar9 >> 0x20) * fVar13 * fVar11;
          UnityEngine_Transform__set_localScale_43d1be0
                    (CONCAT44(fVar10,(float)uVar9 * fVar13 * fVar11),fVar10,fVar12 * fVar13 * fVar11
                     ,lVar4,0);
          return;
        }
      }
      goto LAB_022fc4a4;
    }
  }
  lVar4 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (cRam0000000004f9b65e == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  if (lVar4 != 0) {
    if ((bRam0000000004fa8b3e & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b3e = 1;
    }
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 != 0) {
        if (pcRam0000000004fa8bf0 == (code *)0x0) {
          pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
        }
        (*pcRam0000000004fa8bf0)(lVar4,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_022fc4a4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

