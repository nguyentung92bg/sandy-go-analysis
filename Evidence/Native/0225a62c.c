/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Run
void Dino_BusSand_App_QaPilot_Runner__Run (Dino_BusSand_App_QaPilot_Runner_o* __this, System_String_o* line, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Run
   void Dino_BusSand_App_QaPilot_Runner__Run (Dino_BusSand_App_QaPilot_Runner_o* __this,
   System_String_o* line, const MethodInfo* method); */

void Dino_BusSand_App_QaPilot_Runner__Run_215a62c(long param_1,long param_2)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  float fVar21;
  undefined8 auStack_78 [2];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = PTR_DAT_04ca9b80;
  if ((bRam0000000004f9b7f0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b80);
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cabca8);
    FUN_02132f7c(PTR_DAT_04cabcb0);
    FUN_02132f7c(PTR_DAT_04cabcb8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabcc0);
    FUN_02132f7c(PTR_DAT_04cab958);
    FUN_02132f7c(PTR_DAT_04caba98);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cabcc8);
    FUN_02132f7c(PTR_DAT_04cabcd0);
    FUN_02132f7c(PTR_DAT_04caba88);
    FUN_02132f7c(PTR_DAT_04cabcd8);
    FUN_02132f7c(PTR_DAT_04cabce0);
    FUN_02132f7c(PTR_DAT_04cabce8);
    FUN_02132f7c(PTR_DAT_04cabcf0);
    FUN_02132f7c(PTR_DAT_04cabba0);
    FUN_02132f7c(PTR_DAT_04cabcf8);
    FUN_02132f7c(PTR_DAT_04cabd00);
    FUN_02132f7c(PTR_DAT_04cabd08);
    FUN_02132f7c(PTR_DAT_04cab2c8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cabd18);
    FUN_02132f7c(PTR_DAT_04cabd20);
    FUN_02132f7c(PTR_DAT_04cabd28);
    FUN_02132f7c(PTR_DAT_04cabc30);
    FUN_02132f7c(PTR_DAT_04cabd30);
    FUN_02132f7c(PTR_DAT_04cabaa0);
    FUN_02132f7c(PTR_DAT_04cabd38);
    FUN_02132f7c(PTR_DAT_04cabd40);
    FUN_02132f7c(PTR_DAT_04cabd48);
    FUN_02132f7c(PTR_DAT_04cabd50);
    FUN_02132f7c(PTR_DAT_04cabc58);
    FUN_02132f7c(PTR_DAT_04cabd58);
    FUN_02132f7c(PTR_DAT_04cabd60);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cabd68);
    FUN_02132f7c(PTR_DAT_04cabd70);
    bRam0000000004f9b7f0 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  lVar13 = FUN_02133068(*(undefined8 *)puVar5,1);
  if (lVar13 == 0) goto LAB_0225b2ec;
  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0225b2f0;
  *(undefined2 *)(lVar13 + 0x20) = 0x20;
  if ((param_2 == 0) ||
     (lVar13 = System_String__Split_46d5574(param_2,lVar13,3,1,0), puVar4 = PTR_DAT_04ca9c30,
     lVar13 == 0)) goto LAB_0225b2ec;
  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0225b2f0;
  lVar20 = *(long *)(lVar13 + 0x20);
  if (*(int *)(lVar13 + 0x18) < 2) {
    uVar14 = *(undefined8 *)PTR_DAT_04ca9c30;
LAB_0225a8f8:
    lVar13 = *(long *)puVar4;
  }
  else {
    if (*(long *)(lVar13 + 0x28) == 0) goto LAB_0225b2ec;
    uVar14 = System_String__ToLowerInvariant_46d6ce8(*(long *)(lVar13 + 0x28),0);
    if (*(int *)(lVar13 + 0x18) < 3) goto LAB_0225a8f8;
    if (*(long *)(lVar13 + 0x30) == 0) goto LAB_0225b2ec;
    lVar13 = System_String__Trim_46d6ee0(*(long *)(lVar13 + 0x30),0);
  }
  uVar10 = _PrivateImplementationDetails___ComputeStringHash_22a1900(uVar14,0);
  if (uVar10 < 0x783132f7) {
    if (uVar10 < 0x165df08a) {
      if (uVar10 == 0xb352f64) {
        uVar15 = System_String__op_Equality_46d1108(uVar14,*(undefined8 *)PTR_DAT_04cabd60,0);
        puVar5 = PTR_DAT_04cabcf8;
        if ((uVar15 & 1) != 0) {
          uVar15 = System_String__op_Inequality_46d110c(lVar13,*(undefined8 *)PTR_DAT_04cabcf8,0);
          if (((uVar15 & 1) == 0) ||
             (uVar15 = System_String__op_Inequality_46d110c
                                 (lVar13,*(undefined8 *)PTR_DAT_04cabd70,0),
             plVar16 = (long *)PTR_DAT_04cabd28, (uVar15 & 1) == 0)) {
            bVar9 = System_String__op_Equality_46d1108(lVar13,*(undefined8 *)puVar5,0);
            bVar8 = 1;
            *(byte *)(*(long *)(*(long *)PTR_DAT_04cab958 + 0xb8) + 1) = bVar9 & 1;
            goto LAB_0225ae54;
          }
          goto LAB_0225aeb0;
        }
      }
      else if ((uVar10 == 0x165df089) &&
              (uVar15 = System_String__op_Equality_46d1108(uVar14,*(undefined8 *)PTR_DAT_04cabd30,0)
              , (uVar15 & 1) != 0)) {
        lVar13 = *(long *)PTR_DAT_04cabd00;
LAB_0225aa6c:
        bVar8 = 1;
        goto LAB_0225ae54;
      }
    }
    else if (uVar10 == 0x5bb421a2) {
      uVar15 = System_String__op_Equality_46d1108(uVar14,*(undefined8 *)PTR_DAT_04cabcf0,0);
      puVar5 = PTR_DAT_04caba50;
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar13 = *(long *)puVar5;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar5;
        }
        puVar4 = PTR_DAT_04ca9ae8;
        uVar14 = **(undefined8 **)(lVar13 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar15 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
        lVar13 = 0;
        if ((uVar15 & 1) != 0) {
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          lVar13 = *(long *)puVar5;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar13 = *(long *)puVar5;
          }
          if (**(long **)(lVar13 + 0xb8) == 0) goto LAB_0225b2ec;
          lVar13 = *(long *)(**(long **)(lVar13 + 0xb8) + 0x28);
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
        lVar11 = 0;
        if ((uVar15 & 1) != 0) {
          if (lVar13 == 0) goto LAB_0225b2ec;
          lVar11 = Dino_BusSand_App_UI_UIManager__HandleBack_21ff160(lVar13,0);
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        bVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
        uVar15 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
        if ((uVar15 & 1) == 0) {
          lVar13 = *(long *)PTR_DAT_04cabd58;
        }
        else {
          if ((lVar11 == 0) ||
             (plVar16 = (long *)System_Object__GetType_4876970(lVar11,0), plVar16 == (long *)0x0))
          goto LAB_0225b2ec;
          lVar13 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
        }
        if (param_1 == 0) goto LAB_0225b2ec;
        bVar8 = bVar8 & 1;
        goto LAB_0225ae54;
      }
    }
    else if ((uVar10 == 0x783132f6) &&
            (uVar15 = System_String__op_Equality_46d1108(uVar14,*(undefined8 *)PTR_DAT_04cabc58,0),
            (uVar15 & 1) != 0)) {
      Dino_BusSand_App_QaPilot_Runner__WriteState_21588b0(param_1);
      lVar13 = *(long *)puVar4;
      goto LAB_0225aa6c;
    }
  }
  else if (uVar10 < 0xaaf74aa3) {
    if (uVar10 == 0xa1c9924b) {
      uVar15 = System_String__op_Equality_46d1108(uVar14,*(undefined8 *)PTR_DAT_04cabc30,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_04caba98 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar13 = Dino_BusSand_App_QaPilot_Runner__Guide_215bce8();
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar15 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
        plVar16 = (long *)PTR_DAT_04cabcd8;
        if ((uVar15 & 1) == 0) {
          if (lVar13 == 0) goto LAB_0225b2ec;
          uVar15 = Dino_BusSand_App_UI_GuidePanel__get_WaitingForTap_22c7d28(lVar13,0);
          plVar16 = (long *)PTR_DAT_04cabcd8;
          if ((uVar15 & 1) != 0) {
            Dino_BusSand_App_UI_GuidePanel__Tap_22ccfe8
                      (*(undefined4 *)(lVar13 + 0x44),*(undefined4 *)(lVar13 + 0x48),lVar13,0);
            uStack_64 = 0;
            if (*(long *)(lVar13 + 0x38) != 0) {
              uStack_64 = *(undefined4 *)(*(long *)(lVar13 + 0x38) + 0x10);
            }
            uVar12 = *(undefined8 *)PTR_DAT_04cabcc8;
            uVar14 = System_Int32__ToString_482d750(&uStack_64,0);
            uVar15 = System_String__Concat_46c82e0(uVar12,uVar14,0);
            if (param_1 == 0) goto LAB_0225b2ec;
LAB_0225b180:
            uVar10 = 1;
            uVar18 = uVar15;
LAB_0225b18c:
            Dino_BusSand_App_QaPilot_Runner__Reply_2157ac4(uVar15,lVar20,uVar10,uVar18);
            return;
          }
        }
LAB_0225aeb0:
        lVar13 = *plVar16;
        bVar8 = 0;
        goto LAB_0225ae54;
      }
    }
    else if ((uVar10 == 0xaaf74aa2) &&
            (uVar15 = System_String__op_Equality_46d1108(uVar14,*(undefined8 *)PTR_DAT_04cabd68,0),
            (uVar15 & 1) != 0)) {
      lVar11 = Dino_BusSand_App_QaPilot_Runner__FindClickable_215b2f4(uVar15,lVar13,&uStack_60);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar15 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
      if ((uVar15 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar15 = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848(0);
        if ((uVar15 & 1) != 0) {
          uVar10 = 0;
          uVar18 = *(ulong *)PTR_DAT_04cabd18;
          goto LAB_0225b18c;
        }
        if (*(int *)(*(long *)PTR_DAT_04caba98 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar15 = Dino_BusSand_App_QaPilot_Runner__Reachable_215b954(lVar11);
        uVar14 = uStack_60;
        if ((uVar15 & 1) != 0) {
          if (lVar11 != 0) {
            uVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0);
            if (*(int *)(*(long *)PTR_DAT_04cabca8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabca8);
            }
            uVar12 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
            uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cabcc0);
            UnityEngine_EventSystems_PointerEventData___ctor_46a11f8(uVar17,uVar12,0);
            if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar12 = FUN_0226a360(0);
            uVar10 = UnityEngine_EventSystems_ExecuteEvents__Execute_object__2745da0
                               (uVar14,uVar17,uVar12,*(undefined8 *)PTR_DAT_04cabcb0);
            uVar14 = uStack_60;
            uVar12 = UnityEngine_Object__get_name_43c71a4(lVar11,0);
            uVar15 = System_String__Concat_46d2b84(uVar14,*(undefined8 *)PTR_DAT_04cabd10,uVar12,0);
            uVar10 = uVar10 & 1;
            uVar18 = uVar15;
            goto LAB_0225b18c;
          }
LAB_0225b2ec:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (lVar11 == 0) goto LAB_0225b2ec;
        uVar12 = UnityEngine_Object__get_name_43c71a4(lVar11,0);
        uVar15 = System_String__Concat_46d30e8
                           (*(undefined8 *)PTR_DAT_04cabd40,uVar14,*(undefined8 *)PTR_DAT_04cabd10,
                            uVar12,0);
      }
      else {
        uVar15 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabcd0,lVar13,0);
      }
      uVar10 = 0;
      uVar18 = uVar15;
      goto LAB_0225b18c;
    }
  }
  else if (uVar10 == 0xac47e6f5) {
    uVar15 = System_String__op_Equality_46d1108(uVar14,*(undefined8 *)PTR_DAT_04cabd38,0);
    if ((uVar15 & 1) != 0) {
      uVar15 = System_String__IsNullOrEmpty_46d2084(lVar13,0);
      if (param_1 != 0) {
        lVar11 = lVar20;
        if ((uVar15 & 1) == 0) {
          lVar11 = lVar13;
        }
        lVar13 = Dino_BusSand_App_QaPilot_Runner__Shot_215be74(param_1,lVar20,lVar11);
        if (lVar13 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar12 = thunk_FUN_0216e89c();
          uVar14 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar12,uVar14,0);
        }
        else {
          uVar15 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar15 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (param_1 != 0) {
              lVar20 = *(long *)(param_1 + 0x10);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
              }
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar20,lVar13);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar12 = thunk_FUN_0216e89c();
          uVar14 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar12,uVar14,0);
        }
        uVar14 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar12,uVar14);
      }
      goto LAB_0225b2ec;
    }
  }
  else if ((uVar10 == 0xc2cbd863) &&
          (uVar15 = System_String__op_Equality_46d1108(uVar14,*(undefined8 *)PTR_DAT_04cabba0,0),
          (uVar15 & 1) != 0)) {
    lVar11 = FUN_02133068(*(undefined8 *)puVar5,1);
    if (lVar11 == 0) goto LAB_0225b2ec;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0225b2f0;
    *(undefined2 *)(lVar11 + 0x20) = 0x20;
    if ((lVar13 == 0) || (lVar13 = System_String__Split_46d54fc(lVar13,lVar11,1,0), lVar13 == 0))
    goto LAB_0225b2ec;
    puVar19 = (undefined8 *)PTR_DAT_04ca9c30;
    if (*(long *)(lVar13 + 0x18) != 0) {
      if ((int)*(long *)(lVar13 + 0x18) == 0) goto LAB_0225b2f0;
      puVar19 = (undefined8 *)(lVar13 + 0x20);
    }
    uVar14 = *puVar19;
    uVar15 = System_String__op_Inequality_46d110c(uVar14,*(undefined8 *)PTR_DAT_04cabce0,0);
    if ((((uVar15 & 1) == 0) ||
        (uVar15 = System_String__op_Inequality_46d110c(uVar14,*(undefined8 *)PTR_DAT_04cabaa0,0),
        (uVar15 & 1) == 0)) ||
       (uVar15 = System_String__op_Inequality_46d110c(uVar14,*(undefined8 *)PTR_DAT_04caba88,0),
       plVar16 = (long *)PTR_DAT_04cabce8, (uVar15 & 1) == 0)) {
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      fVar21 = 0.25;
      if ((1 < *(int *)(lVar13 + 0x18)) &&
         (uVar15 = System_Single__TryParse_4842d84
                             (*(undefined8 *)(lVar13 + 0x28),0xa7,uVar12,(long)&uStack_58 + 4,0),
         fVar21 = 0.25, (uVar15 & 1) != 0)) {
        fVar2 = 3.0;
        if (uStack_58._4_4_ <= 3.0) {
          fVar2 = uStack_58._4_4_;
        }
        fVar21 = _UNK_00e20754;
        if (_UNK_00e20754 <= uStack_58._4_4_) {
          fVar21 = fVar2;
        }
      }
      if (param_1 == 0) goto LAB_0225b2ec;
      iVar1 = *(int *)(lVar13 + 0x18);
      *(float *)(param_1 + 0x38) = fVar21;
      fVar21 = 1.0;
      if ((2 < iVar1) &&
         (uVar15 = System_Single__TryParse_4842d84
                             (*(undefined8 *)(lVar13 + 0x30),0xa7,uVar12,&uStack_58,0), fVar21 = 1.0
         , (uVar15 & 1) != 0)) {
        fVar2 = 5.0;
        if ((float)uStack_58 <= 5.0) {
          fVar2 = (float)uStack_58;
        }
        fVar21 = _UNK_00e20754;
        if (_UNK_00e20754 <= (float)uStack_58) {
          fVar21 = fVar2;
        }
      }
      *(float *)(param_1 + 0x3c) = fVar21;
      *(undefined8 *)(param_1 + 0x30) = uVar14;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar14);
      fVar21 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      uVar17 = *(undefined8 *)PTR_DAT_04caa038;
      *(float *)(param_1 + 0x48) = fVar21 + _UNK_00e207cc;
      lVar13 = FUN_02133068(uVar17,5);
      if (lVar13 == 0) goto LAB_0225b2ec;
      if (*(int *)(lVar13 + 0x18) == 0) {
LAB_0225b2f0:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined8 *)(lVar13 + 0x20) = uVar14;
      thunk_FUN_02134474((undefined8 *)(lVar13 + 0x20),uVar14);
      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_0225b2f0;
      *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)PTR_DAT_04cabd20;
      thunk_FUN_02134474((undefined8 *)(lVar13 + 0x28));
      uVar14 = System_Single__ToString_4842760
                         ((float *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cab2c8,uVar12,0);
      if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_0225b2f0;
      *(undefined8 *)(lVar13 + 0x30) = uVar14;
      thunk_FUN_02134474((undefined8 *)(lVar13 + 0x30),uVar14);
      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) == 0) goto LAB_0225b2f0;
      *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)PTR_DAT_04cabd50;
      thunk_FUN_02134474((undefined8 *)(lVar13 + 0x38));
      uVar14 = System_Single__ToString_4842760
                         ((float *)(param_1 + 0x3c),*(undefined8 *)PTR_DAT_04cabd48,uVar12,0);
      if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_0225b2f0;
      *(undefined8 *)(lVar13 + 0x40) = uVar14;
      thunk_FUN_02134474();
      uVar15 = System_String__Concat_46d31f0(lVar13,0);
      goto LAB_0225b180;
    }
    goto LAB_0225aeb0;
  }
  lVar13 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cabd08,uVar14,0);
  bVar8 = 0;
