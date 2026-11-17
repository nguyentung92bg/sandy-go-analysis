/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Tap
void Dino_BusSand_Cheat_AutoQa__Tap (Dino_BusSand_Cheat_AutoQa_o* __this, Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Tap
   void Dino_BusSand_Cheat_AutoQa__Tap (Dino_BusSand_Cheat_AutoQa_o* __this,
   Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method); */

ulong Dino_BusSand_Cheat_AutoQa__Tap_23429d0(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  undefined4 uVar21;
  float extraout_s0;
  
  if ((bRam0000000004f9c6a1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04cb96a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb96b0);
    FUN_02132f7c(PTR_DAT_04cb96b8);
    FUN_02132f7c(PTR_DAT_04caf288);
    bRam0000000004f9c6a1 = 1;
  }
  puVar3 = PTR_DAT_04cb96b0;
  if (param_2 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0xbf800000;
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar15 = *param_2;
  bVar2 = *(byte *)(*(long *)PTR_DAT_04cabdc0 + 0x130);
  if ((bVar2 <= *(byte *)(lVar15 + 0x130)) &&
     (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_04cabdc0)) {
    uVar8 = 0;
    if ((bRam0000000004f9bc92 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8,0);
      bRam0000000004f9bc92 = 1;
      uVar8 = extraout_x1;
    }
    puVar3 = PTR_DAT_04ca9ae8;
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0,uVar8);
      cRam0000000004f9b94d = '\x01';
    }
    puVar4 = PTR_DAT_04cad1b0;
    uVar8 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar6 & 1) == 0) {
      return uVar6;
    }
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    puVar5 = PTR_DAT_04cb1b30;
    puVar3 = PTR_DAT_04ca9ae8;
    lVar15 = **(long **)(*(long *)puVar4 + 0xb8);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((bRam0000000004f9bc7a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa458);
      FUN_02132f7c(PTR_DAT_04caa210);
      FUN_02132f7c(PTR_DAT_04cb1b38);
      FUN_02132f7c(PTR_DAT_04cad3f8);
      FUN_02132f7c(PTR_DAT_04cb1b40);
      FUN_02132f7c(PTR_DAT_04cb1b48);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cb1b50);
      FUN_02132f7c(PTR_DAT_04cb1b58);
      FUN_02132f7c(PTR_DAT_04cb1b60);
      FUN_02132f7c(PTR_DAT_04cb1b30);
      FUN_02132f7c(PTR_DAT_04cad4c0);
      bRam0000000004f9bc7a = 1;
    }
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
    System_Object___ctor_4870e5c(lVar7,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
    if ((uVar6 & 1) != 0) {
      return uVar6;
    }
    if (param_2 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x2c) != '\0') {
        return uVar6;
      }
      lVar15 = *(long *)(lVar15 + 0x38);
      *(undefined1 *)((long)param_2 + 0x2c) = 1;
      if (lVar15 == 0) goto LAB_022fedc4;
      System_Collections_Generic_List_object___Remove_3a830f8
                (lVar15,param_2,*(undefined8 *)PTR_DAT_04cb1b40);
      (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
      Dino_BusSand_App_UI_UIManagerEvents__RaiseClosed_21fee68(param_2);
      lVar15 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0);
      if (lVar7 == 0) goto LAB_022fedc4;
      plVar18 = (long *)(lVar7 + 0x10);
      *plVar18 = lVar15;
      thunk_FUN_02134474(plVar18,lVar15);
      if (*plVar18 == 0) goto LAB_022fedc4;
      lVar15 = UnityEngine_GameObject__GetComponent_object__275a5dc
                         (*plVar18,*(undefined8 *)PTR_DAT_04cad3f8);
      if (*plVar18 == 0) goto LAB_022fedc4;
      lVar11 = UnityEngine_GameObject__GetComponentInChildren_object__275a8b8
                         (*plVar18,*(undefined8 *)PTR_DAT_04cb1b38);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
      if ((uVar6 & 1) != 0) {
        uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar8,lVar7,*(undefined8 *)PTR_DAT_04cb1b58,0);
        if (lVar11 == 0) goto LAB_022fedc4;
        uVar6 = Dino_BusSand_App_UI_KitPop__PlayOut_228f2ec(lVar11,uVar8,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
          if ((uVar6 & 1) == 0) {
            return uVar6;
          }
          if (lVar15 != 0) {
            if ((bRam0000000004fa82e3 & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7608,0,0);
              bRam0000000004fa82e3 = 1;
            }
            if (lVar15 != 0) {
              lVar7 = *(long *)(lVar15 + 0x10);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar15,0);
              }
              if (pcRam0000000004fa82f0 == (code *)0x0) {
                pcRam0000000004fa82f0 = (code *)FUN_02132f40(&UNK_00e4d81f);
              }
                    /* WARNING: Could not recover jumptable at 0x044bc584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*pcRam0000000004fa82f0)(lVar7,0);
              return uVar6;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          goto LAB_022fedc4;
        }
      }
      lVar11 = *param_2;
      bVar2 = *(byte *)(*(long *)PTR_DAT_04cb1b48 + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04cb1b48))
      {
        bVar2 = *(byte *)(*(long *)PTR_DAT_04cb1b50 + 0x130);
        if ((*(byte *)(lVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04cb1b50)
           ) goto LAB_022fed94;
      }
      if (*plVar18 != 0) {
        uVar6 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(*plVar18,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Application__get_isPlaying_4351eec(0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
            if ((uVar6 & 1) != 0) {
              if (lVar15 == 0) goto LAB_022fedc4;
              UnityEngine_Behaviour__set_enabled_43bc50c(lVar15,0,0);
            }
            lVar15 = *plVar18;
            if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar15 = Dino_BusSand_App_UI_UiMotion__Group_228db38(lVar15,0);
            if (lVar15 != 0) {
              UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar15,0,0);
              uVar6 = Dino_BusSand_App_UI_UiMotion__Fade_2291234(0,_UNK_00e207cc,0,lVar15,0);
              uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
              System_Action___ctor_47b5ed0(uVar8,lVar7,*(undefined8 *)PTR_DAT_04cb1b60,0);
              if (uVar6 != 0) {
                *(undefined8 *)(uVar6 + 0x40) = uVar8;
                thunk_FUN_02134474((undefined8 *)(uVar6 + 0x40),uVar8,0);
                return uVar6;
              }
            }
            goto LAB_022fedc4;
          }
        }
LAB_022fed94:
        lVar15 = *plVar18;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar3 = PTR_DAT_04ca9ae8;
        uVar8 = 0;
        if ((bRam0000000004fa8603 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0);
          bRam0000000004fa8603 = 1;
          uVar8 = extraout_x1_00;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          uVar8 = extraout_x1_01;
        }
        puVar3 = PTR_DAT_04cf6418;
        if ((bRam0000000004fa8602 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf6418,uVar8);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          bRam0000000004fa8602 = 1;
        }
        if (*(long *)(*(long *)puVar3 + 0x38) == 0) {
          FUN_0216b4cc();
        }
        uVar8 = 0;
        if (lVar15 != 0) {
          uVar8 = *(undefined8 *)(lVar15 + 0x10);
        }
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (pcRam0000000004fa8680 == (code *)0x0) {
          pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
        }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*pcRam0000000004fa8680)(0,uVar8);
        return uVar6;
      }
    }
LAB_022fedc4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_04cb96b8 + 0x130);
  if ((*(byte *)(lVar15 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04cb96b8)) {
    *(undefined4 *)(param_1 + 0x2c) = 0xbf800000;
    lVar15 = *param_2;
    bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((bVar2 <= *(byte *)(lVar15 + 0x130)) &&
       (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3))
    goto LAB_02442ca4;
    bVar2 = *(byte *)(*(long *)PTR_DAT_04cb96a8 + 0x130);
    if ((bVar2 <= *(byte *)(lVar15 + 0x130)) &&
       (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_04cb96a8))
    goto LAB_02442ca4;
    lVar15 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_2,*(undefined8 *)PTR_DAT_04caf288,0);
    puVar3 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
    if ((uVar6 & 1) != 0) {
      if ((lVar15 == 0) ||
         (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0), lVar7 == 0))
      goto LAB_02442cfc;
      uVar6 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar7,0);
      if ((uVar6 & 1) != 0) {
        lVar7 = *(long *)PTR_DAT_04cb9568;
LAB_02442cd8:
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar3 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004f9c6a4 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cabca8);
          FUN_02132f7c(PTR_DAT_04cabcb0);
          FUN_02132f7c(PTR_DAT_04cabcb8);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cabcc0);
          bRam0000000004f9c6a4 = 1;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar15,0,0);
        if ((uVar6 & 1) != 0) {
          return uVar6;
        }
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0);
        if (*(int *)(*(long *)PTR_DAT_04cabca8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabca8);
        }
        uVar9 = UnityEngine_EventSystems_EventSystem__get_current_46a1b64(0);
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cabcc0);
        UnityEngine_EventSystems_PointerEventData___ctor_46a11f8(uVar10,uVar9,0);
        puVar3 = PTR_DAT_04cabcb8;
        if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88e == '\0') {
          FUN_02132f7c(PTR_DAT_04cabcb8);
          cRam0000000004f9b88e = '\x01';
        }
        lVar15 = *(long *)puVar3;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar15 = *(long *)puVar3;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x28);
        lVar7 = *(long *)PTR_DAT_04cabcb0;
        if (*(long *)(lVar7 + 0x38) == 0) {
          FUN_02132f7c(PTR_DAT_04cc4458);
          FUN_02132f7c(PTR_DAT_04cc4460);
          FUN_02132f7c(PTR_DAT_04cc4468);
          FUN_02132f7c(PTR_DAT_04cabcb8);
          FUN_02132f7c(PTR_DAT_04cc4470);
          FUN_02132f7c(PTR_DAT_04cc4478);
          if (*(long *)(lVar7 + 0x38) == 0) {
            FUN_0216b4cc(lVar7);
          }
        }
        puVar3 = PTR_DAT_04cc4468;
        if (*(int *)(*(long *)PTR_DAT_04cc4468 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar11 = UnityEngine_Pool_CollectionPool_object__object___Get_32ba63c
                           (*(undefined8 *)PTR_DAT_04cc4458);
        if (*(int *)(*(long *)PTR_DAT_04cabcb8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cabcb8);
        }
        UnityEngine_EventSystems_ExecuteEvents__GetEventList_object__2746ba4
                  (uVar8,lVar11,**(undefined8 **)(lVar7 + 0x38));
        puVar4 = PTR_DAT_04cc4478;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        iVar1 = *(int *)(lVar11 + 0x18);
        if (iVar1 < 1) {
          uVar17 = 0;
        }
        else {
          iVar19 = 0;
          do {
            lVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar11,iVar19,*(undefined8 *)puVar4);
            lVar20 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
            lVar13 = lVar12;
            if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
              lVar13 = FUN_0216b470(lVar20);
              lVar20 = lVar13;
            }
            if (lVar12 == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = thunk_FUN_0216e7a0(lVar12,lVar20);
              lVar13 = lVar14;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021335a4(lVar12,lVar20);
              }
            }
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224(lVar13,lVar14);
            }
            (**(code **)(lVar15 + 0x18))
                      (*(undefined8 *)(lVar15 + 0x40),lVar14,uVar10,*(undefined8 *)(lVar15 + 0x28));
            iVar19 = iVar19 + 1;
          } while (iVar1 != iVar19);
          uVar17 = (uint)(0 < *(int *)(lVar11 + 0x18));
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Pool_CollectionPool_object__object___Release_32ba7a4
                  (lVar11,*(undefined8 *)PTR_DAT_04cc4460);
        return (ulong)uVar17;
      }
    }
    puVar4 = PTR_DAT_04cb9568;
    lVar15 = *(long *)PTR_DAT_04cb9568;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar15 = *(long *)puVar4;
    }
    lVar7 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x38);
    if (lVar7 == 0) {
LAB_02442cfc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar6 = 0;
      uVar16 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar16 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar15 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                           (param_2,*(undefined8 *)(lVar7 + 0x20 + uVar6 * 8),0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar16 = UnityEngine_Object__op_Inequality_43c8dec(lVar15,0,0);
        if ((uVar16 & 1) != 0) {
          if ((lVar15 == 0) ||
             (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar15,0), lVar11 == 0))
          goto LAB_02442cfc;
          uVar16 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar11,0);
          if ((uVar16 & 1) != 0) {
            lVar7 = *(long *)puVar4;
            goto LAB_02442cd8;
          }
        }
        uVar16 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
  }
  else {
    if (*(float *)(param_1 + 0x2c) < 0.0) {
      uVar21 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
      *(undefined4 *)(param_1 + 0x2c) = uVar21;
    }
    uVar6 = UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    if (extraout_s0 - *(float *)(param_1 + 0x2c) <= 6.0) {
      return uVar6;
    }
  }
  lVar15 = *param_2;
LAB_02442ca4:
                    /* WARNING: Could not recover jumptable at 0x02442cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(lVar15 + 0x1a8))(param_2,*(undefined8 *)(lVar15 + 0x1b0));
  return uVar6;
}