LAB_0225ae54:
  puVar4 = PTR_DAT_04ca9b50;
  puVar5 = PTR_DAT_04ca9b08;
  if ((bRam0000000004f9b7f1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caab38);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04caa398);
    FUN_02132f7c(PTR_DAT_04caba30);
    FUN_02132f7c(PTR_DAT_04caba38);
    FUN_02132f7c(PTR_DAT_04caba40);
    FUN_02132f7c(PTR_DAT_04caba48);
    bRam0000000004f9b7f1 = 1;
  }
  uStack_68 = 0;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(lVar11,*(undefined8 *)puVar4)
  ;
  puVar7 = PTR_DAT_04caba48;
  puVar6 = PTR_DAT_04caba30;
  puVar4 = PTR_DAT_04caab38;
  puVar5 = PTR_DAT_04caa200;
  if (lVar11 != 0) {
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar11,*(undefined8 *)PTR_DAT_04caba40,lVar20,*(undefined8 *)PTR_DAT_04caab38);
    puVar3 = PTR_DAT_04ca9ac8;
    uStack_58._0_5_ = CONCAT14(bVar8,(float)uStack_58);
    uVar14 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),(long)&uStack_58 + 4);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar11,*(undefined8 *)puVar6,uVar14,*(undefined8 *)puVar4);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar11,*(undefined8 *)puVar7,lVar13,*(undefined8 *)puVar4);
    fVar21 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b890 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b890 = '\x01';
    }
    puVar6 = PTR_DAT_04caba38;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    auStack_78[0] = System_Math__Round_48312e4((double)fVar21,2,0,0);
    uVar14 = FUN_02133100(*(undefined8 *)(puVar3 + 0x80),auStack_78);
    System_Collections_Generic_Dictionary_object__object___Add_34b43a4
              (lVar11,*(undefined8 *)puVar6,uVar14,*(undefined8 *)puVar4);
    uVar14 = Dino_BusSand_App_QaPilot_Runner__get_OutPath_21577c0();
    uVar12 = Dino_BusSand_App_MiniJson__Serialize_21556ec(lVar11);
    uVar12 = System_String__Concat_46c82e0(uVar12,*(undefined8 *)PTR_DAT_04caa398,0);
    System_IO_File__AppendAllText_47f9cb8(uVar14,uVar12,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

